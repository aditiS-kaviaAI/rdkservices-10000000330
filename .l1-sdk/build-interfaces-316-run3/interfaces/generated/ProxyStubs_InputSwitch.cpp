//
// generated automatically from "IInputSwitch.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IInputSwitch
//

#include "Module.h"
#include "IInputSwitch.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IInputSwitch interface stub definitions
    //
    // Methods:
    //  (0) virtual RPC::IStringIterator* Consumers() const = 0
    //  (1) virtual bool Consumer(const string&) const = 0
    //  (2) virtual uint32_t Consumer(const string&, const Exchange::IInputSwitch::mode) = 0
    //  (3) virtual uint32_t Select(const string&) = 0
    //

    ProxyStub::MethodHandler ExchangeInputSwitchStubMethods[] = {
        // (0) virtual RPC::IStringIterator* Consumers() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IInputSwitch* implementation = reinterpret_cast<const Exchange::IInputSwitch*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::IStringIterator* result = implementation->Consumers();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(result));

            RPC::Administrator::Instance().RegisterInterface(channel, result);
        },

        // (1) virtual bool Consumer(const string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IInputSwitch* implementation = reinterpret_cast<const Exchange::IInputSwitch*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _name = reader.Text();

            bool result = implementation->Consumer(static_cast<const string&>(_name));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (2) virtual uint32_t Consumer(const string&, const Exchange::IInputSwitch::mode) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IInputSwitch* implementation = reinterpret_cast<Exchange::IInputSwitch*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _name = reader.Text();
            const Exchange::IInputSwitch::mode _value = reader.Number<Exchange::IInputSwitch::mode>();

            uint32_t result = implementation->Consumer(static_cast<const string&>(_name), _value);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (3) virtual uint32_t Select(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IInputSwitch* implementation = reinterpret_cast<Exchange::IInputSwitch*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _name = reader.Text();

            uint32_t result = implementation->Select(static_cast<const string&>(_name));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeInputSwitchStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IInputSwitch interface proxy definitions
    //
    // Methods:
    //  (0) virtual RPC::IStringIterator* Consumers() const = 0
    //  (1) virtual bool Consumer(const string&) const = 0
    //  (2) virtual uint32_t Consumer(const string&, const Exchange::IInputSwitch::mode) = 0
    //  (3) virtual uint32_t Select(const string&) = 0
    //

    class ExchangeInputSwitchProxy final : public ProxyStub::UnknownProxyType<Exchange::IInputSwitch> {
    public:
        ExchangeInputSwitchProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        RPC::IStringIterator* Consumers() const override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::IStringIterator* result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IInputSwitch>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reinterpret_cast<RPC::IStringIterator*>(Interface(reader.Number<Core::instance_id>(), RPC::IStringIterator::ID));
            }

            return (result);
        }

        bool Consumer(const string& _name) const override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_name));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IInputSwitch>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        uint32_t Consumer(const string& _name, const Exchange::IInputSwitch::mode _value) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_name));
            writer.Number<Exchange::IInputSwitch::mode>(_value);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IInputSwitch>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Select(const string& _name) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_name));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IInputSwitch>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeInputSwitchProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IInputSwitch, ExchangeInputSwitchStubMethods> ExchangeInputSwitchStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IInputSwitch, ExchangeInputSwitchProxy, ExchangeInputSwitchStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IInputSwitch>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
