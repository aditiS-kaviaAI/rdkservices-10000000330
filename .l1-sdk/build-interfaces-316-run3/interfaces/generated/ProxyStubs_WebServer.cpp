//
// generated automatically from "IWebServer.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IWebServer
//

#include "Module.h"
#include "IWebServer.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IWebServer interface stub definitions
    //
    // Methods:
    //  (0) virtual void AddProxy(const string&, const string&, const string&) = 0
    //  (1) virtual void RemoveProxy(const string&) = 0
    //  (2) virtual string Accessor() const = 0
    //

    ProxyStub::MethodHandler ExchangeWebServerStubMethods[] = {
        // (0) virtual void AddProxy(const string&, const string&, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebServer* implementation = reinterpret_cast<Exchange::IWebServer*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _path = reader.Text();
            const string _subst = reader.Text();
            const string _address = reader.Text();

            implementation->AddProxy(static_cast<const string&>(_path), static_cast<const string&>(_subst), static_cast<const string&>(_address));
        },

        // (1) virtual void RemoveProxy(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebServer* implementation = reinterpret_cast<Exchange::IWebServer*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _path = reader.Text();

            implementation->RemoveProxy(static_cast<const string&>(_path));
        },

        // (2) virtual string Accessor() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IWebServer* implementation = reinterpret_cast<const Exchange::IWebServer*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Accessor();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        }
    }; // ExchangeWebServerStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IWebServer interface proxy definitions
    //
    // Methods:
    //  (0) virtual void AddProxy(const string&, const string&, const string&) = 0
    //  (1) virtual void RemoveProxy(const string&) = 0
    //  (2) virtual string Accessor() const = 0
    //

    class ExchangeWebServerProxy final : public ProxyStub::UnknownProxyType<Exchange::IWebServer> {
    public:
        ExchangeWebServerProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void AddProxy(const string& _path, const string& _subst, const string& _address) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_path));
            writer.Text(static_cast<const string&>(_subst));
            writer.Text(static_cast<const string&>(_address));

            ProxyStub::UnknownProxyType<Exchange::IWebServer>::Invoke(message);
        }

        void RemoveProxy(const string& _path) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_path));

            ProxyStub::UnknownProxyType<Exchange::IWebServer>::Invoke(message);
        }

        string Accessor() const override
        {
            IPCMessage message(BaseClass::Message(2));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebServer>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

    }; // class ExchangeWebServerProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IWebServer, ExchangeWebServerStubMethods> ExchangeWebServerStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IWebServer, ExchangeWebServerProxy, ExchangeWebServerStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IWebServer>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
