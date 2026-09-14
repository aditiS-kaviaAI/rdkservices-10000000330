//
// generated automatically from "IPlayGiga.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IPlayGiga
//

#include "Module.h"
#include "IPlayGiga.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IPlayGiga interface stub definitions
    //
    // Methods:
    //  (0) virtual void Launch(const string&, const string&) = 0
    //

    ProxyStub::MethodHandler ExchangePlayGigaStubMethods[] = {
        // (0) virtual void Launch(const string&, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IPlayGiga* implementation = reinterpret_cast<Exchange::IPlayGiga*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _parameter_757b76ce = reader.Text();
            const string _parameter_1772e63d = reader.Text();

            implementation->Launch(static_cast<const string&>(_parameter_757b76ce), static_cast<const string&>(_parameter_1772e63d));
        }
    }; // ExchangePlayGigaStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IPlayGiga interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Launch(const string&, const string&) = 0
    //

    class ExchangePlayGigaProxy final : public ProxyStub::UnknownProxyType<Exchange::IPlayGiga> {
    public:
        ExchangePlayGigaProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Launch(const string& _parameter_757b76ce, const string& _parameter_1772e63d) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_parameter_757b76ce));
            writer.Text(static_cast<const string&>(_parameter_1772e63d));

            ProxyStub::UnknownProxyType<Exchange::IPlayGiga>::Invoke(message);
        }

    }; // class ExchangePlayGigaProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IPlayGiga, ExchangePlayGigaStubMethods> ExchangePlayGigaStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IPlayGiga, ExchangePlayGigaProxy, ExchangePlayGigaStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IPlayGiga>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
