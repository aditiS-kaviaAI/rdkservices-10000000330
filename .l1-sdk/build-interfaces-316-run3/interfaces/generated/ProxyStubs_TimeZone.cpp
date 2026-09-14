//
// generated automatically from "ITimeZone.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::ITimeZone
//   - class Exchange::ITimeZone::INotification
//

#include "Module.h"
#include "ITimeZone.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::ITimeZone interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Register(Exchange::ITimeZone::INotification*) = 0
    //  (1) virtual uint32_t Unregister(Exchange::ITimeZone::INotification*) = 0
    //  (2) virtual uint32_t GetTimeZone(string&) const = 0
    //  (3) virtual uint32_t SetTimeZone(const string&) = 0
    //

    ProxyStub::MethodHandler ExchangeTimeZoneStubMethods[] = {
        // (0) virtual uint32_t Register(Exchange::ITimeZone::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::ITimeZone* implementation = reinterpret_cast<Exchange::ITimeZone*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id sinkImplementation = reader.Number<Core::instance_id>();

            Exchange::ITimeZone::INotification* _sink = nullptr;
            ProxyStub::UnknownProxy* sinkProxy = nullptr;
            if (sinkImplementation != 0) {
                sinkProxy = RPC::Administrator::Instance().ProxyInstance(channel, sinkImplementation, false, _sink);
                ASSERT((_sink != nullptr) && (sinkProxy != nullptr));
            }

            uint32_t result = implementation->Register(_sink);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (sinkProxy != nullptr) {
                RPC::Administrator::Instance().Release(sinkProxy, message->Response());
            }
        },

        // (1) virtual uint32_t Unregister(Exchange::ITimeZone::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::ITimeZone* implementation = reinterpret_cast<Exchange::ITimeZone*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id sinkImplementation = reader.Number<Core::instance_id>();

            Exchange::ITimeZone::INotification* _sink = nullptr;
            ProxyStub::UnknownProxy* sinkProxy = nullptr;
            if (sinkImplementation != 0) {
                sinkProxy = RPC::Administrator::Instance().ProxyInstance(channel, sinkImplementation, false, _sink);
                ASSERT((_sink != nullptr) && (sinkProxy != nullptr));
            }

            uint32_t result = implementation->Unregister(_sink);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (sinkProxy != nullptr) {
                RPC::Administrator::Instance().Release(sinkProxy, message->Response());
            }
        },

        // (2) virtual uint32_t GetTimeZone(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::ITimeZone* implementation = reinterpret_cast<const Exchange::ITimeZone*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _timeZone{};

            uint32_t result = implementation->GetTimeZone(_timeZone);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_timeZone);
        },

        // (3) virtual uint32_t SetTimeZone(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::ITimeZone* implementation = reinterpret_cast<Exchange::ITimeZone*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _timeZone = reader.Text();

            uint32_t result = implementation->SetTimeZone(static_cast<const string&>(_timeZone));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeTimeZoneStubMethods

    //
    // Exchange::ITimeZone::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void TimeZoneChanged(const string&) = 0
    //

    ProxyStub::MethodHandler ExchangeTimeZoneNotificationStubMethods[] = {
        // (0) virtual void TimeZoneChanged(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::ITimeZone::INotification* implementation = reinterpret_cast<Exchange::ITimeZone::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _timeZone = reader.Text();

            implementation->TimeZoneChanged(static_cast<const string&>(_timeZone));
        }
    }; // ExchangeTimeZoneNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::ITimeZone interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Register(Exchange::ITimeZone::INotification*) = 0
    //  (1) virtual uint32_t Unregister(Exchange::ITimeZone::INotification*) = 0
    //  (2) virtual uint32_t GetTimeZone(string&) const = 0
    //  (3) virtual uint32_t SetTimeZone(const string&) = 0
    //

    class ExchangeTimeZoneProxy final : public ProxyStub::UnknownProxyType<Exchange::ITimeZone> {
    public:
        ExchangeTimeZoneProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Register(Exchange::ITimeZone::INotification* _sink) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_sink));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITimeZone>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        uint32_t Unregister(Exchange::ITimeZone::INotification* _sink) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_sink));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITimeZone>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        uint32_t GetTimeZone(string& _timeZone) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITimeZone>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _timeZone = reader.Text();
            }

            return (result);
        }

        uint32_t SetTimeZone(const string& _timeZone) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_timeZone));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITimeZone>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeTimeZoneProxy

    //
    // Exchange::ITimeZone::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void TimeZoneChanged(const string&) = 0
    //

    class ExchangeTimeZoneNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::ITimeZone::INotification> {
    public:
        ExchangeTimeZoneNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void TimeZoneChanged(const string& _timeZone) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_timeZone));

            ProxyStub::UnknownProxyType<Exchange::ITimeZone::INotification>::Invoke(message);
        }

    }; // class ExchangeTimeZoneNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::ITimeZone, ExchangeTimeZoneStubMethods> ExchangeTimeZoneStub;
        typedef ProxyStub::UnknownStubType<Exchange::ITimeZone::INotification, ExchangeTimeZoneNotificationStubMethods> ExchangeTimeZoneNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::ITimeZone, ExchangeTimeZoneProxy, ExchangeTimeZoneStub>();
                RPC::Administrator::Instance().Announce<Exchange::ITimeZone::INotification, ExchangeTimeZoneNotificationProxy, ExchangeTimeZoneNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::ITimeZone>();
                RPC::Administrator::Instance().Recall<Exchange::ITimeZone::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
