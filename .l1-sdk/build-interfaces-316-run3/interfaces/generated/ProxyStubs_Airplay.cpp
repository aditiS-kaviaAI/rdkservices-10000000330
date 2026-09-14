//
// generated automatically from "IAirplay.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IAirplay
//   - class Exchange::IAirplay::INotification
//

#include "Module.h"
#include "IAirplay.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IAirplay interface stub definitions
    //
    // Methods:
    //  (0) virtual void Register(Exchange::IAirplay::INotification*) = 0
    //  (1) virtual void Unregister(Exchange::IAirplay::INotification*) = 0
    //  (2) virtual void FactoryReset() = 0
    //  (3) virtual void SetVisible(bool) = 0
    //  (4) virtual uint32_t SystemCommand(const string&) = 0
    //  (5) virtual uint32_t StartApp(const string&) = 0
    //  (6) virtual uint32_t StopApp(const string&) = 0
    //

    ProxyStub::MethodHandler ExchangeAirplayStubMethods[] = {
        // (0) virtual void Register(Exchange::IAirplay::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IAirplay* implementation = reinterpret_cast<Exchange::IAirplay*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id airplayImplementation = reader.Number<Core::instance_id>();

            Exchange::IAirplay::INotification* _airplay = nullptr;
            ProxyStub::UnknownProxy* airplayProxy = nullptr;
            if (airplayImplementation != 0) {
                airplayProxy = RPC::Administrator::Instance().ProxyInstance(channel, airplayImplementation, false, _airplay);
                ASSERT((_airplay != nullptr) && (airplayProxy != nullptr));
            }

            implementation->Register(_airplay);

            if (airplayProxy != nullptr) {
                RPC::Administrator::Instance().Release(airplayProxy, message->Response());
            }
        },

        // (1) virtual void Unregister(Exchange::IAirplay::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IAirplay* implementation = reinterpret_cast<Exchange::IAirplay*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id airplayImplementation = reader.Number<Core::instance_id>();

            Exchange::IAirplay::INotification* _airplay = nullptr;
            ProxyStub::UnknownProxy* airplayProxy = nullptr;
            if (airplayImplementation != 0) {
                airplayProxy = RPC::Administrator::Instance().ProxyInstance(channel, airplayImplementation, false, _airplay);
                ASSERT((_airplay != nullptr) && (airplayProxy != nullptr));
            }

            implementation->Unregister(_airplay);

            if (airplayProxy != nullptr) {
                RPC::Administrator::Instance().Release(airplayProxy, message->Response());
            }
        },

        // (2) virtual void FactoryReset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IAirplay* implementation = reinterpret_cast<Exchange::IAirplay*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->FactoryReset();
        },

        // (3) virtual void SetVisible(bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IAirplay* implementation = reinterpret_cast<Exchange::IAirplay*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            bool _visibility = reader.Boolean();

            implementation->SetVisible(_visibility);
        },

        // (4) virtual uint32_t SystemCommand(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IAirplay* implementation = reinterpret_cast<Exchange::IAirplay*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _command = reader.Text();

            uint32_t result = implementation->SystemCommand(static_cast<const string&>(_command));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual uint32_t StartApp(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IAirplay* implementation = reinterpret_cast<Exchange::IAirplay*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parametersJson = reader.Text();

            uint32_t result = implementation->StartApp(static_cast<const string&>(_parametersJson));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (6) virtual uint32_t StopApp(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IAirplay* implementation = reinterpret_cast<Exchange::IAirplay*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parametersJson = reader.Text();

            uint32_t result = implementation->StopApp(static_cast<const string&>(_parametersJson));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeAirplayStubMethods

    //
    // Exchange::IAirplay::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void StateChange(const Exchange::IAirplay::state) = 0
    //  (1) virtual void Exit(const uint32_t) = 0
    //  (2) virtual void Event(const string&) = 0
    //

    ProxyStub::MethodHandler ExchangeAirplayNotificationStubMethods[] = {
        // (0) virtual void StateChange(const Exchange::IAirplay::state) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IAirplay::INotification* implementation = reinterpret_cast<Exchange::IAirplay::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::IAirplay::state _state = reader.Number<Exchange::IAirplay::state>();

            implementation->StateChange(_state);
        },

        // (1) virtual void Exit(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IAirplay::INotification* implementation = reinterpret_cast<Exchange::IAirplay::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _exitCode = reader.Number<uint32_t>();

            implementation->Exit(_exitCode);
        },

        // (2) virtual void Event(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IAirplay::INotification* implementation = reinterpret_cast<Exchange::IAirplay::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _eventName = reader.Text();

            implementation->Event(static_cast<const string&>(_eventName));
        }
    }; // ExchangeAirplayNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IAirplay interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Register(Exchange::IAirplay::INotification*) = 0
    //  (1) virtual void Unregister(Exchange::IAirplay::INotification*) = 0
    //  (2) virtual void FactoryReset() = 0
    //  (3) virtual void SetVisible(bool) = 0
    //  (4) virtual uint32_t SystemCommand(const string&) = 0
    //  (5) virtual uint32_t StartApp(const string&) = 0
    //  (6) virtual uint32_t StopApp(const string&) = 0
    //

    class ExchangeAirplayProxy final : public ProxyStub::UnknownProxyType<Exchange::IAirplay> {
    public:
        ExchangeAirplayProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Register(Exchange::IAirplay::INotification* _airplay) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_airplay));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IAirplay>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void Unregister(Exchange::IAirplay::INotification* _airplay) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_airplay));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IAirplay>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void FactoryReset() override
        {
            IPCMessage message(BaseClass::Message(2));

            ProxyStub::UnknownProxyType<Exchange::IAirplay>::Invoke(message);
        }

        void SetVisible(bool _visibility) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Boolean(_visibility);

            ProxyStub::UnknownProxyType<Exchange::IAirplay>::Invoke(message);
        }

        uint32_t SystemCommand(const string& _command) override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_command));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IAirplay>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t StartApp(const string& _parametersJson) override
        {
            IPCMessage message(BaseClass::Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_parametersJson));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IAirplay>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t StopApp(const string& _parametersJson) override
        {
            IPCMessage message(BaseClass::Message(6));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_parametersJson));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IAirplay>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeAirplayProxy

    //
    // Exchange::IAirplay::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void StateChange(const Exchange::IAirplay::state) = 0
    //  (1) virtual void Exit(const uint32_t) = 0
    //  (2) virtual void Event(const string&) = 0
    //

    class ExchangeAirplayNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::IAirplay::INotification> {
    public:
        ExchangeAirplayNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void StateChange(const Exchange::IAirplay::state _state) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::IAirplay::state>(_state);

            ProxyStub::UnknownProxyType<Exchange::IAirplay::INotification>::Invoke(message);
        }

        void Exit(const uint32_t _exitCode) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_exitCode);

            ProxyStub::UnknownProxyType<Exchange::IAirplay::INotification>::Invoke(message);
        }

        void Event(const string& _eventName) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_eventName));

            ProxyStub::UnknownProxyType<Exchange::IAirplay::INotification>::Invoke(message);
        }

    }; // class ExchangeAirplayNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IAirplay, ExchangeAirplayStubMethods> ExchangeAirplayStub;
        typedef ProxyStub::UnknownStubType<Exchange::IAirplay::INotification, ExchangeAirplayNotificationStubMethods> ExchangeAirplayNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IAirplay, ExchangeAirplayProxy, ExchangeAirplayStub>();
                RPC::Administrator::Instance().Announce<Exchange::IAirplay::INotification, ExchangeAirplayNotificationProxy, ExchangeAirplayNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IAirplay>();
                RPC::Administrator::Instance().Recall<Exchange::IAirplay::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
