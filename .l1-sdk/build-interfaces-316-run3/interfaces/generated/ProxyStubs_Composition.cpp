//
// generated automatically from "IComposition.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IComposition
//   - class Exchange::IComposition::IClient
//   - class Exchange::IComposition::INotification
//

#include "Module.h"
#include "IComposition.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IComposition interface stub definitions
    //
    // Methods:
    //  (0) virtual void Register(Exchange::IComposition::INotification*) = 0
    //  (1) virtual void Unregister(Exchange::IComposition::INotification*) = 0
    //  (2) virtual uint32_t Configure(PluginHost::IShell*) = 0
    //  (3) virtual uint32_t Resolution(const Exchange::IComposition::ScreenResolution) = 0
    //  (4) virtual Exchange::IComposition::ScreenResolution Resolution() const = 0
    //

    ProxyStub::MethodHandler ExchangeCompositionStubMethods[] = {
        // (0) virtual void Register(Exchange::IComposition::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IComposition* implementation = reinterpret_cast<Exchange::IComposition*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id notificationImplementation = reader.Number<Core::instance_id>();

            Exchange::IComposition::INotification* _notification = nullptr;
            ProxyStub::UnknownProxy* notificationProxy = nullptr;
            if (notificationImplementation != 0) {
                notificationProxy = RPC::Administrator::Instance().ProxyInstance(channel, notificationImplementation, false, _notification);
                ASSERT((_notification != nullptr) && (notificationProxy != nullptr));
            }

            implementation->Register(_notification);

            if (notificationProxy != nullptr) {
                RPC::Administrator::Instance().Release(notificationProxy, message->Response());
            }
        },

        // (1) virtual void Unregister(Exchange::IComposition::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IComposition* implementation = reinterpret_cast<Exchange::IComposition*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id notificationImplementation = reader.Number<Core::instance_id>();

            Exchange::IComposition::INotification* _notification = nullptr;
            ProxyStub::UnknownProxy* notificationProxy = nullptr;
            if (notificationImplementation != 0) {
                notificationProxy = RPC::Administrator::Instance().ProxyInstance(channel, notificationImplementation, false, _notification);
                ASSERT((_notification != nullptr) && (notificationProxy != nullptr));
            }

            implementation->Unregister(_notification);

            if (notificationProxy != nullptr) {
                RPC::Administrator::Instance().Release(notificationProxy, message->Response());
            }
        },

        // (2) virtual uint32_t Configure(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IComposition* implementation = reinterpret_cast<Exchange::IComposition*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id serviceImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _service = nullptr;
            ProxyStub::UnknownProxy* serviceProxy = nullptr;
            if (serviceImplementation != 0) {
                serviceProxy = RPC::Administrator::Instance().ProxyInstance(channel, serviceImplementation, false, _service);
                ASSERT((_service != nullptr) && (serviceProxy != nullptr));
            }

            uint32_t result = implementation->Configure(_service);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (serviceProxy != nullptr) {
                RPC::Administrator::Instance().Release(serviceProxy, message->Response());
            }
        },

        // (3) virtual uint32_t Resolution(const Exchange::IComposition::ScreenResolution) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IComposition* implementation = reinterpret_cast<Exchange::IComposition*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::IComposition::ScreenResolution _parameter_a229b33e = reader.Number<Exchange::IComposition::ScreenResolution>();

            uint32_t result = implementation->Resolution(_parameter_a229b33e);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (4) virtual Exchange::IComposition::ScreenResolution Resolution() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IComposition* implementation = reinterpret_cast<const Exchange::IComposition*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IComposition::ScreenResolution result = implementation->Resolution();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Exchange::IComposition::ScreenResolution>(result);
        }
    }; // ExchangeCompositionStubMethods

    //
    // Exchange::IComposition::IClient interface stub definitions
    //
    // Methods:
    //  (0) virtual string Name() const = 0
    //  (1) virtual void Opacity(const uint32_t) = 0
    //  (2) virtual uint32_t Geometry(const Exchange::IComposition::Rectangle&) = 0
    //  (3) virtual Exchange::IComposition::Rectangle Geometry() const = 0
    //  (4) virtual uint32_t ZOrder(const uint16_t) = 0
    //  (5) virtual uint32_t ZOrder() const = 0
    //

    ProxyStub::MethodHandler ExchangeCompositionClientStubMethods[] = {
        // (0) virtual string Name() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IComposition::IClient* implementation = reinterpret_cast<const Exchange::IComposition::IClient*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Name();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (1) virtual void Opacity(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IComposition::IClient* implementation = reinterpret_cast<Exchange::IComposition::IClient*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _value = reader.Number<uint32_t>();

            implementation->Opacity(_value);
        },

        // (2) virtual uint32_t Geometry(const Exchange::IComposition::Rectangle&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IComposition::IClient* implementation = reinterpret_cast<Exchange::IComposition::IClient*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            Exchange::IComposition::Rectangle _rectangle{};
            _rectangle.x = reader.Number<uint32_t>();
            _rectangle.y = reader.Number<uint32_t>();
            _rectangle.width = reader.Number<uint32_t>();
            _rectangle.height = reader.Number<uint32_t>();

            uint32_t result = implementation->Geometry(static_cast<const Exchange::IComposition::Rectangle&>(_rectangle));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (3) virtual Exchange::IComposition::Rectangle Geometry() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IComposition::IClient* implementation = reinterpret_cast<const Exchange::IComposition::IClient*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IComposition::Rectangle result = implementation->Geometry();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result.x);
            writer.Number<uint32_t>(result.y);
            writer.Number<uint32_t>(result.width);
            writer.Number<uint32_t>(result.height);
        },

        // (4) virtual uint32_t ZOrder(const uint16_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IComposition::IClient* implementation = reinterpret_cast<Exchange::IComposition::IClient*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint16_t _index = reader.Number<uint16_t>();

            uint32_t result = implementation->ZOrder(_index);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual uint32_t ZOrder() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IComposition::IClient* implementation = reinterpret_cast<const Exchange::IComposition::IClient*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->ZOrder();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeCompositionClientStubMethods

    //
    // Exchange::IComposition::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void Attached(const string&, Exchange::IComposition::IClient*) = 0
    //  (1) virtual void Detached(const string&) = 0
    //

    ProxyStub::MethodHandler ExchangeCompositionNotificationStubMethods[] = {
        // (0) virtual void Attached(const string&, Exchange::IComposition::IClient*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IComposition::INotification* implementation = reinterpret_cast<Exchange::IComposition::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _name = reader.Text();
            const Core::instance_id clientImplementation = reader.Number<Core::instance_id>();

            Exchange::IComposition::IClient* _client = nullptr;
            ProxyStub::UnknownProxy* clientProxy = nullptr;
            if (clientImplementation != 0) {
                clientProxy = RPC::Administrator::Instance().ProxyInstance(channel, clientImplementation, false, _client);
                ASSERT((_client != nullptr) && (clientProxy != nullptr));
            }

            implementation->Attached(static_cast<const string&>(_name), _client);

            if (clientProxy != nullptr) {
                RPC::Administrator::Instance().Release(clientProxy, message->Response());
            }
        },

        // (1) virtual void Detached(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IComposition::INotification* implementation = reinterpret_cast<Exchange::IComposition::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _name = reader.Text();

            implementation->Detached(static_cast<const string&>(_name));
        }
    }; // ExchangeCompositionNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IComposition interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Register(Exchange::IComposition::INotification*) = 0
    //  (1) virtual void Unregister(Exchange::IComposition::INotification*) = 0
    //  (2) virtual uint32_t Configure(PluginHost::IShell*) = 0
    //  (3) virtual uint32_t Resolution(const Exchange::IComposition::ScreenResolution) = 0
    //  (4) virtual Exchange::IComposition::ScreenResolution Resolution() const = 0
    //

    class ExchangeCompositionProxy final : public ProxyStub::UnknownProxyType<Exchange::IComposition> {
    public:
        ExchangeCompositionProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Register(Exchange::IComposition::INotification* _notification) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_notification));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IComposition>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void Unregister(Exchange::IComposition::INotification* _notification) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_notification));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IComposition>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        uint32_t Configure(PluginHost::IShell* _service) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_service));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IComposition>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        uint32_t Resolution(const Exchange::IComposition::ScreenResolution _parameter_a229b33e) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::IComposition::ScreenResolution>(_parameter_a229b33e);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IComposition>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        Exchange::IComposition::ScreenResolution Resolution() const override
        {
            IPCMessage message(BaseClass::Message(4));

            Exchange::IComposition::ScreenResolution result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IComposition>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<Exchange::IComposition::ScreenResolution>();
            }

            return (result);
        }

    }; // class ExchangeCompositionProxy

    //
    // Exchange::IComposition::IClient interface proxy definitions
    //
    // Methods:
    //  (0) virtual string Name() const = 0
    //  (1) virtual void Opacity(const uint32_t) = 0
    //  (2) virtual uint32_t Geometry(const Exchange::IComposition::Rectangle&) = 0
    //  (3) virtual Exchange::IComposition::Rectangle Geometry() const = 0
    //  (4) virtual uint32_t ZOrder(const uint16_t) = 0
    //  (5) virtual uint32_t ZOrder() const = 0
    //

    class ExchangeCompositionClientProxy final : public ProxyStub::UnknownProxyType<Exchange::IComposition::IClient> {
    public:
        ExchangeCompositionClientProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        string Name() const override
        {
            IPCMessage message(BaseClass::Message(0));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IComposition::IClient>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        void Opacity(const uint32_t _value) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_value);

            ProxyStub::UnknownProxyType<Exchange::IComposition::IClient>::Invoke(message);
        }

        uint32_t Geometry(const Exchange::IComposition::Rectangle& _rectangle) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_rectangle.x);
            writer.Number<uint32_t>(_rectangle.y);
            writer.Number<uint32_t>(_rectangle.width);
            writer.Number<uint32_t>(_rectangle.height);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IComposition::IClient>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        Exchange::IComposition::Rectangle Geometry() const override
        {
            IPCMessage message(BaseClass::Message(3));

            Exchange::IComposition::Rectangle result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IComposition::IClient>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result.x = reader.Number<uint32_t>();
                result.y = reader.Number<uint32_t>();
                result.width = reader.Number<uint32_t>();
                result.height = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t ZOrder(const uint16_t _index) override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint16_t>(_index);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IComposition::IClient>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t ZOrder() const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IComposition::IClient>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeCompositionClientProxy

    //
    // Exchange::IComposition::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Attached(const string&, Exchange::IComposition::IClient*) = 0
    //  (1) virtual void Detached(const string&) = 0
    //

    class ExchangeCompositionNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::IComposition::INotification> {
    public:
        ExchangeCompositionNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Attached(const string& _name, Exchange::IComposition::IClient* _client) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_name));
            writer.Number<Core::instance_id>(RPC::instance_cast(_client));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IComposition::INotification>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void Detached(const string& _name) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_name));

            ProxyStub::UnknownProxyType<Exchange::IComposition::INotification>::Invoke(message);
        }

    }; // class ExchangeCompositionNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IComposition, ExchangeCompositionStubMethods> ExchangeCompositionStub;
        typedef ProxyStub::UnknownStubType<Exchange::IComposition::IClient, ExchangeCompositionClientStubMethods> ExchangeCompositionClientStub;
        typedef ProxyStub::UnknownStubType<Exchange::IComposition::INotification, ExchangeCompositionNotificationStubMethods> ExchangeCompositionNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IComposition, ExchangeCompositionProxy, ExchangeCompositionStub>();
                RPC::Administrator::Instance().Announce<Exchange::IComposition::IClient, ExchangeCompositionClientProxy, ExchangeCompositionClientStub>();
                RPC::Administrator::Instance().Announce<Exchange::IComposition::INotification, ExchangeCompositionNotificationProxy, ExchangeCompositionNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IComposition>();
                RPC::Administrator::Instance().Recall<Exchange::IComposition::IClient>();
                RPC::Administrator::Instance().Recall<Exchange::IComposition::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
