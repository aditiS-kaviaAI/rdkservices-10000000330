#include <gtest/gtest.h>

#include <algorithm>
#include <cstring>
#include <string>
#include <vector>

#define private public
#include "../RBusDiagnostics.h"
#undef private

namespace {

struct FakeTransport {
    bool connectSucceeds;
    std::vector<uint8_t> request;
    std::vector<uint8_t> response;
    int socketCalls;
    int connectCalls;
    int sendCalls;
    int receiveCalls;

    FakeTransport()
        : connectSucceeds(true)
        , socketCalls(0)
        , connectCalls(0)
        , sendCalls(0)
        , receiveCalls(0)
    {
    }

    void Reset()
    {
        connectSucceeds = true;
        request.clear();
        response.clear();
        socketCalls = 0;
        connectCalls = 0;
        sendCalls = 0;
        receiveCalls = 0;
    }
};

FakeTransport g_transport;

void WriteU16(std::vector<uint8_t>* output, const uint16_t value)
{
    output->push_back(static_cast<uint8_t>(value >> 8));
    output->push_back(static_cast<uint8_t>(value));
}

void WriteU32(std::vector<uint8_t>* output, const uint32_t value)
{
    output->push_back(static_cast<uint8_t>(value >> 24));
    output->push_back(static_cast<uint8_t>(value >> 16));
    output->push_back(static_cast<uint8_t>(value >> 8));
    output->push_back(static_cast<uint8_t>(value));
}

void WriteU64(std::vector<uint8_t>* output, const uint64_t value)
{
    for (int shift = 56; shift >= 0; shift -= 8) {
        output->push_back(static_cast<uint8_t>(value >> shift));
    }
}

uint16_t ReadU16(const std::vector<uint8_t>& input, const size_t offset)
{
    return static_cast<uint16_t>(
        (static_cast<uint16_t>(input[offset]) << 8) | input[offset + 1]);
}

uint64_t ReadU64(const std::vector<uint8_t>& input, const size_t offset)
{
    uint64_t value = 0;
    for (size_t index = 0; index < sizeof(value); ++index) {
        value = (value << 8) | input[offset + index];
    }
    return value;
}

std::vector<uint8_t> BuildReply(
    const uint16_t type,
    const uint64_t requestId,
    const uint16_t status,
    const std::string& payload)
{
    std::vector<uint8_t> reply;
    const uint32_t size = static_cast<uint32_t>(24 + payload.size());

    WriteU16(&reply, 1);
    WriteU16(&reply, type);
    WriteU32(&reply, size);
    WriteU64(&reply, requestId);
    WriteU16(&reply, status);
    WriteU16(&reply, 0);
    WriteU32(&reply, static_cast<uint32_t>(payload.size()));
    reply.insert(reply.end(), payload.begin(), payload.end());
    return reply;
}

} // namespace

/*
 * Compile the production transport implementation into this test translation
 * unit with its POSIX calls redirected to the deterministic fake below. This
 * verifies client framing without creating the protected production endpoint.
 */
#define socket RBusDiagnosticsTestSocket
#define connect RBusDiagnosticsTestConnect
#define close RBusDiagnosticsTestClose
#define poll RBusDiagnosticsTestPoll
#define send RBusDiagnosticsTestSend
#define recv RBusDiagnosticsTestReceive
#include "../ReporterClient.cpp"
#undef socket
#undef connect
#undef close
#undef poll
#undef send
#undef recv

#include "../RBusDiagnostics.cpp"

extern "C" int RBusDiagnosticsTestSocket(int, int, int)
{
    ++g_transport.socketCalls;
    return 41;
}

extern "C" int RBusDiagnosticsTestConnect(
    int,
    const struct sockaddr*,
    socklen_t)
{
    ++g_transport.connectCalls;
    return g_transport.connectSucceeds ? 0 : -1;
}

extern "C" int RBusDiagnosticsTestClose(int)
{
    return 0;
}

extern "C" int RBusDiagnosticsTestPoll(
    struct pollfd* descriptors,
    nfds_t count,
    int)
{
    if (count != 1) {
        return -1;
    }

    descriptors[0].revents = descriptors[0].events;
    return 1;
}

extern "C" ssize_t RBusDiagnosticsTestSend(
    int,
    const void* buffer,
    size_t length,
    int)
{
    ++g_transport.sendCalls;
    const uint8_t* bytes = static_cast<const uint8_t*>(buffer);
    g_transport.request.assign(bytes, bytes + length);
    return static_cast<ssize_t>(length);
}

extern "C" ssize_t RBusDiagnosticsTestReceive(int, void* buffer, size_t length, int)
{
    ++g_transport.receiveCalls;
    if (g_transport.response.size() > length) {
        return -1;
    }

    std::memcpy(buffer, g_transport.response.data(), g_transport.response.size());
    return static_cast<ssize_t>(g_transport.response.size());
}

namespace {

using WPEFramework::Core::ERROR_BAD_REQUEST;
using WPEFramework::Core::ERROR_NONE;
using WPEFramework::JsonObject;
using WPEFramework::Plugin::RBusDiagnostics;

class RBusDiagnosticsTest : public ::testing::Test {
protected:
    void SetUp() override
    {
        g_transport.Reset();
    }

    static JsonObject EmptyParameters()
    {
        return JsonObject();
    }
};

TEST_F(RBusDiagnosticsTest, RegistersOnlyTheApprovedThunderMethods)
{
    RBusDiagnostics plugin;

    EXPECT_EQ(ERROR_NONE, plugin.Exists(_T("getGlobalMetrics")));
    EXPECT_EQ(ERROR_NONE, plugin.Exists(_T("getProviderMetrics")));
    EXPECT_EQ(ERROR_NONE, plugin.Exists(_T("getAllProviders")));
    EXPECT_EQ(ERROR_NONE, plugin.Exists(_T("getSlowRequests")));
    EXPECT_EQ(ERROR_NONE, plugin.Exists(_T("resetMetrics")));
    EXPECT_NE(ERROR_NONE, plugin.Exists(_T("setConfiguration")));
    EXPECT_NE(ERROR_NONE, plugin.Exists(_T("getDiagnostics")));
}

TEST_F(RBusDiagnosticsTest, ForwardsGlobalResponseThroughThunderHandler)
{
    RBusDiagnostics plugin;
    WPEFramework::Core::JSONRPC::Handler& handler(plugin);
    WPEFramework::Core::JSONRPC::Connection connection(1, 0);
    string response;

    g_transport.response = BuildReply(2, 1, 0, "{\"measurementGeneration\":7}");

    EXPECT_EQ(
        ERROR_NONE,
        handler.Invoke(connection, _T("getGlobalMetrics"), _T("{}"), response));
    EXPECT_EQ(
        _T("{\"reporterPayload\":\"{\\\"measurementGeneration\\\":7}\",\"success\":true}"),
        response);
    ASSERT_EQ(16u, g_transport.request.size());
    EXPECT_EQ(2u, ReadU16(g_transport.request, 2));
    EXPECT_EQ(1u, ReadU64(g_transport.request, 8));
}

TEST_F(RBusDiagnosticsTest, MapsUnavailableAndMalformedRepliesToUnavailable)
{
    RBusDiagnostics plugin;
    JsonObject response;

    g_transport.connectSucceeds = false;
    EXPECT_EQ(
        0xFFFFFFFEu,
        plugin.GetGlobalMetrics(EmptyParameters(), response));
    EXPECT_EQ(_T("REPORTER_UNAVAILABLE"), response["error"].String());
    EXPECT_EQ(-32070, response["code"].Number());

    g_transport.Reset();
    g_transport.response = BuildReply(3, 1, 0, "{}"); // Wrong reply type.
    response = JsonObject();

    EXPECT_EQ(
        0xFFFFFFFEu,
        plugin.GetGlobalMetrics(EmptyParameters(), response));
    EXPECT_EQ(_T("REPORTER_UNAVAILABLE"), response["error"].String());
    EXPECT_EQ(-32070, response["code"].Number());
}

TEST_F(RBusDiagnosticsTest, MapsExplicitProviderMissToProviderNotFound)
{
    RBusDiagnostics plugin;
    JsonObject parameters;
    JsonObject response;

    parameters["provider"] = _T("org.rdk.Missing");
    g_transport.response = BuildReply(6, 1, 1, "{}");

    EXPECT_EQ(0xFFFFFFFDu, plugin.GetProviderMetrics(parameters, response));
    EXPECT_EQ(_T("PROVIDER_NOT_FOUND"), response["error"].String());
    EXPECT_EQ(-32071, response["code"].Number());
    ASSERT_GT(g_transport.request.size(), 18u);
    EXPECT_EQ(6u, ReadU16(g_transport.request, 2));
}

TEST_F(RBusDiagnosticsTest, ValidatesProviderAndListBoundsBeforeReporterCalls)
{
    RBusDiagnostics plugin;
    JsonObject parameters;
    JsonObject response;

    parameters["provider"] = string(257, 'p');
    EXPECT_EQ(ERROR_BAD_REQUEST, plugin.GetProviderMetrics(parameters, response));
    EXPECT_EQ(0, g_transport.socketCalls);

    parameters = JsonObject();
    parameters["limit"] = 0;
    EXPECT_EQ(ERROR_BAD_REQUEST, plugin.GetAllProviders(parameters, response));
    EXPECT_EQ(0, g_transport.socketCalls);

    parameters["limit"] = 129;
    EXPECT_EQ(ERROR_BAD_REQUEST, plugin.GetSlowRequests(parameters, response));
    EXPECT_EQ(0, g_transport.socketCalls);
}

TEST_F(RBusDiagnosticsTest, ForwardsBoundedListAndResetRequests)
{
    RBusDiagnostics plugin;
    JsonObject listParameters;
    JsonObject response;

    listParameters["limit"] = 128;
    g_transport.response = BuildReply(7, 1, 0, "{\"providers\":[]}");
    EXPECT_EQ(ERROR_NONE, plugin.GetAllProviders(listParameters, response));
    ASSERT_EQ(18u, g_transport.request.size());
    EXPECT_EQ(7u, ReadU16(g_transport.request, 2));
    EXPECT_EQ(128u, ReadU16(g_transport.request, 16));

    g_transport.response = BuildReply(3, 2, 0, "{\"measurementGeneration\":8}");
    response = JsonObject();
    EXPECT_EQ(ERROR_NONE, plugin.ResetMetrics(EmptyParameters(), response));
    EXPECT_EQ(_T("{\"measurementGeneration\":8}"), response["reporterPayload"].String());
    ASSERT_EQ(16u, g_transport.request.size());
    EXPECT_EQ(3u, ReadU16(g_transport.request, 2));
    EXPECT_EQ(2u, ReadU64(g_transport.request, 8));
}

} // namespace
