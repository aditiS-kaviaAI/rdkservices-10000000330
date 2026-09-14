//
// generated automatically from "IDeviceInfo.h"
//
// implements COM-RPC proxy stubs for:
//   - /* instantiated */ template class RPC::IIteratorType<typename ELEMENT, const uint32_t> [with ELEMENT = AudioOutput, INTERFACE_ID = ID_DEVICE_CAPABILITIES_AUDIO]
//   - /* instantiated */ template class RPC::IIteratorType<typename ELEMENT, const uint32_t> [with ELEMENT = VideoOutput, INTERFACE_ID = ID_DEVICE_CAPABILITIES_VIDEO]
//   - /* instantiated */ template class RPC::IIteratorType<typename ELEMENT, const uint32_t> [with ELEMENT = OutputResolution, INTERFACE_ID = ID_DEVICE_CAPABILITIES_RESOLUTION]
//   - class Exchange::IDeviceCapabilities
//

#include "Module.h"
#include "IDeviceInfo.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // RPC::IIteratorTypeInstance0B18957A interface stub definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::IDeviceCapabilities::AudioOutput&) = 0
    //  (1) virtual bool Previous(Exchange::IDeviceCapabilities::AudioOutput&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::IDeviceCapabilities::AudioOutput Current() const = 0
    //

    ProxyStub::MethodHandler RPCIteratorTypeInstance0B18957AStubMethods[] = {
        // (0) virtual bool Next(Exchange::IDeviceCapabilities::AudioOutput&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::AudioOutput _info{};

            bool result = implementation->Next(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::IDeviceCapabilities::AudioOutput>(_info);
        },

        // (1) virtual bool Previous(Exchange::IDeviceCapabilities::AudioOutput&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::AudioOutput _info{};

            bool result = implementation->Previous(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::IDeviceCapabilities::AudioOutput>(_info);
        },

        // (2) virtual void Reset(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _position = reader.Number<uint32_t>();

            implementation->Reset(_position);
        },

        // (3) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (4) virtual uint32_t Count() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Count();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual Exchange::IDeviceCapabilities::AudioOutput Current() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::AudioOutput result = implementation->Current();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Exchange::IDeviceCapabilities::AudioOutput>(result);
        }
    }; // RPCIteratorTypeInstance0B18957AStubMethods

    //
    // RPC::IIteratorTypeInstance002F1EBF interface stub definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::IDeviceCapabilities::VideoOutput&) = 0
    //  (1) virtual bool Previous(Exchange::IDeviceCapabilities::VideoOutput&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::IDeviceCapabilities::VideoOutput Current() const = 0
    //

    ProxyStub::MethodHandler RPCIteratorTypeInstance002F1EBFStubMethods[] = {
        // (0) virtual bool Next(Exchange::IDeviceCapabilities::VideoOutput&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::VideoOutput _info{};

            bool result = implementation->Next(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::IDeviceCapabilities::VideoOutput>(_info);
        },

        // (1) virtual bool Previous(Exchange::IDeviceCapabilities::VideoOutput&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::VideoOutput _info{};

            bool result = implementation->Previous(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::IDeviceCapabilities::VideoOutput>(_info);
        },

        // (2) virtual void Reset(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _position = reader.Number<uint32_t>();

            implementation->Reset(_position);
        },

        // (3) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (4) virtual uint32_t Count() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Count();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual Exchange::IDeviceCapabilities::VideoOutput Current() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::VideoOutput result = implementation->Current();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Exchange::IDeviceCapabilities::VideoOutput>(result);
        }
    }; // RPCIteratorTypeInstance002F1EBFStubMethods

    //
    // RPC::IIteratorTypeInstance9EFD10A1 interface stub definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::IDeviceCapabilities::OutputResolution&) = 0
    //  (1) virtual bool Previous(Exchange::IDeviceCapabilities::OutputResolution&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::IDeviceCapabilities::OutputResolution Current() const = 0
    //

    ProxyStub::MethodHandler RPCIteratorTypeInstance9EFD10A1StubMethods[] = {
        // (0) virtual bool Next(Exchange::IDeviceCapabilities::OutputResolution&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::OutputResolution _info{};

            bool result = implementation->Next(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::IDeviceCapabilities::OutputResolution>(_info);
        },

        // (1) virtual bool Previous(Exchange::IDeviceCapabilities::OutputResolution&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::OutputResolution _info{};

            bool result = implementation->Previous(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::IDeviceCapabilities::OutputResolution>(_info);
        },

        // (2) virtual void Reset(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _position = reader.Number<uint32_t>();

            implementation->Reset(_position);
        },

        // (3) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (4) virtual uint32_t Count() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Count();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual Exchange::IDeviceCapabilities::OutputResolution Current() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::OutputResolution result = implementation->Current();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Exchange::IDeviceCapabilities::OutputResolution>(result);
        }
    }; // RPCIteratorTypeInstance9EFD10A1StubMethods

    //
    // Exchange::IDeviceCapabilities interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Configure(const PluginHost::IShell*) = 0
    //  (1) virtual uint32_t AudioOutputs(Exchange::IDeviceCapabilities::IAudioOutputIterator*&) const = 0
    //  (2) virtual uint32_t VideoOutputs(Exchange::IDeviceCapabilities::IVideoOutputIterator*&) const = 0
    //  (3) virtual uint32_t Resolutions(Exchange::IDeviceCapabilities::IOutputResolutionIterator*&) const = 0
    //  (4) virtual uint32_t HDR(bool&) const = 0
    //  (5) virtual uint32_t Atmos(bool&) const = 0
    //  (6) virtual uint32_t CEC(bool&) const = 0
    //  (7) virtual uint32_t HDCP(Exchange::IDeviceCapabilities::CopyProtection&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDeviceCapabilitiesStubMethods[] = {
        // (0) virtual uint32_t Configure(const PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDeviceCapabilities* implementation = reinterpret_cast<Exchange::IDeviceCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id serviceImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _service = nullptr;
            ProxyStub::UnknownProxy* serviceProxy = nullptr;
            if (serviceImplementation != 0) {
                serviceProxy = RPC::Administrator::Instance().ProxyInstance(channel, serviceImplementation, false, _service);
                ASSERT((_service != nullptr) && (serviceProxy != nullptr));
            }

            uint32_t result = implementation->Configure(_service);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (serviceProxy != nullptr) {
                RPC::Administrator::Instance().Release(serviceProxy, message->Response());
            }
        },

        // (1) virtual uint32_t AudioOutputs(Exchange::IDeviceCapabilities::IAudioOutputIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::IAudioOutputIterator* _res{};

            uint32_t result = implementation->AudioOutputs(_res);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_res));

            RPC::Administrator::Instance().RegisterInterface(channel, _res);
        },

        // (2) virtual uint32_t VideoOutputs(Exchange::IDeviceCapabilities::IVideoOutputIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::IVideoOutputIterator* _res{};

            uint32_t result = implementation->VideoOutputs(_res);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_res));

            RPC::Administrator::Instance().RegisterInterface(channel, _res);
        },

        // (3) virtual uint32_t Resolutions(Exchange::IDeviceCapabilities::IOutputResolutionIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::IOutputResolutionIterator* _res{};

            uint32_t result = implementation->Resolutions(_res);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_res));

            RPC::Administrator::Instance().RegisterInterface(channel, _res);
        },

        // (4) virtual uint32_t HDR(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _supportsHDR{};

            uint32_t result = implementation->HDR(_supportsHDR);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_supportsHDR);
        },

        // (5) virtual uint32_t Atmos(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _supportsAtmos{};

            uint32_t result = implementation->Atmos(_supportsAtmos);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_supportsAtmos);
        },

        // (6) virtual uint32_t CEC(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _supportsCEC{};

            uint32_t result = implementation->CEC(_supportsCEC);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_supportsCEC);
        },

        // (7) virtual uint32_t HDCP(Exchange::IDeviceCapabilities::CopyProtection&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceCapabilities::CopyProtection _supportedHDCP{};

            uint32_t result = implementation->HDCP(_supportedHDCP);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDeviceCapabilities::CopyProtection>(_supportedHDCP);
        }
    }; // ExchangeDeviceCapabilitiesStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // RPC::IIteratorTypeInstance0B18957A interface proxy definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::IDeviceCapabilities::AudioOutput&) = 0
    //  (1) virtual bool Previous(Exchange::IDeviceCapabilities::AudioOutput&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::IDeviceCapabilities::AudioOutput Current() const = 0
    //

    class RPCIteratorTypeInstance0B18957AProxy final : public ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>> {
    public:
        RPCIteratorTypeInstance0B18957AProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        bool Next(Exchange::IDeviceCapabilities::AudioOutput& _info) override
        {
            IPCMessage message(BaseClass::Message(0));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Number<Exchange::IDeviceCapabilities::AudioOutput>();
            }

            return (result);
        }

        bool Previous(Exchange::IDeviceCapabilities::AudioOutput& _info) override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Number<Exchange::IDeviceCapabilities::AudioOutput>();
            }

            return (result);
        }

        void Reset(const uint32_t _position) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_position);

            ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>>::Invoke(message);
        }

        bool IsValid() const override
        {
            IPCMessage message(BaseClass::Message(3));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        uint32_t Count() const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        Exchange::IDeviceCapabilities::AudioOutput Current() const override
        {
            IPCMessage message(BaseClass::Message(5));

            Exchange::IDeviceCapabilities::AudioOutput result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<Exchange::IDeviceCapabilities::AudioOutput>();
            }

            return (result);
        }

    }; // class RPCIteratorTypeInstance0B18957AProxy

    //
    // RPC::IIteratorTypeInstance002F1EBF interface proxy definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::IDeviceCapabilities::VideoOutput&) = 0
    //  (1) virtual bool Previous(Exchange::IDeviceCapabilities::VideoOutput&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::IDeviceCapabilities::VideoOutput Current() const = 0
    //

    class RPCIteratorTypeInstance002F1EBFProxy final : public ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>> {
    public:
        RPCIteratorTypeInstance002F1EBFProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        bool Next(Exchange::IDeviceCapabilities::VideoOutput& _info) override
        {
            IPCMessage message(BaseClass::Message(0));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Number<Exchange::IDeviceCapabilities::VideoOutput>();
            }

            return (result);
        }

        bool Previous(Exchange::IDeviceCapabilities::VideoOutput& _info) override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Number<Exchange::IDeviceCapabilities::VideoOutput>();
            }

            return (result);
        }

        void Reset(const uint32_t _position) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_position);

            ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>>::Invoke(message);
        }

        bool IsValid() const override
        {
            IPCMessage message(BaseClass::Message(3));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        uint32_t Count() const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        Exchange::IDeviceCapabilities::VideoOutput Current() const override
        {
            IPCMessage message(BaseClass::Message(5));

            Exchange::IDeviceCapabilities::VideoOutput result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<Exchange::IDeviceCapabilities::VideoOutput>();
            }

            return (result);
        }

    }; // class RPCIteratorTypeInstance002F1EBFProxy

    //
    // RPC::IIteratorTypeInstance9EFD10A1 interface proxy definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::IDeviceCapabilities::OutputResolution&) = 0
    //  (1) virtual bool Previous(Exchange::IDeviceCapabilities::OutputResolution&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::IDeviceCapabilities::OutputResolution Current() const = 0
    //

    class RPCIteratorTypeInstance9EFD10A1Proxy final : public ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>> {
    public:
        RPCIteratorTypeInstance9EFD10A1Proxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        bool Next(Exchange::IDeviceCapabilities::OutputResolution& _info) override
        {
            IPCMessage message(BaseClass::Message(0));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Number<Exchange::IDeviceCapabilities::OutputResolution>();
            }

            return (result);
        }

        bool Previous(Exchange::IDeviceCapabilities::OutputResolution& _info) override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Number<Exchange::IDeviceCapabilities::OutputResolution>();
            }

            return (result);
        }

        void Reset(const uint32_t _position) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_position);

            ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>>::Invoke(message);
        }

        bool IsValid() const override
        {
            IPCMessage message(BaseClass::Message(3));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        uint32_t Count() const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        Exchange::IDeviceCapabilities::OutputResolution Current() const override
        {
            IPCMessage message(BaseClass::Message(5));

            Exchange::IDeviceCapabilities::OutputResolution result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<Exchange::IDeviceCapabilities::OutputResolution>();
            }

            return (result);
        }

    }; // class RPCIteratorTypeInstance9EFD10A1Proxy

    //
    // Exchange::IDeviceCapabilities interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Configure(const PluginHost::IShell*) = 0
    //  (1) virtual uint32_t AudioOutputs(Exchange::IDeviceCapabilities::IAudioOutputIterator*&) const = 0
    //  (2) virtual uint32_t VideoOutputs(Exchange::IDeviceCapabilities::IVideoOutputIterator*&) const = 0
    //  (3) virtual uint32_t Resolutions(Exchange::IDeviceCapabilities::IOutputResolutionIterator*&) const = 0
    //  (4) virtual uint32_t HDR(bool&) const = 0
    //  (5) virtual uint32_t Atmos(bool&) const = 0
    //  (6) virtual uint32_t CEC(bool&) const = 0
    //  (7) virtual uint32_t HDCP(Exchange::IDeviceCapabilities::CopyProtection&) const = 0
    //

    class ExchangeDeviceCapabilitiesProxy final : public ProxyStub::UnknownProxyType<Exchange::IDeviceCapabilities> {
    public:
        ExchangeDeviceCapabilitiesProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Configure(const PluginHost::IShell* _service) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_service));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        uint32_t AudioOutputs(Exchange::IDeviceCapabilities::IAudioOutputIterator*& _res) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _res = reinterpret_cast<Exchange::IDeviceCapabilities::IAudioOutputIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDeviceCapabilities::IAudioOutputIterator::ID));
            }

            return (result);
        }

        uint32_t VideoOutputs(Exchange::IDeviceCapabilities::IVideoOutputIterator*& _res) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _res = reinterpret_cast<Exchange::IDeviceCapabilities::IVideoOutputIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDeviceCapabilities::IVideoOutputIterator::ID));
            }

            return (result);
        }

        uint32_t Resolutions(Exchange::IDeviceCapabilities::IOutputResolutionIterator*& _res) const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _res = reinterpret_cast<Exchange::IDeviceCapabilities::IOutputResolutionIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDeviceCapabilities::IOutputResolutionIterator::ID));
            }

            return (result);
        }

        uint32_t HDR(bool& _supportsHDR) const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _supportsHDR = reader.Boolean();
            }

            return (result);
        }

        uint32_t Atmos(bool& _supportsAtmos) const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _supportsAtmos = reader.Boolean();
            }

            return (result);
        }

        uint32_t CEC(bool& _supportsCEC) const override
        {
            IPCMessage message(BaseClass::Message(6));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _supportsCEC = reader.Boolean();
            }

            return (result);
        }

        uint32_t HDCP(Exchange::IDeviceCapabilities::CopyProtection& _supportedHDCP) const override
        {
            IPCMessage message(BaseClass::Message(7));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _supportedHDCP = reader.Number<Exchange::IDeviceCapabilities::CopyProtection>();
            }

            return (result);
        }

    }; // class ExchangeDeviceCapabilitiesProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>, RPCIteratorTypeInstance0B18957AStubMethods> RPCIteratorTypeInstance0B18957AStub;
        typedef ProxyStub::UnknownStubType<RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>, RPCIteratorTypeInstance002F1EBFStubMethods> RPCIteratorTypeInstance002F1EBFStub;
        typedef ProxyStub::UnknownStubType<RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>, RPCIteratorTypeInstance9EFD10A1StubMethods> RPCIteratorTypeInstance9EFD10A1Stub;
        typedef ProxyStub::UnknownStubType<Exchange::IDeviceCapabilities, ExchangeDeviceCapabilitiesStubMethods> ExchangeDeviceCapabilitiesStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>, RPCIteratorTypeInstance0B18957AProxy, RPCIteratorTypeInstance0B18957AStub>();
                RPC::Administrator::Instance().Announce<RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>, RPCIteratorTypeInstance002F1EBFProxy, RPCIteratorTypeInstance002F1EBFStub>();
                RPC::Administrator::Instance().Announce<RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>, RPCIteratorTypeInstance9EFD10A1Proxy, RPCIteratorTypeInstance9EFD10A1Stub>();
                RPC::Administrator::Instance().Announce<Exchange::IDeviceCapabilities, ExchangeDeviceCapabilitiesProxy, ExchangeDeviceCapabilitiesStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<RPC::IIteratorType<Exchange::IDeviceCapabilities::AudioOutput, Exchange::ID_DEVICE_CAPABILITIES_AUDIO>>();
                RPC::Administrator::Instance().Recall<RPC::IIteratorType<Exchange::IDeviceCapabilities::VideoOutput, Exchange::ID_DEVICE_CAPABILITIES_VIDEO>>();
                RPC::Administrator::Instance().Recall<RPC::IIteratorType<Exchange::IDeviceCapabilities::OutputResolution, Exchange::ID_DEVICE_CAPABILITIES_RESOLUTION>>();
                RPC::Administrator::Instance().Recall<Exchange::IDeviceCapabilities>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
