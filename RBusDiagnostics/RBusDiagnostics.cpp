#include "RBusDiagnostics.h"

#include <chrono>
#include <cstring>

#include <cerrno>
#include <fcntl.h>
#include <poll.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

#define API_VERSION_NUMBER_MAJOR 1
#define API_VERSION_NUMBER_MINOR 0
#define API_VERSION_NUMBER_PATCH 0
#define RBUS_DIAGNOSTICS_CONTROL_SOCKET "/tmp/rbus-diagnostics-control.sock"
#define RBUS_DIAGNOSTICS_IO_TIMEOUT_MS 1000

namespace WPEFramework {
namespace {

static Plugin::Metadata<Plugin::RBusDiagnostics> metadata(
    API_VERSION_NUMBER_MAJOR,
    API_VERSION_NUMBER_MINOR,
    API_VERSION_NUMBER_PATCH,
    {},
    {},
    {});

uint32_t waitForSocketEvent(const int socketFd, const short events, const int timeoutMs = RBUS_DIAGNOSTICS_IO_TIMEOUT_MS)
{
    struct pollfd descriptor;
    int pollResult;

    descriptor.fd = socketFd;
    descriptor.events = events;
    descriptor.revents = 0;

    do {
        pollResult = poll(&descriptor, 1, timeoutMs);
    } while (pollResult < 0 && errno == EINTR);

    if (pollResult == 0) {
        return Core::ERROR_TIMEDOUT;
    }

    if (pollResult < 0 || (descriptor.revents & (POLLERR | POLLNVAL)) != 0
        || ((descriptor.revents & events) == 0
            && !((events & POLLIN) != 0 && (descriptor.revents & POLLHUP) != 0))) {
        return Core::ERROR_UNAVAILABLE;
    }

    return Core::ERROR_NONE;
}
}

namespace Plugin {

SERVICE_REGISTRATION(
    RBusDiagnostics,
    API_VERSION_NUMBER_MAJOR,
    API_VERSION_NUMBER_MINOR,
    API_VERSION_NUMBER_PATCH);

RBusDiagnostics::RBusDiagnostics()
    : PluginHost::JSONRPC()
{
    Register("getGlobalMetrics", &RBusDiagnostics::getGlobalMetrics, this);
    Register("resetMetrics", &RBusDiagnostics::resetMetrics, this);
}

RBusDiagnostics::~RBusDiagnostics()
{
    Unregister("resetMetrics");
    Unregister("getGlobalMetrics");
}

const string RBusDiagnostics::Initialize(PluginHost::IShell* service)
{
    (void)service;
    return "";
}

void RBusDiagnostics::Deinitialize(PluginHost::IShell* service)
{
    (void)service;
}

string RBusDiagnostics::Information() const
{
    return "";
}

uint32_t RBusDiagnostics::requestReporter(const char* request, JsonObject& response) const
{
    int socketFd;
    struct sockaddr_un address;
    char payload[4096] = {0};
    size_t requestLength;
    size_t sent = 0;
    size_t payloadLength = 0;
    ssize_t received;
    uint32_t status;

    socketFd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (socketFd < 0) {
        return Core::ERROR_UNAVAILABLE;
    }

    if (fcntl(socketFd, F_SETFL, fcntl(socketFd, F_GETFL, 0) | O_NONBLOCK) == -1) {
        close(socketFd);
        return Core::ERROR_UNAVAILABLE;
    }

    memset(&address, 0, sizeof(address));
    address.sun_family = AF_UNIX;
    strncpy(address.sun_path, RBUS_DIAGNOSTICS_CONTROL_SOCKET, sizeof(address.sun_path) - 1);

    if (connect(socketFd, reinterpret_cast<const struct sockaddr*>(&address), sizeof(address)) != 0
        && errno != EINPROGRESS) {
        close(socketFd);
        return Core::ERROR_UNAVAILABLE;
    }

    status = waitForSocketEvent(socketFd, POLLOUT);
    if (status != Core::ERROR_NONE) {
        close(socketFd);
        return status;
    }

    {
        int connectionError = 0;
        socklen_t connectionErrorLength = sizeof(connectionError);

        if (getsockopt(socketFd, SOL_SOCKET, SO_ERROR, &connectionError, &connectionErrorLength) != 0
            || connectionError != 0) {
            close(socketFd);
            return Core::ERROR_UNAVAILABLE;
        }
    }

    requestLength = strlen(request);
    while (sent < requestLength) {
        received = send(socketFd, request + sent, requestLength - sent, MSG_NOSIGNAL);
        if (received > 0) {
            sent += static_cast<size_t>(received);
            continue;
        }

        if (received < 0 && (errno == EAGAIN || errno == EWOULDBLOCK)) {
            status = waitForSocketEvent(socketFd, POLLOUT);
            if (status == Core::ERROR_NONE) {
                continue;
            }
        }

        close(socketFd);
        return status == Core::ERROR_NONE ? Core::ERROR_UNAVAILABLE : status;
    }

    // SOCK_STREAM does not preserve message boundaries. Read until the reporter
    // closes its response, without extending the established I/O timeout per fragment.
    const auto readDeadline = std::chrono::steady_clock::now()
        + std::chrono::milliseconds(RBUS_DIAGNOSTICS_IO_TIMEOUT_MS);
    bool responseComplete = false;

    while (payloadLength < sizeof(payload) - 1) {
        const auto now = std::chrono::steady_clock::now();
        if (now >= readDeadline) {
            close(socketFd);
            return Core::ERROR_TIMEDOUT;
        }

        const auto remainingTimeout = std::chrono::duration_cast<std::chrono::milliseconds>(readDeadline - now).count();
        status = waitForSocketEvent(socketFd, POLLIN, static_cast<int>(remainingTimeout));
        if (status != Core::ERROR_NONE) {
            close(socketFd);
            return status;
        }

        received = recv(socketFd, payload + payloadLength, sizeof(payload) - 1 - payloadLength, 0);
        if (received > 0) {
            payloadLength += static_cast<size_t>(received);
            continue;
        }

        if (received == 0) {
            responseComplete = true;
            break;
        }

        if (errno == EAGAIN || errno == EWOULDBLOCK) {
            continue;
        }

        close(socketFd);
        return Core::ERROR_UNAVAILABLE;
    }

    if (!responseComplete || payloadLength == 0 || response.FromString(payload) == false) {
        close(socketFd);
        return Core::ERROR_UNAVAILABLE;
    }

    close(socketFd);
    return Core::ERROR_NONE;
}

uint32_t RBusDiagnostics::getGlobalMetrics(const JsonObject& parameters, JsonObject& response)
{
    (void)parameters;
    return requestReporter("GET_GLOBAL\n", response);
}

uint32_t RBusDiagnostics::resetMetrics(const JsonObject& parameters, JsonObject& response)
{
    (void)parameters;
    return requestReporter("RESET\n", response);
}

} // namespace Plugin
} // namespace WPEFramework
