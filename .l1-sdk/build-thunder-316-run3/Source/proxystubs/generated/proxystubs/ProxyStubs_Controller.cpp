//
// generated automatically from "IController.h"
//
// implements COM-RPC proxy stubs for:
//   - class PluginHost::IController
//

#include "Module.h"
#include "IController.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    using namespace PluginHost;

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // PluginHost::IController interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Persist() = 0
    //  (1) virtual uint32_t Delete(const string&) = 0
    //  (2) virtual uint32_t Reboot() = 0
    //  (3) virtual uint32_t Environment(const string&, string&) const = 0
    //  (4) virtual uint32_t Configuration(const string&, string&) const = 0
    //  (5) virtual uint32_t Configuration(const string&, const string&) = 0
    //  (6) virtual uint32_t Clone(const string&, const string&) = 0
    //

    ProxyStub::MethodHandler PluginHostControllerStubMethods[] = {
        // (0) virtual uint32_t Persist() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IController* implementation = reinterpret_cast<PluginHost::IController*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Persist();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (1) virtual uint32_t Delete(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IController* implementation = reinterpret_cast<PluginHost::IController*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _path = reader.Text();

            uint32_t result = implementation->Delete(static_cast<const string&>(_path));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t Reboot() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IController* implementation = reinterpret_cast<PluginHost::IController*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Reboot();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (3) virtual uint32_t Environment(const string&, string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IController* implementation = reinterpret_cast<const PluginHost::IController*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _index = reader.Text();

            string _environment{};

            uint32_t result = implementation->Environment(static_cast<const string&>(_index), _environment);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_environment);
        },

        // (4) virtual uint32_t Configuration(const string&, string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IController* implementation = reinterpret_cast<const PluginHost::IController*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _callsign = reader.Text();

            string _configuration{};

            uint32_t result = implementation->Configuration(static_cast<const string&>(_callsign), _configuration);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_configuration);
        },

        // (5) virtual uint32_t Configuration(const string&, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IController* implementation = reinterpret_cast<PluginHost::IController*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _callsign = reader.Text();
            const string _configuration = reader.Text();

            uint32_t result = implementation->Configuration(static_cast<const string&>(_callsign), static_cast<const string&>(_configuration));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (6) virtual uint32_t Clone(const string&, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IController* implementation = reinterpret_cast<PluginHost::IController*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _basecallsign = reader.Text();
            const string _newcallsign = reader.Text();

            uint32_t result = implementation->Clone(static_cast<const string&>(_basecallsign), static_cast<const string&>(_newcallsign));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // PluginHostControllerStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // PluginHost::IController interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Persist() = 0
    //  (1) virtual uint32_t Delete(const string&) = 0
    //  (2) virtual uint32_t Reboot() = 0
    //  (3) virtual uint32_t Environment(const string&, string&) const = 0
    //  (4) virtual uint32_t Configuration(const string&, string&) const = 0
    //  (5) virtual uint32_t Configuration(const string&, const string&) = 0
    //  (6) virtual uint32_t Clone(const string&, const string&) = 0
    //

    class PluginHostControllerProxy final : public ProxyStub::UnknownProxyType<PluginHost::IController> {
    public:
        PluginHostControllerProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Persist() override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IController>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Delete(const string& _path) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_path));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IController>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Reboot() override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IController>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Environment(const string& _index, string& _environment) const override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_index));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IController>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _environment = reader.Text();
            }

            return (result);
        }

        uint32_t Configuration(const string& _callsign, string& _configuration) const override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_callsign));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IController>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _configuration = reader.Text();
            }

            return (result);
        }

        uint32_t Configuration(const string& _callsign, const string& _configuration) override
        {
            IPCMessage message(BaseClass::Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_callsign));
            writer.Text(static_cast<const string&>(_configuration));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IController>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Clone(const string& _basecallsign, const string& _newcallsign) override
        {
            IPCMessage message(BaseClass::Message(6));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_basecallsign));
            writer.Text(static_cast<const string&>(_newcallsign));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IController>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class PluginHostControllerProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<PluginHost::IController, PluginHostControllerStubMethods> PluginHostControllerStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<PluginHost::IController, PluginHostControllerProxy, PluginHostControllerStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<PluginHost::IController>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
