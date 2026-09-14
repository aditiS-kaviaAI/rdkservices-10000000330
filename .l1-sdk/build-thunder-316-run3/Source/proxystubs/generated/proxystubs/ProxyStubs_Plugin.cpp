//
// generated automatically from "IPlugin.h"
//
// implements COM-RPC proxy stubs for:
//   - class PluginHost::IPlugin
//   - class PluginHost::IPlugin::INotification
//   - class PluginHost::IAuthenticate
//

#include "Module.h"
#include "IPlugin.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    using namespace PluginHost;

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // PluginHost::IPlugin interface stub definitions
    //
    // Methods:
    //  (0) virtual const string Initialize(PluginHost::IShell*) = 0
    //  (1) virtual void Deinitialize(PluginHost::IShell*) = 0
    //  (2) virtual string Information() const = 0
    //

    ProxyStub::MethodHandler PluginHostPluginStubMethods[] = {
        // (0) virtual const string Initialize(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IPlugin* implementation = reinterpret_cast<PluginHost::IPlugin*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id shellImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _shell = nullptr;
            ProxyStub::UnknownProxy* shellProxy = nullptr;
            if (shellImplementation != 0) {
                shellProxy = RPC::Administrator::Instance().ProxyInstance(channel, shellImplementation, false, _shell);
                ASSERT((_shell != nullptr) && (shellProxy != nullptr));
            }

            const string result = implementation->Initialize(_shell);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);

            if (shellProxy != nullptr) {
                RPC::Administrator::Instance().Release(shellProxy, message->Response());
            }
        },

        // (1) virtual void Deinitialize(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IPlugin* implementation = reinterpret_cast<PluginHost::IPlugin*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id shellImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _shell = nullptr;
            ProxyStub::UnknownProxy* shellProxy = nullptr;
            if (shellImplementation != 0) {
                shellProxy = RPC::Administrator::Instance().ProxyInstance(channel, shellImplementation, false, _shell);
                ASSERT((_shell != nullptr) && (shellProxy != nullptr));
            }

            implementation->Deinitialize(_shell);

            if (shellProxy != nullptr) {
                RPC::Administrator::Instance().Release(shellProxy, message->Response());
            }
        },

        // (2) virtual string Information() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IPlugin* implementation = reinterpret_cast<const PluginHost::IPlugin*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Information();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        }
    }; // PluginHostPluginStubMethods

    //
    // PluginHost::IPlugin::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void StateChange(PluginHost::IShell*) = 0
    //

    ProxyStub::MethodHandler PluginHostPluginNotificationStubMethods[] = {
        // (0) virtual void StateChange(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IPlugin::INotification* implementation = reinterpret_cast<PluginHost::IPlugin::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id pluginImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _plugin = nullptr;
            ProxyStub::UnknownProxy* pluginProxy = nullptr;
            if (pluginImplementation != 0) {
                pluginProxy = RPC::Administrator::Instance().ProxyInstance(channel, pluginImplementation, false, _plugin);
                ASSERT((_plugin != nullptr) && (pluginProxy != nullptr));
            }

            implementation->StateChange(_plugin);

            if (pluginProxy != nullptr) {
                RPC::Administrator::Instance().Release(pluginProxy, message->Response());
            }
        }
    }; // PluginHostPluginNotificationStubMethods

    //
    // PluginHost::IAuthenticate interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t CreateToken(const uint16_t, const uint8_t*, string&) = 0
    //  (1) virtual PluginHost::ISecurity* Officer(const string&) = 0
    //

    ProxyStub::MethodHandler PluginHostAuthenticateStubMethods[] = {
        // (0) virtual uint32_t CreateToken(const uint16_t, const uint8_t*, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IAuthenticate* implementation = reinterpret_cast<PluginHost::IAuthenticate*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint8_t* _buffer{};
            const uint16_t bufferLen = reader.LockBuffer<uint16_t>(_buffer);
            reader.UnlockBuffer(bufferLen);

            string _token{};

            uint32_t result = implementation->CreateToken(bufferLen, _buffer, _token);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_token);
        },

        // (1) virtual PluginHost::ISecurity* Officer(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IAuthenticate* implementation = reinterpret_cast<PluginHost::IAuthenticate*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _token = reader.Text();

            PluginHost::ISecurity* result = implementation->Officer(static_cast<const string&>(_token));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(result));

            RPC::Administrator::Instance().RegisterInterface(channel, result);
        }
    }; // PluginHostAuthenticateStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // PluginHost::IPlugin interface proxy definitions
    //
    // Methods:
    //  (0) virtual const string Initialize(PluginHost::IShell*) = 0
    //  (1) virtual void Deinitialize(PluginHost::IShell*) = 0
    //  (2) virtual string Information() const = 0
    //

    class PluginHostPluginProxy final : public ProxyStub::UnknownProxyType<PluginHost::IPlugin> {
    public:
        PluginHostPluginProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        const string Initialize(PluginHost::IShell* _shell) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_shell));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IPlugin>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
                Complete(reader);
            }

            return (result);
        }

        void Deinitialize(PluginHost::IShell* _shell) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_shell));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IPlugin>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        string Information() const override
        {
            IPCMessage message(BaseClass::Message(2));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IPlugin>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

    }; // class PluginHostPluginProxy

    //
    // PluginHost::IPlugin::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void StateChange(PluginHost::IShell*) = 0
    //

    class PluginHostPluginNotificationProxy final : public ProxyStub::UnknownProxyType<PluginHost::IPlugin::INotification> {
    public:
        PluginHostPluginNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void StateChange(PluginHost::IShell* _plugin) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_plugin));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IPlugin::INotification>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

    }; // class PluginHostPluginNotificationProxy

    //
    // PluginHost::IAuthenticate interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t CreateToken(const uint16_t, const uint8_t*, string&) = 0
    //  (1) virtual PluginHost::ISecurity* Officer(const string&) = 0
    //

    class PluginHostAuthenticateProxy final : public ProxyStub::UnknownProxyType<PluginHost::IAuthenticate> {
    public:
        PluginHostAuthenticateProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t CreateToken(const uint16_t bufferLen, const uint8_t* _buffer, string& _token) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Buffer<uint16_t>(bufferLen, _buffer);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IAuthenticate>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _token = reader.Text();
            }

            return (result);
        }

        PluginHost::ISecurity* Officer(const string& _token) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_token));

            PluginHost::ISecurity* result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IAuthenticate>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reinterpret_cast<PluginHost::ISecurity*>(Interface(reader.Number<Core::instance_id>(), PluginHost::ISecurity::ID));
            }

            return (result);
        }

    }; // class PluginHostAuthenticateProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<PluginHost::IPlugin, PluginHostPluginStubMethods> PluginHostPluginStub;
        typedef ProxyStub::UnknownStubType<PluginHost::IPlugin::INotification, PluginHostPluginNotificationStubMethods> PluginHostPluginNotificationStub;
        typedef ProxyStub::UnknownStubType<PluginHost::IAuthenticate, PluginHostAuthenticateStubMethods> PluginHostAuthenticateStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<PluginHost::IPlugin, PluginHostPluginProxy, PluginHostPluginStub>();
                RPC::Administrator::Instance().Announce<PluginHost::IPlugin::INotification, PluginHostPluginNotificationProxy, PluginHostPluginNotificationStub>();
                RPC::Administrator::Instance().Announce<PluginHost::IAuthenticate, PluginHostAuthenticateProxy, PluginHostAuthenticateStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<PluginHost::IPlugin>();
                RPC::Administrator::Instance().Recall<PluginHost::IPlugin::INotification>();
                RPC::Administrator::Instance().Recall<PluginHost::IAuthenticate>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
