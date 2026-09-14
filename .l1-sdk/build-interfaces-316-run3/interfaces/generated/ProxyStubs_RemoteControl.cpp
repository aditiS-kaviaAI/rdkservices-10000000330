//
// generated automatically from "IRemoteControl.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IRemoteControl
//   - class Exchange::IRemoteControl::INotification
//

#include "Module.h"
#include "IRemoteControl.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IRemoteControl interface stub definitions
    //
    // Methods:
    //  (0) virtual void RegisterEvents(Exchange::IRemoteControl::INotification*) = 0
    //  (1) virtual void UnregisterEvents(Exchange::IRemoteControl::INotification*) = 0
    //

    ProxyStub::MethodHandler ExchangeRemoteControlStubMethods[] = {
        // (0) virtual void RegisterEvents(Exchange::IRemoteControl::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IRemoteControl* implementation = reinterpret_cast<Exchange::IRemoteControl*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id sinkImplementation = reader.Number<Core::instance_id>();

            Exchange::IRemoteControl::INotification* _sink = nullptr;
            ProxyStub::UnknownProxy* sinkProxy = nullptr;
            if (sinkImplementation != 0) {
                sinkProxy = RPC::Administrator::Instance().ProxyInstance(channel, sinkImplementation, false, _sink);
                ASSERT((_sink != nullptr) && (sinkProxy != nullptr));
            }

            implementation->RegisterEvents(_sink);

            if (sinkProxy != nullptr) {
                RPC::Administrator::Instance().Release(sinkProxy, message->Response());
            }
        },

        // (1) virtual void UnregisterEvents(Exchange::IRemoteControl::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IRemoteControl* implementation = reinterpret_cast<Exchange::IRemoteControl*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id sinkImplementation = reader.Number<Core::instance_id>();

            Exchange::IRemoteControl::INotification* _sink = nullptr;
            ProxyStub::UnknownProxy* sinkProxy = nullptr;
            if (sinkImplementation != 0) {
                sinkProxy = RPC::Administrator::Instance().ProxyInstance(channel, sinkImplementation, false, _sink);
                ASSERT((_sink != nullptr) && (sinkProxy != nullptr));
            }

            implementation->UnregisterEvents(_sink);

            if (sinkProxy != nullptr) {
                RPC::Administrator::Instance().Release(sinkProxy, message->Response());
            }
        }
    }; // ExchangeRemoteControlStubMethods

    //
    // Exchange::IRemoteControl::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void Event(const string&, const uint32_t) = 0
    //

    ProxyStub::MethodHandler ExchangeRemoteControlNotificationStubMethods[] = {
        // (0) virtual void Event(const string&, const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IRemoteControl::INotification* implementation = reinterpret_cast<Exchange::IRemoteControl::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _producer = reader.Text();
            const uint32_t _event = reader.Number<uint32_t>();

            implementation->Event(static_cast<const string&>(_producer), _event);
        }
    }; // ExchangeRemoteControlNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IRemoteControl interface proxy definitions
    //
    // Methods:
    //  (0) virtual void RegisterEvents(Exchange::IRemoteControl::INotification*) = 0
    //  (1) virtual void UnregisterEvents(Exchange::IRemoteControl::INotification*) = 0
    //

    class ExchangeRemoteControlProxy final : public ProxyStub::UnknownProxyType<Exchange::IRemoteControl> {
    public:
        ExchangeRemoteControlProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void RegisterEvents(Exchange::IRemoteControl::INotification* _sink) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_sink));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IRemoteControl>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void UnregisterEvents(Exchange::IRemoteControl::INotification* _sink) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_sink));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IRemoteControl>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

    }; // class ExchangeRemoteControlProxy

    //
    // Exchange::IRemoteControl::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Event(const string&, const uint32_t) = 0
    //

    class ExchangeRemoteControlNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::IRemoteControl::INotification> {
    public:
        ExchangeRemoteControlNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Event(const string& _producer, const uint32_t _event) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_producer));
            writer.Number<uint32_t>(_event);

            ProxyStub::UnknownProxyType<Exchange::IRemoteControl::INotification>::Invoke(message);
        }

    }; // class ExchangeRemoteControlNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IRemoteControl, ExchangeRemoteControlStubMethods> ExchangeRemoteControlStub;
        typedef ProxyStub::UnknownStubType<Exchange::IRemoteControl::INotification, ExchangeRemoteControlNotificationStubMethods> ExchangeRemoteControlNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IRemoteControl, ExchangeRemoteControlProxy, ExchangeRemoteControlStub>();
                RPC::Administrator::Instance().Announce<Exchange::IRemoteControl::INotification, ExchangeRemoteControlNotificationProxy, ExchangeRemoteControlNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IRemoteControl>();
                RPC::Administrator::Instance().Recall<Exchange::IRemoteControl::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
