//
// generated automatically from "IDolby.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::Dolby::IOutput
//   - class Exchange::Dolby::IOutput::INotification
//

#include "Module.h"
#include "IDolby.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::Dolby::IOutput interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Register(Exchange::Dolby::IOutput::INotification*) = 0
    //  (1) virtual uint32_t Unregister(Exchange::Dolby::IOutput::INotification*) = 0
    //  (2) virtual uint32_t AtmosMetadata(bool&) const = 0
    //  (3) virtual uint32_t SoundMode(Exchange::Dolby::IOutput::SoundModes&) const = 0
    //  (4) virtual uint32_t EnableAtmosOutput(const bool&) = 0
    //  (5) virtual uint32_t Mode(const Exchange::Dolby::IOutput::Type&) = 0
    //  (6) virtual uint32_t Mode(Exchange::Dolby::IOutput::Type&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDolbyOutputStubMethods[] = {
        // (0) virtual uint32_t Register(Exchange::Dolby::IOutput::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::Dolby::IOutput* implementation = reinterpret_cast<Exchange::Dolby::IOutput*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id parameter_ad2ed4d0Implementation = reader.Number<Core::instance_id>();

            Exchange::Dolby::IOutput::INotification* _parameter_ad2ed4d0 = nullptr;
            ProxyStub::UnknownProxy* parameter_ad2ed4d0Proxy = nullptr;
            if (parameter_ad2ed4d0Implementation != 0) {
                parameter_ad2ed4d0Proxy = RPC::Administrator::Instance().ProxyInstance(channel, parameter_ad2ed4d0Implementation, false, _parameter_ad2ed4d0);
                ASSERT((_parameter_ad2ed4d0 != nullptr) && (parameter_ad2ed4d0Proxy != nullptr));
            }

            uint32_t result = implementation->Register(_parameter_ad2ed4d0);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (parameter_ad2ed4d0Proxy != nullptr) {
                RPC::Administrator::Instance().Release(parameter_ad2ed4d0Proxy, message->Response());
            }
        },

        // (1) virtual uint32_t Unregister(Exchange::Dolby::IOutput::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::Dolby::IOutput* implementation = reinterpret_cast<Exchange::Dolby::IOutput*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id parameter_cef2e888Implementation = reader.Number<Core::instance_id>();

            Exchange::Dolby::IOutput::INotification* _parameter_cef2e888 = nullptr;
            ProxyStub::UnknownProxy* parameter_cef2e888Proxy = nullptr;
            if (parameter_cef2e888Implementation != 0) {
                parameter_cef2e888Proxy = RPC::Administrator::Instance().ProxyInstance(channel, parameter_cef2e888Implementation, false, _parameter_cef2e888);
                ASSERT((_parameter_cef2e888 != nullptr) && (parameter_cef2e888Proxy != nullptr));
            }

            uint32_t result = implementation->Unregister(_parameter_cef2e888);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (parameter_cef2e888Proxy != nullptr) {
                RPC::Administrator::Instance().Release(parameter_cef2e888Proxy, message->Response());
            }
        },

        // (2) virtual uint32_t AtmosMetadata(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::Dolby::IOutput* implementation = reinterpret_cast<const Exchange::Dolby::IOutput*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _supported{};

            uint32_t result = implementation->AtmosMetadata(_supported);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_supported);
        },

        // (3) virtual uint32_t SoundMode(Exchange::Dolby::IOutput::SoundModes&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::Dolby::IOutput* implementation = reinterpret_cast<const Exchange::Dolby::IOutput*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::Dolby::IOutput::SoundModes _mode{};

            uint32_t result = implementation->SoundMode(_mode);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::Dolby::IOutput::SoundModes>(_mode);
        },

        // (4) virtual uint32_t EnableAtmosOutput(const bool&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::Dolby::IOutput* implementation = reinterpret_cast<Exchange::Dolby::IOutput*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const bool _enable = reader.Boolean();

            uint32_t result = implementation->EnableAtmosOutput(static_cast<const bool&>(_enable));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual uint32_t Mode(const Exchange::Dolby::IOutput::Type&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::Dolby::IOutput* implementation = reinterpret_cast<Exchange::Dolby::IOutput*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::Dolby::IOutput::Type _mode = reader.Number<Exchange::Dolby::IOutput::Type>();

            uint32_t result = implementation->Mode(static_cast<const Exchange::Dolby::IOutput::Type&>(_mode));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (6) virtual uint32_t Mode(Exchange::Dolby::IOutput::Type&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::Dolby::IOutput* implementation = reinterpret_cast<const Exchange::Dolby::IOutput*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::Dolby::IOutput::Type _mode{};

            uint32_t result = implementation->Mode(_mode);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::Dolby::IOutput::Type>(_mode);
        }
    }; // ExchangeDolbyOutputStubMethods

    //
    // Exchange::Dolby::IOutput::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void AudioModeChanged(const Exchange::Dolby::IOutput::SoundModes, const bool) = 0
    //

    ProxyStub::MethodHandler ExchangeDolbyOutputNotificationStubMethods[] = {
        // (0) virtual void AudioModeChanged(const Exchange::Dolby::IOutput::SoundModes, const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::Dolby::IOutput::INotification* implementation = reinterpret_cast<Exchange::Dolby::IOutput::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::Dolby::IOutput::SoundModes _mode = reader.Number<Exchange::Dolby::IOutput::SoundModes>();
            const bool _enabled = reader.Boolean();

            implementation->AudioModeChanged(_mode, _enabled);
        }
    }; // ExchangeDolbyOutputNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::Dolby::IOutput interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Register(Exchange::Dolby::IOutput::INotification*) = 0
    //  (1) virtual uint32_t Unregister(Exchange::Dolby::IOutput::INotification*) = 0
    //  (2) virtual uint32_t AtmosMetadata(bool&) const = 0
    //  (3) virtual uint32_t SoundMode(Exchange::Dolby::IOutput::SoundModes&) const = 0
    //  (4) virtual uint32_t EnableAtmosOutput(const bool&) = 0
    //  (5) virtual uint32_t Mode(const Exchange::Dolby::IOutput::Type&) = 0
    //  (6) virtual uint32_t Mode(Exchange::Dolby::IOutput::Type&) const = 0
    //

    class ExchangeDolbyOutputProxy final : public ProxyStub::UnknownProxyType<Exchange::Dolby::IOutput> {
    public:
        ExchangeDolbyOutputProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Register(Exchange::Dolby::IOutput::INotification* _parameter_ad2ed4d0) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_ad2ed4d0));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::Dolby::IOutput>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                Complete(reader);
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t Unregister(Exchange::Dolby::IOutput::INotification* _parameter_cef2e888) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_cef2e888));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::Dolby::IOutput>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                Complete(reader);
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t AtmosMetadata(bool& _supported) const override
        {
            IPCMessage message(BaseClass::Message(2));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::Dolby::IOutput>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _supported = reader.Boolean();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t SoundMode(Exchange::Dolby::IOutput::SoundModes& _mode) const override
        {
            IPCMessage message(BaseClass::Message(3));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::Dolby::IOutput>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _mode = reader.Number<Exchange::Dolby::IOutput::SoundModes>();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t EnableAtmosOutput(const bool& _enable) override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Boolean(static_cast<const bool&>(_enable));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::Dolby::IOutput>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t Mode(const Exchange::Dolby::IOutput::Type& _mode) override
        {
            IPCMessage message(BaseClass::Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::Dolby::IOutput::Type>(static_cast<const Exchange::Dolby::IOutput::Type&>(_mode));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::Dolby::IOutput>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t Mode(Exchange::Dolby::IOutput::Type& _mode) const override
        {
            IPCMessage message(BaseClass::Message(6));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::Dolby::IOutput>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _mode = reader.Number<Exchange::Dolby::IOutput::Type>();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

    }; // class ExchangeDolbyOutputProxy

    //
    // Exchange::Dolby::IOutput::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void AudioModeChanged(const Exchange::Dolby::IOutput::SoundModes, const bool) = 0
    //

    class ExchangeDolbyOutputNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::Dolby::IOutput::INotification> {
    public:
        ExchangeDolbyOutputNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void AudioModeChanged(const Exchange::Dolby::IOutput::SoundModes _mode, const bool _enabled) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::Dolby::IOutput::SoundModes>(_mode);
            writer.Boolean(_enabled);

            ProxyStub::UnknownProxyType<Exchange::Dolby::IOutput::INotification>::Invoke(message);
        }

    }; // class ExchangeDolbyOutputNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::Dolby::IOutput, ExchangeDolbyOutputStubMethods> ExchangeDolbyOutputStub;
        typedef ProxyStub::UnknownStubType<Exchange::Dolby::IOutput::INotification, ExchangeDolbyOutputNotificationStubMethods> ExchangeDolbyOutputNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::Dolby::IOutput, ExchangeDolbyOutputProxy, ExchangeDolbyOutputStub>();
                RPC::Administrator::Instance().Announce<Exchange::Dolby::IOutput::INotification, ExchangeDolbyOutputNotificationProxy, ExchangeDolbyOutputNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::Dolby::IOutput>();
                RPC::Administrator::Instance().Recall<Exchange::Dolby::IOutput::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
