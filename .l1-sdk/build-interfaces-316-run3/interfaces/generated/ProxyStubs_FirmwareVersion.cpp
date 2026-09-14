//
// generated automatically from "IFirmwareVersion.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IFirmwareVersion
//

#include "Module.h"
#include "IFirmwareVersion.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IFirmwareVersion interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Imagename(string&) const = 0
    //  (1) virtual uint32_t Sdk(string&) const = 0
    //  (2) virtual uint32_t Mediarite(string&) const = 0
    //  (3) virtual uint32_t Yocto(string&) const = 0
    //  (4) virtual uint32_t Pdri(string&) const = 0
    //

    ProxyStub::MethodHandler ExchangeFirmwareVersionStubMethods[] = {
        // (0) virtual uint32_t Imagename(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IFirmwareVersion* implementation = reinterpret_cast<const Exchange::IFirmwareVersion*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _imagename{};

            uint32_t result = implementation->Imagename(_imagename);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_imagename);
        },

        // (1) virtual uint32_t Sdk(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IFirmwareVersion* implementation = reinterpret_cast<const Exchange::IFirmwareVersion*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _sdk{};

            uint32_t result = implementation->Sdk(_sdk);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_sdk);
        },

        // (2) virtual uint32_t Mediarite(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IFirmwareVersion* implementation = reinterpret_cast<const Exchange::IFirmwareVersion*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _mediarite{};

            uint32_t result = implementation->Mediarite(_mediarite);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_mediarite);
        },

        // (3) virtual uint32_t Yocto(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IFirmwareVersion* implementation = reinterpret_cast<const Exchange::IFirmwareVersion*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _yocto{};

            uint32_t result = implementation->Yocto(_yocto);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_yocto);
        },

        // (4) virtual uint32_t Pdri(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IFirmwareVersion* implementation = reinterpret_cast<const Exchange::IFirmwareVersion*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _pdri{};

            uint32_t result = implementation->Pdri(_pdri);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_pdri);
        }
    }; // ExchangeFirmwareVersionStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IFirmwareVersion interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Imagename(string&) const = 0
    //  (1) virtual uint32_t Sdk(string&) const = 0
    //  (2) virtual uint32_t Mediarite(string&) const = 0
    //  (3) virtual uint32_t Yocto(string&) const = 0
    //  (4) virtual uint32_t Pdri(string&) const = 0
    //

    class ExchangeFirmwareVersionProxy final : public ProxyStub::UnknownProxyType<Exchange::IFirmwareVersion> {
    public:
        ExchangeFirmwareVersionProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Imagename(string& _imagename) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IFirmwareVersion>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _imagename = reader.Text();
            }

            return (result);
        }

        uint32_t Sdk(string& _sdk) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IFirmwareVersion>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _sdk = reader.Text();
            }

            return (result);
        }

        uint32_t Mediarite(string& _mediarite) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IFirmwareVersion>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _mediarite = reader.Text();
            }

            return (result);
        }

        uint32_t Yocto(string& _yocto) const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IFirmwareVersion>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _yocto = reader.Text();
            }

            return (result);
        }

        uint32_t Pdri(string& _pdri) const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IFirmwareVersion>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _pdri = reader.Text();
            }

            return (result);
        }

    }; // class ExchangeFirmwareVersionProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IFirmwareVersion, ExchangeFirmwareVersionStubMethods> ExchangeFirmwareVersionStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IFirmwareVersion, ExchangeFirmwareVersionProxy, ExchangeFirmwareVersionStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IFirmwareVersion>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
