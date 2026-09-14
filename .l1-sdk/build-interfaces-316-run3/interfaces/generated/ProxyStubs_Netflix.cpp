//
// generated automatically from "INetflix.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::INetflix
//   - class Exchange::INetflix::INotification
//

#include "Module.h"
#include "INetflix.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::INetflix interface stub definitions
    //
    // Methods:
    //  (0) virtual void Register(Exchange::INetflix::INotification*) = 0
    //  (1) virtual void Unregister(Exchange::INetflix::INotification*) = 0
    //  (2) virtual string GetESN() const = 0
    //  (3) virtual void FactoryReset() = 0
    //  (4) virtual void SystemCommand(const string&) = 0
    //  (5) virtual void Language(const string&) = 0
    //  (6) virtual void SetVisible(bool) = 0
    //

    ProxyStub::MethodHandler ExchangeNetflixStubMethods[] = {
        // (0) virtual void Register(Exchange::INetflix::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetflix* implementation = reinterpret_cast<Exchange::INetflix*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id netflixImplementation = reader.Number<Core::instance_id>();

            Exchange::INetflix::INotification* _netflix = nullptr;
            ProxyStub::UnknownProxy* netflixProxy = nullptr;
            if (netflixImplementation != 0) {
                netflixProxy = RPC::Administrator::Instance().ProxyInstance(channel, netflixImplementation, false, _netflix);
                ASSERT((_netflix != nullptr) && (netflixProxy != nullptr));
            }

            implementation->Register(_netflix);

            if (netflixProxy != nullptr) {
                RPC::Administrator::Instance().Release(netflixProxy, message->Response());
            }
        },

        // (1) virtual void Unregister(Exchange::INetflix::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetflix* implementation = reinterpret_cast<Exchange::INetflix*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id netflixImplementation = reader.Number<Core::instance_id>();

            Exchange::INetflix::INotification* _netflix = nullptr;
            ProxyStub::UnknownProxy* netflixProxy = nullptr;
            if (netflixImplementation != 0) {
                netflixProxy = RPC::Administrator::Instance().ProxyInstance(channel, netflixImplementation, false, _netflix);
                ASSERT((_netflix != nullptr) && (netflixProxy != nullptr));
            }

            implementation->Unregister(_netflix);

            if (netflixProxy != nullptr) {
                RPC::Administrator::Instance().Release(netflixProxy, message->Response());
            }
        },

        // (2) virtual string GetESN() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::INetflix* implementation = reinterpret_cast<const Exchange::INetflix*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->GetESN();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (3) virtual void FactoryReset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetflix* implementation = reinterpret_cast<Exchange::INetflix*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->FactoryReset();
        },

        // (4) virtual void SystemCommand(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetflix* implementation = reinterpret_cast<Exchange::INetflix*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _command = reader.Text();

            implementation->SystemCommand(static_cast<const string&>(_command));
        },

        // (5) virtual void Language(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetflix* implementation = reinterpret_cast<Exchange::INetflix*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _language = reader.Text();

            implementation->Language(static_cast<const string&>(_language));
        },

        // (6) virtual void SetVisible(bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetflix* implementation = reinterpret_cast<Exchange::INetflix*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            bool _visibility = reader.Boolean();

            implementation->SetVisible(_visibility);
        }
    }; // ExchangeNetflixStubMethods

    //
    // Exchange::INetflix::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void StateChange(const Exchange::INetflix::state) = 0
    //  (1) virtual void Exit(const uint32_t) = 0
    //

    ProxyStub::MethodHandler ExchangeNetflixNotificationStubMethods[] = {
        // (0) virtual void StateChange(const Exchange::INetflix::state) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetflix::INotification* implementation = reinterpret_cast<Exchange::INetflix::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::INetflix::state _state = reader.Number<Exchange::INetflix::state>();

            implementation->StateChange(_state);
        },

        // (1) virtual void Exit(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetflix::INotification* implementation = reinterpret_cast<Exchange::INetflix::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _exitCode = reader.Number<uint32_t>();

            implementation->Exit(_exitCode);
        }
    }; // ExchangeNetflixNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::INetflix interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Register(Exchange::INetflix::INotification*) = 0
    //  (1) virtual void Unregister(Exchange::INetflix::INotification*) = 0
    //  (2) virtual string GetESN() const = 0
    //  (3) virtual void FactoryReset() = 0
    //  (4) virtual void SystemCommand(const string&) = 0
    //  (5) virtual void Language(const string&) = 0
    //  (6) virtual void SetVisible(bool) = 0
    //

    class ExchangeNetflixProxy final : public ProxyStub::UnknownProxyType<Exchange::INetflix> {
    public:
        ExchangeNetflixProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Register(Exchange::INetflix::INotification* _netflix) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_netflix));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::INetflix>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void Unregister(Exchange::INetflix::INotification* _netflix) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_netflix));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::INetflix>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        string GetESN() const override
        {
            IPCMessage message(BaseClass::Message(2));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::INetflix>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        void FactoryReset() override
        {
            IPCMessage message(BaseClass::Message(3));

            ProxyStub::UnknownProxyType<Exchange::INetflix>::Invoke(message);
        }

        void SystemCommand(const string& _command) override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_command));

            ProxyStub::UnknownProxyType<Exchange::INetflix>::Invoke(message);
        }

        void Language(const string& _language) override
        {
            IPCMessage message(BaseClass::Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_language));

            ProxyStub::UnknownProxyType<Exchange::INetflix>::Invoke(message);
        }

        void SetVisible(bool _visibility) override
        {
            IPCMessage message(BaseClass::Message(6));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Boolean(_visibility);

            ProxyStub::UnknownProxyType<Exchange::INetflix>::Invoke(message);
        }

    }; // class ExchangeNetflixProxy

    //
    // Exchange::INetflix::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void StateChange(const Exchange::INetflix::state) = 0
    //  (1) virtual void Exit(const uint32_t) = 0
    //

    class ExchangeNetflixNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::INetflix::INotification> {
    public:
        ExchangeNetflixNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void StateChange(const Exchange::INetflix::state _state) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::INetflix::state>(_state);

            ProxyStub::UnknownProxyType<Exchange::INetflix::INotification>::Invoke(message);
        }

        void Exit(const uint32_t _exitCode) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_exitCode);

            ProxyStub::UnknownProxyType<Exchange::INetflix::INotification>::Invoke(message);
        }

    }; // class ExchangeNetflixNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::INetflix, ExchangeNetflixStubMethods> ExchangeNetflixStub;
        typedef ProxyStub::UnknownStubType<Exchange::INetflix::INotification, ExchangeNetflixNotificationStubMethods> ExchangeNetflixNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::INetflix, ExchangeNetflixProxy, ExchangeNetflixStub>();
                RPC::Administrator::Instance().Announce<Exchange::INetflix::INotification, ExchangeNetflixNotificationProxy, ExchangeNetflixNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::INetflix>();
                RPC::Administrator::Instance().Recall<Exchange::INetflix::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
