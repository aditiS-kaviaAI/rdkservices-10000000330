//
// generated automatically from "IGuide.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IGuide
//   - class Exchange::IGuide::INotification
//

#include "Module.h"
#include "IGuide.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IGuide interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t StartParser(PluginHost::IShell*) = 0
    //  (1) virtual const string GetChannels() = 0
    //  (2) virtual const string GetPrograms() = 0
    //  (3) virtual const string GetCurrentProgram(const string&) = 0
    //  (4) virtual const string GetAudioLanguages(const uint32_t) = 0
    //  (5) virtual const string GetSubtitleLanguages(const uint32_t) = 0
    //  (6) virtual bool SetParentalControlPin(const string&, const string&) = 0
    //  (7) virtual bool SetParentalControl(const string&, const bool) = 0
    //  (8) virtual bool IsParentalControlled() = 0
    //  (9) virtual bool SetParentalLock(const string&, const bool, const string&) = 0
    //  (10) virtual bool IsParentalLocked(const string&) = 0
    //  (11) virtual void Register(Exchange::IGuide::INotification*) = 0
    //  (12) virtual void Unregister(Exchange::IGuide::INotification*) = 0
    //

    ProxyStub::MethodHandler ExchangeGuideStubMethods[] = {
        // (0) virtual uint32_t StartParser(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id parameter_c7c09d2aImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _parameter_c7c09d2a = nullptr;
            ProxyStub::UnknownProxy* parameter_c7c09d2aProxy = nullptr;
            if (parameter_c7c09d2aImplementation != 0) {
                parameter_c7c09d2aProxy = RPC::Administrator::Instance().ProxyInstance(channel, parameter_c7c09d2aImplementation, false, _parameter_c7c09d2a);
                ASSERT((_parameter_c7c09d2a != nullptr) && (parameter_c7c09d2aProxy != nullptr));
            }

            uint32_t result = implementation->StartParser(_parameter_c7c09d2a);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (parameter_c7c09d2aProxy != nullptr) {
                RPC::Administrator::Instance().Release(parameter_c7c09d2aProxy, message->Response());
            }
        },

        // (1) virtual const string GetChannels() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            const string result = implementation->GetChannels();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (2) virtual const string GetPrograms() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            const string result = implementation->GetPrograms();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (3) virtual const string GetCurrentProgram(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_3bd3702c = reader.Text();

            const string result = implementation->GetCurrentProgram(static_cast<const string&>(_parameter_3bd3702c));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (4) virtual const string GetAudioLanguages(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _parameter_faab8327 = reader.Number<uint32_t>();

            const string result = implementation->GetAudioLanguages(_parameter_faab8327);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (5) virtual const string GetSubtitleLanguages(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _parameter_63c2904d = reader.Number<uint32_t>();

            const string result = implementation->GetSubtitleLanguages(_parameter_63c2904d);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (6) virtual bool SetParentalControlPin(const string&, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_66b2d944 = reader.Text();
            const string _parameter_1fc45697 = reader.Text();

            bool result = implementation->SetParentalControlPin(static_cast<const string&>(_parameter_66b2d944), static_cast<const string&>(_parameter_1fc45697));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (7) virtual bool SetParentalControl(const string&, const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_4c00d510 = reader.Text();
            const bool _parameter_ef942f97 = reader.Boolean();

            bool result = implementation->SetParentalControl(static_cast<const string&>(_parameter_4c00d510), _parameter_ef942f97);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (8) virtual bool IsParentalControlled() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsParentalControlled();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (9) virtual bool SetParentalLock(const string&, const bool, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_f2f2b3b4 = reader.Text();
            const bool _parameter_f1892b8c = reader.Boolean();
            const string _parameter_bd7010c8 = reader.Text();

            bool result = implementation->SetParentalLock(static_cast<const string&>(_parameter_f2f2b3b4), _parameter_f1892b8c, static_cast<const string&>(_parameter_bd7010c8));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (10) virtual bool IsParentalLocked(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_84a2fc2e = reader.Text();

            bool result = implementation->IsParentalLocked(static_cast<const string&>(_parameter_84a2fc2e));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (11) virtual void Register(Exchange::IGuide::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id parameter_d8febfa4Implementation = reader.Number<Core::instance_id>();

            Exchange::IGuide::INotification* _parameter_d8febfa4 = nullptr;
            ProxyStub::UnknownProxy* parameter_d8febfa4Proxy = nullptr;
            if (parameter_d8febfa4Implementation != 0) {
                parameter_d8febfa4Proxy = RPC::Administrator::Instance().ProxyInstance(channel, parameter_d8febfa4Implementation, false, _parameter_d8febfa4);
                ASSERT((_parameter_d8febfa4 != nullptr) && (parameter_d8febfa4Proxy != nullptr));
            }

            implementation->Register(_parameter_d8febfa4);

            if (parameter_d8febfa4Proxy != nullptr) {
                RPC::Administrator::Instance().Release(parameter_d8febfa4Proxy, message->Response());
            }
        },

        // (12) virtual void Unregister(Exchange::IGuide::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide* implementation = reinterpret_cast<Exchange::IGuide*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id parameter_a6a107cfImplementation = reader.Number<Core::instance_id>();

            Exchange::IGuide::INotification* _parameter_a6a107cf = nullptr;
            ProxyStub::UnknownProxy* parameter_a6a107cfProxy = nullptr;
            if (parameter_a6a107cfImplementation != 0) {
                parameter_a6a107cfProxy = RPC::Administrator::Instance().ProxyInstance(channel, parameter_a6a107cfImplementation, false, _parameter_a6a107cf);
                ASSERT((_parameter_a6a107cf != nullptr) && (parameter_a6a107cfProxy != nullptr));
            }

            implementation->Unregister(_parameter_a6a107cf);

            if (parameter_a6a107cfProxy != nullptr) {
                RPC::Administrator::Instance().Release(parameter_a6a107cfProxy, message->Response());
            }
        }
    }; // ExchangeGuideStubMethods

    //
    // Exchange::IGuide::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void EITBroadcast() = 0
    //  (1) virtual void EmergencyAlert() = 0
    //  (2) virtual void ParentalControlChanged() = 0
    //  (3) virtual void ParentalLockChanged(const string&) = 0
    //  (4) virtual void TestNotification(const string&) = 0
    //

    ProxyStub::MethodHandler ExchangeGuideNotificationStubMethods[] = {
        // (0) virtual void EITBroadcast() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide::INotification* implementation = reinterpret_cast<Exchange::IGuide::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->EITBroadcast();
        },

        // (1) virtual void EmergencyAlert() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide::INotification* implementation = reinterpret_cast<Exchange::IGuide::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->EmergencyAlert();
        },

        // (2) virtual void ParentalControlChanged() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide::INotification* implementation = reinterpret_cast<Exchange::IGuide::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->ParentalControlChanged();
        },

        // (3) virtual void ParentalLockChanged(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide::INotification* implementation = reinterpret_cast<Exchange::IGuide::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_3bccdb50 = reader.Text();

            implementation->ParentalLockChanged(static_cast<const string&>(_parameter_3bccdb50));
        },

        // (4) virtual void TestNotification(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IGuide::INotification* implementation = reinterpret_cast<Exchange::IGuide::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_8f60754d = reader.Text();

            implementation->TestNotification(static_cast<const string&>(_parameter_8f60754d));
        }
    }; // ExchangeGuideNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IGuide interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t StartParser(PluginHost::IShell*) = 0
    //  (1) virtual const string GetChannels() = 0
    //  (2) virtual const string GetPrograms() = 0
    //  (3) virtual const string GetCurrentProgram(const string&) = 0
    //  (4) virtual const string GetAudioLanguages(const uint32_t) = 0
    //  (5) virtual const string GetSubtitleLanguages(const uint32_t) = 0
    //  (6) virtual bool SetParentalControlPin(const string&, const string&) = 0
    //  (7) virtual bool SetParentalControl(const string&, const bool) = 0
    //  (8) virtual bool IsParentalControlled() = 0
    //  (9) virtual bool SetParentalLock(const string&, const bool, const string&) = 0
    //  (10) virtual bool IsParentalLocked(const string&) = 0
    //  (11) virtual void Register(Exchange::IGuide::INotification*) = 0
    //  (12) virtual void Unregister(Exchange::IGuide::INotification*) = 0
    //

    class ExchangeGuideProxy final : public ProxyStub::UnknownProxyType<Exchange::IGuide> {
    public:
        ExchangeGuideProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t StartParser(PluginHost::IShell* _parameter_c7c09d2a) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_c7c09d2a));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        const string GetChannels() override
        {
            IPCMessage message(BaseClass::Message(1));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        const string GetPrograms() override
        {
            IPCMessage message(BaseClass::Message(2));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        const string GetCurrentProgram(const string& _parameter_3bd3702c) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_parameter_3bd3702c));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        const string GetAudioLanguages(const uint32_t _parameter_faab8327) override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_parameter_faab8327);

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        const string GetSubtitleLanguages(const uint32_t _parameter_63c2904d) override
        {
            IPCMessage message(BaseClass::Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_parameter_63c2904d);

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        bool SetParentalControlPin(const string& _parameter_66b2d944, const string& _parameter_1fc45697) override
        {
            IPCMessage message(BaseClass::Message(6));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_parameter_66b2d944));
            writer.Text(static_cast<const string&>(_parameter_1fc45697));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        bool SetParentalControl(const string& _parameter_4c00d510, const bool _parameter_ef942f97) override
        {
            IPCMessage message(BaseClass::Message(7));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_parameter_4c00d510));
            writer.Boolean(_parameter_ef942f97);

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        bool IsParentalControlled() override
        {
            IPCMessage message(BaseClass::Message(8));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        bool SetParentalLock(const string& _parameter_f2f2b3b4, const bool _parameter_f1892b8c, const string& _parameter_bd7010c8) override
        {
            IPCMessage message(BaseClass::Message(9));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_parameter_f2f2b3b4));
            writer.Boolean(_parameter_f1892b8c);
            writer.Text(static_cast<const string&>(_parameter_bd7010c8));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        bool IsParentalLocked(const string& _parameter_84a2fc2e) override
        {
            IPCMessage message(BaseClass::Message(10));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_parameter_84a2fc2e));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        void Register(Exchange::IGuide::INotification* _parameter_d8febfa4) override
        {
            IPCMessage message(BaseClass::Message(11));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_d8febfa4));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void Unregister(Exchange::IGuide::INotification* _parameter_a6a107cf) override
        {
            IPCMessage message(BaseClass::Message(12));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_a6a107cf));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IGuide>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

    }; // class ExchangeGuideProxy

    //
    // Exchange::IGuide::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void EITBroadcast() = 0
    //  (1) virtual void EmergencyAlert() = 0
    //  (2) virtual void ParentalControlChanged() = 0
    //  (3) virtual void ParentalLockChanged(const string&) = 0
    //  (4) virtual void TestNotification(const string&) = 0
    //

    class ExchangeGuideNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::IGuide::INotification> {
    public:
        ExchangeGuideNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void EITBroadcast() override
        {
            IPCMessage message(BaseClass::Message(0));

            ProxyStub::UnknownProxyType<Exchange::IGuide::INotification>::Invoke(message);
        }

        void EmergencyAlert() override
        {
            IPCMessage message(BaseClass::Message(1));

            ProxyStub::UnknownProxyType<Exchange::IGuide::INotification>::Invoke(message);
        }

        void ParentalControlChanged() override
        {
            IPCMessage message(BaseClass::Message(2));

            ProxyStub::UnknownProxyType<Exchange::IGuide::INotification>::Invoke(message);
        }

        void ParentalLockChanged(const string& _parameter_3bccdb50) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_parameter_3bccdb50));

            ProxyStub::UnknownProxyType<Exchange::IGuide::INotification>::Invoke(message);
        }

        void TestNotification(const string& _parameter_8f60754d) override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_parameter_8f60754d));

            ProxyStub::UnknownProxyType<Exchange::IGuide::INotification>::Invoke(message);
        }

    }; // class ExchangeGuideNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IGuide, ExchangeGuideStubMethods> ExchangeGuideStub;
        typedef ProxyStub::UnknownStubType<Exchange::IGuide::INotification, ExchangeGuideNotificationStubMethods> ExchangeGuideNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IGuide, ExchangeGuideProxy, ExchangeGuideStub>();
                RPC::Administrator::Instance().Announce<Exchange::IGuide::INotification, ExchangeGuideNotificationProxy, ExchangeGuideNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IGuide>();
                RPC::Administrator::Instance().Recall<Exchange::IGuide::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
