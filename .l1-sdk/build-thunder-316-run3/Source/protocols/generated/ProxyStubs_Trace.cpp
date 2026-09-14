//
// generated automatically from "ITrace.h"
//
// implements COM-RPC proxy stubs for:
//   - class Trace::ITraceIterator
//   - class Trace::ITraceController
//

#include "Module.h"
#include "ITrace.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    using namespace Trace;

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Trace::ITraceIterator interface stub definitions
    //
    // Methods:
    //  (0) virtual void Reset() = 0
    //  (1) virtual bool Info(bool&, string&, string&) const = 0
    //

    ProxyStub::MethodHandler TraceTraceIteratorStubMethods[] = {
        // (0) virtual void Reset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Trace::ITraceIterator* implementation = reinterpret_cast<Trace::ITraceIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->Reset();
        },

        // (1) virtual bool Info(bool&, string&, string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Trace::ITraceIterator* implementation = reinterpret_cast<const Trace::ITraceIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _enabled{};
            string _module{};
            string _category{};

            bool result = implementation->Info(_enabled, _module, _category);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Boolean(_enabled);
            writer.Text(_module);
            writer.Text(_category);
        }
    }; // TraceTraceIteratorStubMethods

    //
    // Trace::ITraceController interface stub definitions
    //
    // Methods:
    //  (0) virtual void Enable(const bool, const string&, const string&) = 0
    //

    ProxyStub::MethodHandler TraceTraceControllerStubMethods[] = {
        // (0) virtual void Enable(const bool, const string&, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Trace::ITraceController* implementation = reinterpret_cast<Trace::ITraceController*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const bool _enabled = reader.Boolean();
            const string _module = reader.Text();
            const string _category = reader.Text();

            implementation->Enable(_enabled, static_cast<const string&>(_module), static_cast<const string&>(_category));
        }
    }; // TraceTraceControllerStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Trace::ITraceIterator interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Reset() = 0
    //  (1) virtual bool Info(bool&, string&, string&) const = 0
    //

    class TraceTraceIteratorProxy final : public ProxyStub::UnknownProxyType<Trace::ITraceIterator> {
    public:
        TraceTraceIteratorProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Reset() override
        {
            IPCMessage message(BaseClass::Message(0));

            ProxyStub::UnknownProxyType<Trace::ITraceIterator>::Invoke(message);
        }

        bool Info(bool& _enabled, string& _module, string& _category) const override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Trace::ITraceIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _enabled = reader.Boolean();
                _module = reader.Text();
                _category = reader.Text();
            }

            return (result);
        }

    }; // class TraceTraceIteratorProxy

    //
    // Trace::ITraceController interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Enable(const bool, const string&, const string&) = 0
    //

    class TraceTraceControllerProxy final : public ProxyStub::UnknownProxyType<Trace::ITraceController> {
    public:
        TraceTraceControllerProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Enable(const bool _enabled, const string& _module, const string& _category) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Boolean(_enabled);
            writer.Text(static_cast<const string&>(_module));
            writer.Text(static_cast<const string&>(_category));

            ProxyStub::UnknownProxyType<Trace::ITraceController>::Invoke(message);
        }

    }; // class TraceTraceControllerProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Trace::ITraceIterator, TraceTraceIteratorStubMethods> TraceTraceIteratorStub;
        typedef ProxyStub::UnknownStubType<Trace::ITraceController, TraceTraceControllerStubMethods> TraceTraceControllerStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Trace::ITraceIterator, TraceTraceIteratorProxy, TraceTraceIteratorStub>();
                RPC::Administrator::Instance().Announce<Trace::ITraceController, TraceTraceControllerProxy, TraceTraceControllerStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Trace::ITraceIterator>();
                RPC::Administrator::Instance().Recall<Trace::ITraceController>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
