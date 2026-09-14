//
// generated automatically from "IWebPA.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IWebPA
//   - class Exchange::IWebPA::IWebPAClient
//

#include "Module.h"
#include "IWebPA.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IWebPA interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Initialize(PluginHost::IShell*) = 0
    //  (1) virtual void Deinitialize(PluginHost::IShell*) = 0
    //  (2) virtual Exchange::IWebPA::IWebPAClient* Client(const string&) = 0
    //

    ProxyStub::MethodHandler ExchangeWebPAStubMethods[] = {
        // (0) virtual uint32_t Initialize(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebPA* implementation = reinterpret_cast<Exchange::IWebPA*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id parameter_702a04bcImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _parameter_702a04bc = nullptr;
            ProxyStub::UnknownProxy* parameter_702a04bcProxy = nullptr;
            if (parameter_702a04bcImplementation != 0) {
                parameter_702a04bcProxy = RPC::Administrator::Instance().ProxyInstance(channel, parameter_702a04bcImplementation, false, _parameter_702a04bc);
                ASSERT((_parameter_702a04bc != nullptr) && (parameter_702a04bcProxy != nullptr));
            }

            uint32_t result = implementation->Initialize(_parameter_702a04bc);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (parameter_702a04bcProxy != nullptr) {
                RPC::Administrator::Instance().Release(parameter_702a04bcProxy, message->Response());
            }
        },

        // (1) virtual void Deinitialize(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebPA* implementation = reinterpret_cast<Exchange::IWebPA*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id parameter_9472f2d7Implementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _parameter_9472f2d7 = nullptr;
            ProxyStub::UnknownProxy* parameter_9472f2d7Proxy = nullptr;
            if (parameter_9472f2d7Implementation != 0) {
                parameter_9472f2d7Proxy = RPC::Administrator::Instance().ProxyInstance(channel, parameter_9472f2d7Implementation, false, _parameter_9472f2d7);
                ASSERT((_parameter_9472f2d7 != nullptr) && (parameter_9472f2d7Proxy != nullptr));
            }

            implementation->Deinitialize(_parameter_9472f2d7);

            if (parameter_9472f2d7Proxy != nullptr) {
                RPC::Administrator::Instance().Release(parameter_9472f2d7Proxy, message->Response());
            }
        },

        // (2) virtual Exchange::IWebPA::IWebPAClient* Client(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebPA* implementation = reinterpret_cast<Exchange::IWebPA*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _name = reader.Text();

            Exchange::IWebPA::IWebPAClient* result = implementation->Client(static_cast<const string&>(_name));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(result));

            RPC::Administrator::Instance().RegisterInterface(channel, result);
        }
    }; // ExchangeWebPAStubMethods

    //
    // Exchange::IWebPA::IWebPAClient interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Configure(PluginHost::IShell*) = 0
    //  (1) virtual uint32_t Launch() = 0
    //

    ProxyStub::MethodHandler ExchangeWebPAWebPAClientStubMethods[] = {
        // (0) virtual uint32_t Configure(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebPA::IWebPAClient* implementation = reinterpret_cast<Exchange::IWebPA::IWebPAClient*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id parameter_81ef0c6fImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _parameter_81ef0c6f = nullptr;
            ProxyStub::UnknownProxy* parameter_81ef0c6fProxy = nullptr;
            if (parameter_81ef0c6fImplementation != 0) {
                parameter_81ef0c6fProxy = RPC::Administrator::Instance().ProxyInstance(channel, parameter_81ef0c6fImplementation, false, _parameter_81ef0c6f);
                ASSERT((_parameter_81ef0c6f != nullptr) && (parameter_81ef0c6fProxy != nullptr));
            }

            uint32_t result = implementation->Configure(_parameter_81ef0c6f);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (parameter_81ef0c6fProxy != nullptr) {
                RPC::Administrator::Instance().Release(parameter_81ef0c6fProxy, message->Response());
            }
        },

        // (1) virtual uint32_t Launch() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebPA::IWebPAClient* implementation = reinterpret_cast<Exchange::IWebPA::IWebPAClient*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Launch();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeWebPAWebPAClientStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IWebPA interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Initialize(PluginHost::IShell*) = 0
    //  (1) virtual void Deinitialize(PluginHost::IShell*) = 0
    //  (2) virtual Exchange::IWebPA::IWebPAClient* Client(const string&) = 0
    //

    class ExchangeWebPAProxy final : public ProxyStub::UnknownProxyType<Exchange::IWebPA> {
    public:
        ExchangeWebPAProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Initialize(PluginHost::IShell* _parameter_702a04bc) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_702a04bc));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebPA>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        void Deinitialize(PluginHost::IShell* _parameter_9472f2d7) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_9472f2d7));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebPA>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        Exchange::IWebPA::IWebPAClient* Client(const string& _name) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_name));

            Exchange::IWebPA::IWebPAClient* result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebPA>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reinterpret_cast<Exchange::IWebPA::IWebPAClient*>(Interface(reader.Number<Core::instance_id>(), Exchange::IWebPA::IWebPAClient::ID));
            }

            return (result);
        }

    }; // class ExchangeWebPAProxy

    //
    // Exchange::IWebPA::IWebPAClient interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Configure(PluginHost::IShell*) = 0
    //  (1) virtual uint32_t Launch() = 0
    //

    class ExchangeWebPAWebPAClientProxy final : public ProxyStub::UnknownProxyType<Exchange::IWebPA::IWebPAClient> {
    public:
        ExchangeWebPAWebPAClientProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Configure(PluginHost::IShell* _parameter_81ef0c6f) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_81ef0c6f));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebPA::IWebPAClient>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        uint32_t Launch() override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebPA::IWebPAClient>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeWebPAWebPAClientProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IWebPA, ExchangeWebPAStubMethods> ExchangeWebPAStub;
        typedef ProxyStub::UnknownStubType<Exchange::IWebPA::IWebPAClient, ExchangeWebPAWebPAClientStubMethods> ExchangeWebPAWebPAClientStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IWebPA, ExchangeWebPAProxy, ExchangeWebPAStub>();
                RPC::Administrator::Instance().Announce<Exchange::IWebPA::IWebPAClient, ExchangeWebPAWebPAClientProxy, ExchangeWebPAWebPAClientStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IWebPA>();
                RPC::Administrator::Instance().Recall<Exchange::IWebPA::IWebPAClient>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
