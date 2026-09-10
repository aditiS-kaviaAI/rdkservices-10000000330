#include <gtest/gtest.h>

#include <arpa/inet.h>
#include <chrono>
#include <cstdlib>
#include <cstring>
#include <string>
#include <thread>

#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

/*
 * Compile the plugin implementation into this isolated test binary so its
 * private socket client can be driven through the same registered JSON-RPC
 * handlers used by Thunder. This test-only build never ships in the plugin.
 */
#include "../RBusDiagnostics.cpp"

using namespace WPEFramework;

namespace {

constexpr uint16_t kProtocolVersion = 1;
constexpr uint16_t kGetGlobalRequest = 2;
constexpr uint16_t kResetRequest = 3;
constexpr uint16_t kGetProviderRequest = 8;
constexpr uint16_t kListProvidersRequest = 9;
constexpr uint16_t kListSlowRequestsRequest = 10;
constexpr uint16_t kGlobalSnapshot = 4;
constexpr uint16_t kResetResult = 5;
constexpr uint16_t kProviderList = 12;
constexpr uint16_t kSlowRequestList = 13;
constexpr uint16_t kProviderNotFound = 14;
constexpr size_t kSnapshotSize = 128 + (4 * 64);

void WriteU16(uint8_t* destination, const uint16_t value)
{
    const uint16_t networkValue = htons(value);
    std::memcpy(destination, &networkValue, sizeof(networkValue));
}

void WriteU32(uint8_t* destination, const uint32_t value)
{
    const uint32_t networkValue = htonl(value);
    std::memcpy(destination, &networkValue, sizeof(networkValue));
}

uint16_t ReadU16(const uint8_t* source)
{
    uint16_t value = 0;
    std::memcpy(&value, source, sizeof(value));
    return ntohs(value);
}

/**
 * A single-request local SOCK_SEQPACKET server used as the reporter control
 * boundary. It records forwarding without exposing a real reporter process.
 */
class FakeReporterServer {
public:
    enum class Reply {
        Snapshot,
        ProviderNotFound,
        Malformed,
        Timeout
    };

    explicit FakeReporterServer(const Reply reply)
        : _reply(reply)
        , _socket(-1)
        , _receivedType(0)
        , _receivedLimit(0)
    {
        char pathTemplate[] = "/tmp/rbus-diagnostics-plugin-XXXXXX";
        const int temporaryFile = mkstemp(pathTemplate);
        EXPECT_NE(-1, temporaryFile);
        close(temporaryFile);
        unlink(pathTemplate);
        _path = pathTemplate;

        _socket = socket(AF_UNIX, SOCK_SEQPACKET | SOCK_CLOEXEC, 0);
        EXPECT_NE(-1, _socket);

        sockaddr_un address {};
        address.sun_family = AF_UNIX;
        std::strncpy(address.sun_path, _path.c_str(), sizeof(address.sun_path) - 1);
        EXPECT_EQ(0, bind(_socket, reinterpret_cast<const sockaddr*>(&address), sizeof(address)));
        EXPECT_EQ(0, listen(_socket, 1));

        _thread = std::thread(&FakeReporterServer::Serve, this);
        ASSERT_EQ(0, setenv("RBUS_DIAGNOSTICS_TEST_CONTROL_SOCKET", _path.c_str(), 1));
    }

    ~FakeReporterServer()
    {
        _thread.join();
        unsetenv("RBUS_DIAGNOSTICS_TEST_CONTROL_SOCKET");
        close(_socket);
        unlink(_path.c_str());
    }

    uint16_t ReceivedType() const
    {
        return _receivedType;
    }

    uint32_t ReceivedLimit() const
    {
        return _receivedLimit;
    }

private:
    void Serve()
    {
        const int client = accept4(_socket, nullptr, nullptr, SOCK_CLOEXEC);
        if (client < 0) {
            return;
        }

        uint8_t request[80] {};
        if (recv(client, request, sizeof(request), 0) != static_cast<ssize_t>(sizeof(request))) {
            close(client);
            return;
        }
        _receivedType = ReadU16(request + 2);
        uint32_t limit = 0;
        std::memcpy(&limit, request + 8, sizeof(limit));
        _receivedLimit = ntohl(limit);

        if (_reply == Reply::Timeout) {
            std::this_thread::sleep_for(std::chrono::milliseconds(150));
            close(client);
            return;
        }

        if (_reply == Reply::ProviderNotFound) {
            uint8_t response[8] {};
            WriteU16(response, kProtocolVersion);
            WriteU16(response + 2, kProviderNotFound);
            WriteU32(response + 4, sizeof(response));
            send(client, response, sizeof(response), MSG_NOSIGNAL);
            close(client);
            return;
        }

        const size_t responseLength = _reply == Reply::Malformed ? 128 : kSnapshotSize;
        std::vector<uint8_t> response(responseLength, 0);
        WriteU16(response.data(), kProtocolVersion);
        WriteU16(response.data() + 2,
            _receivedType == kResetRequest ? kResetResult :
            _receivedType == kListProvidersRequest ? kProviderList :
            _receivedType == kListSlowRequestsRequest ? kSlowRequestList :
            kGlobalSnapshot);
        WriteU32(response.data() + 4, static_cast<uint32_t>(responseLength));
        send(client, response.data(), response.size(), MSG_NOSIGNAL);
        close(client);
    }

    Reply _reply;
    std::string _path;
    int _socket;
    uint16_t _receivedType;
    uint32_t _receivedLimit;
    std::thread _thread;
};

class RBusDiagnosticsJsonRpcTest : public ::testing::Test {
protected:
    Core::ProxyType<Plugin::RBusDiagnostics> _plugin;
    Core::JSONRPC::Handler& _handler;
    Core::JSONRPC::Connection _connection;
    string _response;

    RBusDiagnosticsJsonRpcTest()
        : _plugin(Core::ProxyType<Plugin::RBusDiagnostics>::Create())
        , _handler(*_plugin)
        , _connection(1, 0)
    {
    }

    ~RBusDiagnosticsJsonRpcTest() override
    {
        _plugin.Release();
    }

    uint32_t Invoke(const TCHAR method[], const TCHAR parameters[])
    {
        _response.clear();
        return _handler.Invoke(_connection, method, parameters, _response);
    }
};

TEST_F(RBusDiagnosticsJsonRpcTest, RegistersOnlyTheFiveMvpMethods)
{
    EXPECT_EQ(Core::ERROR_NONE, _handler.Exists(_T("getGlobalMetrics")));
    EXPECT_EQ(Core::ERROR_NONE, _handler.Exists(_T("getProviderMetrics")));
    EXPECT_EQ(Core::ERROR_NONE, _handler.Exists(_T("getAllProviders")));
    EXPECT_EQ(Core::ERROR_NONE, _handler.Exists(_T("getSlowRequests")));
    EXPECT_EQ(Core::ERROR_NONE, _handler.Exists(_T("resetMetrics")));
    EXPECT_NE(Core::ERROR_NONE, _handler.Exists(_T("getEventMetrics")));
    EXPECT_NE(Core::ERROR_NONE, _handler.Exists(_T("getConfiguration")));
    EXPECT_NE(Core::ERROR_NONE, _handler.Exists(_T("setConfiguration")));
}

TEST_F(RBusDiagnosticsJsonRpcTest, ForwardsAllFiveMvpRequestsToTheFakeReporter)
{
    {
        FakeReporterServer reporter(FakeReporterServer::Reply::Snapshot);
        EXPECT_EQ(Core::ERROR_NONE, Invoke(_T("getGlobalMetrics"), _T("{}")));
        EXPECT_EQ(kGetGlobalRequest, reporter.ReceivedType());
    }
    {
        FakeReporterServer reporter(FakeReporterServer::Reply::Snapshot);
        EXPECT_EQ(Core::ERROR_NONE,
            Invoke(_T("getProviderMetrics"), _T("{\"provider\":\"Device.WiFi\"}")));
        EXPECT_EQ(kGetProviderRequest, reporter.ReceivedType());
    }
    {
        FakeReporterServer reporter(FakeReporterServer::Reply::Snapshot);
        EXPECT_EQ(Core::ERROR_NONE, Invoke(_T("getAllProviders"), _T("{\"limit\":2}")));
        EXPECT_EQ(kListProvidersRequest, reporter.ReceivedType());
        EXPECT_EQ(2U, reporter.ReceivedLimit());
    }
    {
        FakeReporterServer reporter(FakeReporterServer::Reply::Snapshot);
        EXPECT_EQ(Core::ERROR_NONE, Invoke(_T("getSlowRequests"), _T("{\"limit\":3}")));
        EXPECT_EQ(kListSlowRequestsRequest, reporter.ReceivedType());
        EXPECT_EQ(3U, reporter.ReceivedLimit());
    }
    {
        FakeReporterServer reporter(FakeReporterServer::Reply::Snapshot);
        EXPECT_EQ(Core::ERROR_NONE, Invoke(_T("resetMetrics"), _T("{}")));
        EXPECT_EQ(kResetRequest, reporter.ReceivedType());
    }
}

TEST_F(RBusDiagnosticsJsonRpcTest, RejectsBoundsBeforeReporterInvocation)
{
    EXPECT_EQ(Core::ERROR_BAD_REQUEST,
        Invoke(_T("getProviderMetrics"), _T("{\"provider\":\"\"}")));
    EXPECT_EQ(Core::ERROR_BAD_REQUEST,
        Invoke(_T("getAllProviders"), _T("{\"limit\":0}")));
    EXPECT_EQ(Core::ERROR_BAD_REQUEST,
        Invoke(_T("getAllProviders"), _T("{\"limit\":33}")));
    EXPECT_EQ(Core::ERROR_BAD_REQUEST,
        Invoke(_T("getSlowRequests"), _T("{\"limit\":0}")));
    EXPECT_EQ(Core::ERROR_BAD_REQUEST,
        Invoke(_T("getSlowRequests"), _T("{\"limit\":33}")));
}

TEST_F(RBusDiagnosticsJsonRpcTest, MapsRetainedProviderMissToUnknownProvider)
{
    FakeReporterServer reporter(FakeReporterServer::Reply::ProviderNotFound);

    EXPECT_EQ(Core::ERROR_UNKNOWN_KEY,
        Invoke(_T("getProviderMetrics"), _T("{\"provider\":\"Missing.Provider\"}")));
    EXPECT_NE(string::npos, _response.find(_T("UNKNOWN_PROVIDER")));
}

TEST_F(RBusDiagnosticsJsonRpcTest, MapsMalformedAndDeadlineResponsesToReporterUnavailable)
{
    {
        FakeReporterServer reporter(FakeReporterServer::Reply::Malformed);
        EXPECT_EQ(Core::ERROR_UNAVAILABLE, Invoke(_T("getGlobalMetrics"), _T("{}")));
        EXPECT_NE(string::npos, _response.find(_T("REPORTER_UNAVAILABLE")));
    }
    {
        FakeReporterServer reporter(FakeReporterServer::Reply::Timeout);
        const auto started = std::chrono::steady_clock::now();
        EXPECT_EQ(Core::ERROR_UNAVAILABLE, Invoke(_T("resetMetrics"), _T("{}")));
        const auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now() - started);
        EXPECT_LT(elapsed.count(), 140);
        EXPECT_NE(string::npos, _response.find(_T("REPORTER_UNAVAILABLE")));
    }
}

} // namespace
