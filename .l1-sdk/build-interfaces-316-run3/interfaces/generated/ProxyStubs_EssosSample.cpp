//
// generated automatically from "IEssosSample.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IEssosSample
//

#include "Module.h"
#include "IEssosSample.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IEssosSample interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t SetWaylandDisplay(const string&) = 0
    //  (1) virtual uint32_t Start() = 0
    //  (2) virtual uint32_t Stop() = 0
    //

    ProxyStub::MethodHandler ExchangeEssosSampleStubMethods[] = {
        // (0) virtual uint32_t SetWaylandDisplay(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IEssosSample* implementation = reinterpret_cast<Exchange::IEssosSample*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _input = reader.Text();

            uint32_t result = implementation->SetWaylandDisplay(static_cast<const string&>(_input));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (1) virtual uint32_t Start() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IEssosSample* implementation = reinterpret_cast<Exchange::IEssosSample*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Start();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t Stop() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IEssosSample* implementation = reinterpret_cast<Exchange::IEssosSample*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Stop();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeEssosSampleStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IEssosSample interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t SetWaylandDisplay(const string&) = 0
    //  (1) virtual uint32_t Start() = 0
    //  (2) virtual uint32_t Stop() = 0
    //

    class ExchangeEssosSampleProxy final : public ProxyStub::UnknownProxyType<Exchange::IEssosSample> {
    public:
        ExchangeEssosSampleProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t SetWaylandDisplay(const string& _input) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_input));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IEssosSample>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Start() override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IEssosSample>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Stop() override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IEssosSample>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeEssosSampleProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IEssosSample, ExchangeEssosSampleStubMethods> ExchangeEssosSampleStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IEssosSample, ExchangeEssosSampleProxy, ExchangeEssosSampleStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IEssosSample>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
