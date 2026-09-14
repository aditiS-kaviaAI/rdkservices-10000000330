//
// generated automatically from "ICustomerCareOperations.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::ICustomerCareOperations
//

#include "Module.h"
#include "ICustomerCareOperations.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::ICustomerCareOperations interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t FactoryReset() = 0
    //

    ProxyStub::MethodHandler ExchangeCustomerCareOperationsStubMethods[] = {
        // (0) virtual uint32_t FactoryReset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::ICustomerCareOperations* implementation = reinterpret_cast<Exchange::ICustomerCareOperations*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->FactoryReset();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeCustomerCareOperationsStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::ICustomerCareOperations interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t FactoryReset() = 0
    //

    class ExchangeCustomerCareOperationsProxy final : public ProxyStub::UnknownProxyType<Exchange::ICustomerCareOperations> {
    public:
        ExchangeCustomerCareOperationsProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t FactoryReset() override
        {
            IPCMessage message(BaseClass::Message(0));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ICustomerCareOperations>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

    }; // class ExchangeCustomerCareOperationsProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::ICustomerCareOperations, ExchangeCustomerCareOperationsStubMethods> ExchangeCustomerCareOperationsStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::ICustomerCareOperations, ExchangeCustomerCareOperationsProxy, ExchangeCustomerCareOperationsStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::ICustomerCareOperations>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
