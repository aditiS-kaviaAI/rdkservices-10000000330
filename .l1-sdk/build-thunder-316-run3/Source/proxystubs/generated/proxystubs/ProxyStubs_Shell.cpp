//
// generated automatically from "IShell.h"
//
// implements COM-RPC proxy stubs for:
//   - class PluginHost::IShell
//

#include "Module.h"
#include "IShell.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    using namespace PluginHost;

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // PluginHost::IShell interface stub definitions
    //
    // Methods:
    //  (0) virtual void EnableWebServer(const string&, const string&) = 0
    //  (1) virtual void DisableWebServer() = 0
    //  (2) virtual string Version() const = 0
    //  (3) virtual uint8_t Major() const = 0
    //  (4) virtual uint8_t Minor() const = 0
    //  (5) virtual uint8_t Patch() const = 0
    //  (6) virtual string Model() const = 0
    //  (7) virtual bool Background() const = 0
    //  (8) virtual string Accessor() const = 0
    //  (9) virtual string WebPrefix() const = 0
    //  (10) virtual string Locator() const = 0
    //  (11) virtual string ClassName() const = 0
    //  (12) virtual string Versions() const = 0
    //  (13) virtual string Callsign() const = 0
    //  (14) virtual string PersistentPath() const = 0
    //  (15) virtual string VolatilePath() const = 0
    //  (16) virtual string DataPath() const = 0
    //  (17) virtual string ProxyStubPath() const = 0
    //  (18) virtual string SystemRootPath() const = 0
    //  (19) virtual uint32_t SystemRootPath(const string&) = 0
    //  (20) virtual string Substitute(const string&) const = 0
    //  (21) virtual bool AutoStart() const = 0
    //  (22) virtual bool Resumed() const = 0
    //  (23) virtual string HashKey() const = 0
    //  (24) virtual string ConfigLine() const = 0
    //  (25) virtual uint32_t ConfigLine(const string&) = 0
    //  (26) virtual bool IsSupported(const uint8_t) const = 0
    //  (27) virtual PluginHost::ISubSystem* SubSystems() = 0
    //  (28) virtual void Notify(const string&) = 0
    //  (29) virtual void Register(PluginHost::IPlugin::INotification*) = 0
    //  (30) virtual void Unregister(PluginHost::IPlugin::INotification*) = 0
    //  (31) virtual PluginHost::IShell::state State() const = 0
    //  (32) virtual void* QueryInterfaceByCallsign(const uint32_t, const string&) = 0
    //  (33) virtual uint32_t Activate(const PluginHost::IShell::reason) = 0
    //  (34) virtual uint32_t Deactivate(const PluginHost::IShell::reason) = 0
    //  (35) virtual uint32_t Unavailable(const PluginHost::IShell::reason) = 0
    //  (36) virtual uint32_t Hibernate(const string&, const uint32_t) = 0
    //  (37) virtual uint32_t Wakeup(const string&, const uint32_t) = 0
    //  (38) virtual PluginHost::IShell::reason Reason() const = 0
    //  (39) virtual uint32_t Submit(const uint32_t, /* undefined type */ const Core::ProxyType<Core::JSON::IElement>&) = 0
    //  (40) virtual PluginHost::IShell::ICOMLink* COMLink() = 0
    //

    ProxyStub::MethodHandler PluginHostShellStubMethods[] = {
        // (0) virtual void EnableWebServer(const string&, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _URLPath = reader.Text();
            const string _fileSystemPath = reader.Text();

            implementation->EnableWebServer(static_cast<const string&>(_URLPath), static_cast<const string&>(_fileSystemPath));
        },

        // (1) virtual void DisableWebServer() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->DisableWebServer();
        },

        // (2) virtual string Version() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Version();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (3) virtual uint8_t Major() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t result = implementation->Major();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint8_t>(result);
        },

        // (4) virtual uint8_t Minor() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t result = implementation->Minor();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint8_t>(result);
        },

        // (5) virtual uint8_t Patch() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t result = implementation->Patch();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint8_t>(result);
        },

        // (6) virtual string Model() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Model();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (7) virtual bool Background() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->Background();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (8) virtual string Accessor() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Accessor();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (9) virtual string WebPrefix() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->WebPrefix();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (10) virtual string Locator() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Locator();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (11) virtual string ClassName() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->ClassName();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (12) virtual string Versions() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Versions();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (13) virtual string Callsign() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Callsign();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (14) virtual string PersistentPath() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->PersistentPath();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (15) virtual string VolatilePath() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->VolatilePath();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (16) virtual string DataPath() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->DataPath();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (17) virtual string ProxyStubPath() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->ProxyStubPath();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (18) virtual string SystemRootPath() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->SystemRootPath();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (19) virtual uint32_t SystemRootPath(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _systemRootPath = reader.Text();

            uint32_t result = implementation->SystemRootPath(static_cast<const string&>(_systemRootPath));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (20) virtual string Substitute(const string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _input = reader.Text();

            string result = implementation->Substitute(static_cast<const string&>(_input));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (21) virtual bool AutoStart() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->AutoStart();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (22) virtual bool Resumed() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->Resumed();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (23) virtual string HashKey() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->HashKey();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (24) virtual string ConfigLine() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->ConfigLine();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (25) virtual uint32_t ConfigLine(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _config = reader.Text();

            uint32_t result = implementation->ConfigLine(static_cast<const string&>(_config));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (26) virtual bool IsSupported(const uint8_t) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint8_t _version = reader.Number<uint8_t>();

            bool result = implementation->IsSupported(_version);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (27) virtual PluginHost::ISubSystem* SubSystems() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            PluginHost::ISubSystem* result = implementation->SubSystems();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(result));

            RPC::Administrator::Instance().RegisterInterface(channel, result);
        },

        // (28) virtual void Notify(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _message = reader.Text();

            implementation->Notify(static_cast<const string&>(_message));
        },

        // (29) virtual void Register(PluginHost::IPlugin::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id sinkImplementation = reader.Number<Core::instance_id>();

            PluginHost::IPlugin::INotification* _sink = nullptr;
            ProxyStub::UnknownProxy* sinkProxy = nullptr;
            if (sinkImplementation != 0) {
                sinkProxy = RPC::Administrator::Instance().ProxyInstance(channel, sinkImplementation, false, _sink);
                ASSERT((_sink != nullptr) && (sinkProxy != nullptr));
            }

            implementation->Register(_sink);

            if (sinkProxy != nullptr) {
                RPC::Administrator::Instance().Release(sinkProxy, message->Response());
            }
        },

        // (30) virtual void Unregister(PluginHost::IPlugin::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id sinkImplementation = reader.Number<Core::instance_id>();

            PluginHost::IPlugin::INotification* _sink = nullptr;
            ProxyStub::UnknownProxy* sinkProxy = nullptr;
            if (sinkImplementation != 0) {
                sinkProxy = RPC::Administrator::Instance().ProxyInstance(channel, sinkImplementation, false, _sink);
                ASSERT((_sink != nullptr) && (sinkProxy != nullptr));
            }

            implementation->Unregister(_sink);

            if (sinkProxy != nullptr) {
                RPC::Administrator::Instance().Release(sinkProxy, message->Response());
            }
        },

        // (31) virtual PluginHost::IShell::state State() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            PluginHost::IShell::state result = implementation->State();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<PluginHost::IShell::state>(result);
        },

        // (32) virtual void* QueryInterfaceByCallsign(const uint32_t, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _id = reader.Number<uint32_t>();
            const string _name = reader.Text();

            void* result = implementation->QueryInterfaceByCallsign(_id, static_cast<const string&>(_name));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(result));

            RPC::Administrator::Instance().RegisterInterface(channel, result, _id);
        },

        // (33) virtual uint32_t Activate(const PluginHost::IShell::reason) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const PluginHost::IShell::reason _parameter_108d7f04 = reader.Number<PluginHost::IShell::reason>();

            uint32_t result = implementation->Activate(_parameter_108d7f04);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (34) virtual uint32_t Deactivate(const PluginHost::IShell::reason) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const PluginHost::IShell::reason _parameter_e2af1137 = reader.Number<PluginHost::IShell::reason>();

            uint32_t result = implementation->Deactivate(_parameter_e2af1137);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (35) virtual uint32_t Unavailable(const PluginHost::IShell::reason) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const PluginHost::IShell::reason _parameter_8c7f454d = reader.Number<PluginHost::IShell::reason>();

            uint32_t result = implementation->Unavailable(_parameter_8c7f454d);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (36) virtual uint32_t Hibernate(const string&, const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _processSequence = reader.Text();
            const uint32_t _timeout = reader.Number<uint32_t>();

            uint32_t result = implementation->Hibernate(static_cast<const string&>(_processSequence), _timeout);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (37) virtual uint32_t Wakeup(const string&, const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IShell* implementation = reinterpret_cast<PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _processSequence = reader.Text();
            const uint32_t _timeout = reader.Number<uint32_t>();

            uint32_t result = implementation->Wakeup(static_cast<const string&>(_processSequence), _timeout);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (38) virtual PluginHost::IShell::reason Reason() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IShell* implementation = reinterpret_cast<const PluginHost::IShell*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            PluginHost::IShell::reason result = implementation->Reason();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<PluginHost::IShell::reason>(result);
        },

        // (39) virtual uint32_t Submit(const uint32_t, /* undefined type */ const Core::ProxyType<Core::JSON::IElement>&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& /* message */) {
            // stubbed method, no implementation
        },

        // (40) virtual PluginHost::IShell::ICOMLink* COMLink() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& /* message */) {
            // stubbed method, no implementation
        }
    }; // PluginHostShellStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // PluginHost::IShell interface proxy definitions
    //
    // Methods:
    //  (0) virtual void EnableWebServer(const string&, const string&) = 0
    //  (1) virtual void DisableWebServer() = 0
    //  (2) virtual string Version() const = 0
    //  (3) virtual uint8_t Major() const = 0
    //  (4) virtual uint8_t Minor() const = 0
    //  (5) virtual uint8_t Patch() const = 0
    //  (6) virtual string Model() const = 0
    //  (7) virtual bool Background() const = 0
    //  (8) virtual string Accessor() const = 0
    //  (9) virtual string WebPrefix() const = 0
    //  (10) virtual string Locator() const = 0
    //  (11) virtual string ClassName() const = 0
    //  (12) virtual string Versions() const = 0
    //  (13) virtual string Callsign() const = 0
    //  (14) virtual string PersistentPath() const = 0
    //  (15) virtual string VolatilePath() const = 0
    //  (16) virtual string DataPath() const = 0
    //  (17) virtual string ProxyStubPath() const = 0
    //  (18) virtual string SystemRootPath() const = 0
    //  (19) virtual uint32_t SystemRootPath(const string&) = 0
    //  (20) virtual string Substitute(const string&) const = 0
    //  (21) virtual bool AutoStart() const = 0
    //  (22) virtual bool Resumed() const = 0
    //  (23) virtual string HashKey() const = 0
    //  (24) virtual string ConfigLine() const = 0
    //  (25) virtual uint32_t ConfigLine(const string&) = 0
    //  (26) virtual bool IsSupported(const uint8_t) const = 0
    //  (27) virtual PluginHost::ISubSystem* SubSystems() = 0
    //  (28) virtual void Notify(const string&) = 0
    //  (29) virtual void Register(PluginHost::IPlugin::INotification*) = 0
    //  (30) virtual void Unregister(PluginHost::IPlugin::INotification*) = 0
    //  (31) virtual PluginHost::IShell::state State() const = 0
    //  (32) virtual void* QueryInterfaceByCallsign(const uint32_t, const string&) = 0
    //  (33) virtual uint32_t Activate(const PluginHost::IShell::reason) = 0
    //  (34) virtual uint32_t Deactivate(const PluginHost::IShell::reason) = 0
    //  (35) virtual uint32_t Unavailable(const PluginHost::IShell::reason) = 0
    //  (36) virtual uint32_t Hibernate(const string&, const uint32_t) = 0
    //  (37) virtual uint32_t Wakeup(const string&, const uint32_t) = 0
    //  (38) virtual PluginHost::IShell::reason Reason() const = 0
    //  (39) virtual uint32_t Submit(const uint32_t, /* undefined type */ const Core::ProxyType<Core::JSON::IElement>&) = 0
    //  (40) virtual PluginHost::IShell::ICOMLink* COMLink() = 0
    //

    class PluginHostShellProxy final : public ProxyStub::UnknownProxyType<PluginHost::IShell> {
    public:
        PluginHostShellProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void EnableWebServer(const string& _URLPath, const string& _fileSystemPath) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_URLPath));
            writer.Text(static_cast<const string&>(_fileSystemPath));

            ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
        }

        void DisableWebServer() override
        {
            IPCMessage message(BaseClass::Message(1));

            ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
        }

        string Version() const override
        {
            IPCMessage message(BaseClass::Message(2));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        uint8_t Major() const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint8_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint8_t Minor() const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint8_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint8_t Patch() const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint8_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint8_t>();
            }

            return (result);
        }

        string Model() const override
        {
            IPCMessage message(BaseClass::Message(6));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        bool Background() const override
        {
            IPCMessage message(BaseClass::Message(7));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        string Accessor() const override
        {
            IPCMessage message(BaseClass::Message(8));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string WebPrefix() const override
        {
            IPCMessage message(BaseClass::Message(9));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string Locator() const override
        {
            IPCMessage message(BaseClass::Message(10));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string ClassName() const override
        {
            IPCMessage message(BaseClass::Message(11));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string Versions() const override
        {
            IPCMessage message(BaseClass::Message(12));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string Callsign() const override
        {
            IPCMessage message(BaseClass::Message(13));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string PersistentPath() const override
        {
            IPCMessage message(BaseClass::Message(14));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string VolatilePath() const override
        {
            IPCMessage message(BaseClass::Message(15));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string DataPath() const override
        {
            IPCMessage message(BaseClass::Message(16));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string ProxyStubPath() const override
        {
            IPCMessage message(BaseClass::Message(17));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string SystemRootPath() const override
        {
            IPCMessage message(BaseClass::Message(18));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        uint32_t SystemRootPath(const string& _systemRootPath) override
        {
            IPCMessage message(BaseClass::Message(19));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_systemRootPath));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        string Substitute(const string& _input) const override
        {
            IPCMessage message(BaseClass::Message(20));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_input));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        bool AutoStart() const override
        {
            IPCMessage message(BaseClass::Message(21));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        bool Resumed() const override
        {
            IPCMessage message(BaseClass::Message(22));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        string HashKey() const override
        {
            IPCMessage message(BaseClass::Message(23));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string ConfigLine() const override
        {
            IPCMessage message(BaseClass::Message(24));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        uint32_t ConfigLine(const string& _config) override
        {
            IPCMessage message(BaseClass::Message(25));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_config));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        bool IsSupported(const uint8_t _version) const override
        {
            IPCMessage message(BaseClass::Message(26));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint8_t>(_version);

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        PluginHost::ISubSystem* SubSystems() override
        {
            IPCMessage message(BaseClass::Message(27));

            PluginHost::ISubSystem* result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reinterpret_cast<PluginHost::ISubSystem*>(Interface(reader.Number<Core::instance_id>(), PluginHost::ISubSystem::ID));
            }

            return (result);
        }

        void Notify(const string& _message) override
        {
            IPCMessage message(BaseClass::Message(28));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_message));

            ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
        }

        void Register(PluginHost::IPlugin::INotification* _sink) override
        {
            IPCMessage message(BaseClass::Message(29));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_sink));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void Unregister(PluginHost::IPlugin::INotification* _sink) override
        {
            IPCMessage message(BaseClass::Message(30));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_sink));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        PluginHost::IShell::state State() const override
        {
            IPCMessage message(BaseClass::Message(31));

            PluginHost::IShell::state result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<PluginHost::IShell::state>();
            }

            return (result);
        }

        void* QueryInterfaceByCallsign(const uint32_t _id, const string& _name) override
        {
            IPCMessage message(BaseClass::Message(32));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_id);
            writer.Text(static_cast<const string&>(_name));

            void* result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reinterpret_cast<void*>(Interface(reader.Number<Core::instance_id>(), _id));
            }

            return (result);
        }

        uint32_t Activate(const PluginHost::IShell::reason _parameter_108d7f04) override
        {
            IPCMessage message(BaseClass::Message(33));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<PluginHost::IShell::reason>(_parameter_108d7f04);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Deactivate(const PluginHost::IShell::reason _parameter_e2af1137) override
        {
            IPCMessage message(BaseClass::Message(34));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<PluginHost::IShell::reason>(_parameter_e2af1137);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Unavailable(const PluginHost::IShell::reason _parameter_8c7f454d) override
        {
            IPCMessage message(BaseClass::Message(35));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<PluginHost::IShell::reason>(_parameter_8c7f454d);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Hibernate(const string& _processSequence, const uint32_t _timeout) override
        {
            IPCMessage message(BaseClass::Message(36));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_processSequence));
            writer.Number<uint32_t>(_timeout);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Wakeup(const string& _processSequence, const uint32_t _timeout) override
        {
            IPCMessage message(BaseClass::Message(37));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_processSequence));
            writer.Number<uint32_t>(_timeout);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        PluginHost::IShell::reason Reason() const override
        {
            IPCMessage message(BaseClass::Message(38));

            PluginHost::IShell::reason result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IShell>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<PluginHost::IShell::reason>();
            }

            return (result);
        }

        uint32_t Submit(const uint32_t, /* undefined type */ const Core::ProxyType<Core::JSON::IElement>&) override
        {
            // stubbed method, no implementation

            return {};
        }

        PluginHost::IShell::ICOMLink* COMLink() override
        {
            // stubbed method, no implementation

            return {};
        }

    }; // class PluginHostShellProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<PluginHost::IShell, PluginHostShellStubMethods> PluginHostShellStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<PluginHost::IShell, PluginHostShellProxy, PluginHostShellStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<PluginHost::IShell>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
