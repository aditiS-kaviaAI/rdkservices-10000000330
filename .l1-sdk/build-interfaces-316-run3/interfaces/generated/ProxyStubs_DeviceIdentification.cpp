//
// generated automatically from "IDeviceIdentification.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IDeviceProperties
//

#include "Module.h"
#include "IDeviceIdentification.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IDeviceProperties interface stub definitions
    //
    // Methods:
    //  (0) virtual const string Chipset() const = 0
    //  (1) virtual const string FirmwareVersion() const = 0
    //

    ProxyStub::MethodHandler ExchangeDevicePropertiesStubMethods[] = {
        // (0) virtual const string Chipset() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceProperties* implementation = reinterpret_cast<const Exchange::IDeviceProperties*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            const string result = implementation->Chipset();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (1) virtual const string FirmwareVersion() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceProperties* implementation = reinterpret_cast<const Exchange::IDeviceProperties*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            const string result = implementation->FirmwareVersion();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        }
    }; // ExchangeDevicePropertiesStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IDeviceProperties interface proxy definitions
    //
    // Methods:
    //  (0) virtual const string Chipset() const = 0
    //  (1) virtual const string FirmwareVersion() const = 0
    //

    class ExchangeDevicePropertiesProxy final : public ProxyStub::UnknownProxyType<Exchange::IDeviceProperties> {
    public:
        ExchangeDevicePropertiesProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        const string Chipset() const override
        {
            IPCMessage message(BaseClass::Message(0));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceProperties>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        const string FirmwareVersion() const override
        {
            IPCMessage message(BaseClass::Message(1));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceProperties>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

    }; // class ExchangeDevicePropertiesProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IDeviceProperties, ExchangeDevicePropertiesStubMethods> ExchangeDevicePropertiesStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IDeviceProperties, ExchangeDevicePropertiesProxy, ExchangeDevicePropertiesStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IDeviceProperties>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
