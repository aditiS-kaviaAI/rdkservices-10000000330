//
// generated automatically from "IMath.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IMath
//

#include "Module.h"
#include "IMath.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IMath interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Add(const uint16_t, const uint16_t, uint16_t&) const = 0
    //  (1) virtual uint32_t Sub(const uint16_t, const uint16_t, uint16_t&) const = 0
    //

    ProxyStub::MethodHandler ExchangeMathStubMethods[] = {
        // (0) virtual uint32_t Add(const uint16_t, const uint16_t, uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IMath* implementation = reinterpret_cast<const Exchange::IMath*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint16_t _A = reader.Number<uint16_t>();
            const uint16_t _B = reader.Number<uint16_t>();

            uint16_t _sum{};

            uint32_t result = implementation->Add(_A, _B, _sum);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_sum);
        },

        // (1) virtual uint32_t Sub(const uint16_t, const uint16_t, uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IMath* implementation = reinterpret_cast<const Exchange::IMath*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint16_t _A = reader.Number<uint16_t>();
            const uint16_t _B = reader.Number<uint16_t>();

            uint16_t _sum{};

            uint32_t result = implementation->Sub(_A, _B, _sum);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_sum);
        }
    }; // ExchangeMathStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IMath interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Add(const uint16_t, const uint16_t, uint16_t&) const = 0
    //  (1) virtual uint32_t Sub(const uint16_t, const uint16_t, uint16_t&) const = 0
    //

    class ExchangeMathProxy final : public ProxyStub::UnknownProxyType<Exchange::IMath> {
    public:
        ExchangeMathProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Add(const uint16_t _A, const uint16_t _B, uint16_t& _sum) const override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint16_t>(_A);
            writer.Number<uint16_t>(_B);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IMath>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _sum = reader.Number<uint16_t>();
            }

            return (result);
        }

        uint32_t Sub(const uint16_t _A, const uint16_t _B, uint16_t& _sum) const override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint16_t>(_A);
            writer.Number<uint16_t>(_B);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IMath>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _sum = reader.Number<uint16_t>();
            }

            return (result);
        }

    }; // class ExchangeMathProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IMath, ExchangeMathStubMethods> ExchangeMathStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IMath, ExchangeMathProxy, ExchangeMathStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IMath>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
