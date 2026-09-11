#include "ReporterClient.h"

#include <errno.h>
#include <poll.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
#include <vector>

namespace WPEFramework {
namespace Plugin {

const char ReporterClient::kControlSocketPath[] = "/run/rbus-diagnostics/control.sock";

namespace {

static const uint16_t kProtocolVersion = 1;
static const size_t kControlHeaderSize = 16;
static const size_t kControlReplyHeaderSize = 24;

void WriteU16(uint8_t* destination, uint16_t value)
{
    destination[0] = static_cast<uint8_t>(value >> 8);
    destination[1] = static_cast<uint8_t>(value);
}

void WriteU32(uint8_t* destination, uint32_t value)
{
    destination[0] = static_cast<uint8_t>(value >> 24);
    destination[1] = static_cast<uint8_t>(value >> 16);
    destination[2] = static_cast<uint8_t>(value >> 8);
    destination[3] = static_cast<uint8_t>(value);
}

void WriteU64(uint8_t* destination, uint64_t value)
{
    for (size_t index = 0; index < sizeof(value); ++index) {
        destination[index] = static_cast<uint8_t>(value >> (56 - index * 8));
    }
}

uint16_t ReadU16(const uint8_t* source)
{
    return static_cast<uint16_t>((static_cast<uint16_t>(source[0]) << 8) | source[1]);
}

uint32_t ReadU32(const uint8_t* source)
{
    return (static_cast<uint32_t>(source[0]) << 24) |
        (static_cast<uint32_t>(source[1]) << 16) |
        (static_cast<uint32_t>(source[2]) << 8) |
        static_cast<uint32_t>(source[3]);
}

uint64_t ReadU64(const uint8_t* source)
{
    uint64_t value = 0;
    for (size_t index = 0; index < sizeof(value); ++index) {
        value = (value << 8) | source[index];
    }
    return value;
}

bool WaitFor(int descriptor, short events)
{
    struct pollfd pollDescriptor = {};
    pollDescriptor.fd = descriptor;
    pollDescriptor.events = events;

    int result = 0;
    do {
        result = poll(&pollDescriptor, 1, ReporterClient::kDeadlineMilliseconds);
    } while (result < 0 && errno == EINTR);

    return result == 1 && (pollDescriptor.revents & events) != 0;
}

} // namespace

ReporterClient::ReporterClient()
{
}

ReporterClient::~ReporterClient()
{
}

uint32_t ReporterClient::Request(
    RequestType requestType,
    uint64_t requestId,
    const std::string& provider,
    uint16_t limit,
    Reply* reply) const
{
    if (reply == nullptr ||
        provider.length() > 256 ||
        ((requestType == RequestType::ProviderList ||
          requestType == RequestType::SlowRequestList) &&
         (limit == 0 || limit > 128))) {
        return kMalformedReply;
    }

    size_t requestSize = kControlHeaderSize;
    if (requestType == RequestType::ProviderMetrics) {
        requestSize += 2 + provider.length();
    } else if (requestType == RequestType::ProviderList ||
        requestType == RequestType::SlowRequestList) {
        requestSize += 2;
    }
    if (requestSize > kMaximumControlBytes) {
        return kMalformedReply;
    }

    const int descriptor = socket(AF_UNIX, SOCK_SEQPACKET | SOCK_CLOEXEC, 0);
    if (descriptor < 0) {
        return kReporterUnavailable;
    }

    struct sockaddr_un address = {};
    address.sun_family = AF_UNIX;
    if (sizeof(kControlSocketPath) > sizeof(address.sun_path)) {
        close(descriptor);
        return kReporterUnavailable;
    }
    memcpy(address.sun_path, kControlSocketPath, sizeof(kControlSocketPath));

    if (connect(descriptor, reinterpret_cast<const struct sockaddr*>(&address), sizeof(address)) != 0) {
        close(descriptor);
        return kReporterUnavailable;
    }

    std::vector<uint8_t> request(requestSize, 0);
    WriteU16(request.data(), kProtocolVersion);
    WriteU16(request.data() + 2, static_cast<uint16_t>(requestType));
    WriteU32(request.data() + 4, static_cast<uint32_t>(request.size()));
    WriteU64(request.data() + 8, requestId);
    if (requestType == RequestType::ProviderMetrics) {
        WriteU16(request.data() + kControlHeaderSize, static_cast<uint16_t>(provider.length()));
        memcpy(request.data() + kControlHeaderSize + 2, provider.data(), provider.length());
    } else if (requestType == RequestType::ProviderList ||
        requestType == RequestType::SlowRequestList) {
        WriteU16(request.data() + kControlHeaderSize, limit);
    }

    if (!WaitFor(descriptor, POLLOUT) ||
        send(descriptor, request.data(), request.size(), MSG_NOSIGNAL) !=
            static_cast<ssize_t>(request.size()) ||
        !WaitFor(descriptor, POLLIN)) {
        close(descriptor);
        return kReporterUnavailable;
    }

    std::vector<uint8_t> encodedReply(kMaximumControlBytes, 0);
    const ssize_t received = recv(descriptor, encodedReply.data(), encodedReply.size(), 0);
    close(descriptor);

    if (received < static_cast<ssize_t>(kControlReplyHeaderSize) ||
        received > static_cast<ssize_t>(kMaximumControlBytes) ||
        ReadU16(encodedReply.data()) != kProtocolVersion ||
        ReadU16(encodedReply.data() + 2) != static_cast<uint16_t>(requestType) ||
        ReadU32(encodedReply.data() + 4) != static_cast<uint32_t>(received) ||
        ReadU64(encodedReply.data() + 8) != requestId ||
        ReadU16(encodedReply.data() + 18) != 0 ||
        ReadU32(encodedReply.data() + 20) !=
            static_cast<uint32_t>(received - kControlReplyHeaderSize)) {
        return kMalformedReply;
    }

    const uint16_t status = ReadU16(encodedReply.data() + 16);
    if (status != static_cast<uint16_t>(ReplyStatus::Success) &&
        status != static_cast<uint16_t>(ReplyStatus::ProviderNotFound)) {
        return kMalformedReply;
    }

    reply->type = requestType;
    reply->requestId = requestId;
    reply->status = static_cast<ReplyStatus>(status);
    reply->payload.assign(
        reinterpret_cast<const char*>(encodedReply.data() + kControlReplyHeaderSize),
        static_cast<size_t>(received) - kControlReplyHeaderSize);
    return Core::ERROR_NONE;
}

} // namespace Plugin
} // namespace WPEFramework
