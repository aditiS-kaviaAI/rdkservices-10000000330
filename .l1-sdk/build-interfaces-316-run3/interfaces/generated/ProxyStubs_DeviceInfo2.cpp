//
// generated automatically from "IDeviceInfo2.h"
//
// implements COM-RPC proxy stubs for:
//   - /* instantiated */ template class RPC::IIteratorType<typename ELEMENT, const uint32_t> [with ELEMENT = AudioCapability, INTERFACE_ID = ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY]
//   - /* instantiated */ template class RPC::IIteratorType<typename ELEMENT, const uint32_t> [with ELEMENT = MS12Capability, INTERFACE_ID = ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY]
//   - class Exchange::IDeviceInfo
//   - class Exchange::IDeviceAudioCapabilities
//   - class Exchange::IDeviceVideoCapabilities
//

#include "Module.h"
#include "IDeviceInfo2.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // RPC::IIteratorTypeInstance35E23A29 interface stub definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::IDeviceAudioCapabilities::AudioCapability&) = 0
    //  (1) virtual bool Previous(Exchange::IDeviceAudioCapabilities::AudioCapability&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::IDeviceAudioCapabilities::AudioCapability Current() const = 0
    //

    ProxyStub::MethodHandler RPCIteratorTypeInstance35E23A29StubMethods[] = {
        // (0) virtual bool Next(Exchange::IDeviceAudioCapabilities::AudioCapability&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceAudioCapabilities::AudioCapability _info{};

            bool result = implementation->Next(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::IDeviceAudioCapabilities::AudioCapability>(_info);
        },

        // (1) virtual bool Previous(Exchange::IDeviceAudioCapabilities::AudioCapability&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceAudioCapabilities::AudioCapability _info{};

            bool result = implementation->Previous(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::IDeviceAudioCapabilities::AudioCapability>(_info);
        },

        // (2) virtual void Reset(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _position = reader.Number<uint32_t>();

            implementation->Reset(_position);
        },

        // (3) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (4) virtual uint32_t Count() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Count();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual Exchange::IDeviceAudioCapabilities::AudioCapability Current() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceAudioCapabilities::AudioCapability result = implementation->Current();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Exchange::IDeviceAudioCapabilities::AudioCapability>(result);
        }
    }; // RPCIteratorTypeInstance35E23A29StubMethods

    //
    // RPC::IIteratorTypeInstance9D76F5E7 interface stub definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::IDeviceAudioCapabilities::MS12Capability&) = 0
    //  (1) virtual bool Previous(Exchange::IDeviceAudioCapabilities::MS12Capability&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::IDeviceAudioCapabilities::MS12Capability Current() const = 0
    //

    ProxyStub::MethodHandler RPCIteratorTypeInstance9D76F5E7StubMethods[] = {
        // (0) virtual bool Next(Exchange::IDeviceAudioCapabilities::MS12Capability&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceAudioCapabilities::MS12Capability _info{};

            bool result = implementation->Next(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::IDeviceAudioCapabilities::MS12Capability>(_info);
        },

        // (1) virtual bool Previous(Exchange::IDeviceAudioCapabilities::MS12Capability&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceAudioCapabilities::MS12Capability _info{};

            bool result = implementation->Previous(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::IDeviceAudioCapabilities::MS12Capability>(_info);
        },

        // (2) virtual void Reset(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _position = reader.Number<uint32_t>();

            implementation->Reset(_position);
        },

        // (3) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (4) virtual uint32_t Count() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Count();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual Exchange::IDeviceAudioCapabilities::MS12Capability Current() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDeviceAudioCapabilities::MS12Capability result = implementation->Current();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Exchange::IDeviceAudioCapabilities::MS12Capability>(result);
        }
    }; // RPCIteratorTypeInstance9D76F5E7StubMethods

    //
    // Exchange::IDeviceInfo interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t SerialNumber(string&) const = 0
    //  (1) virtual uint32_t Sku(string&) const = 0
    //  (2) virtual uint32_t Make(string&) const = 0
    //  (3) virtual uint32_t Model(string&) const = 0
    //  (4) virtual uint32_t DeviceType(string&) const = 0
    //  (5) virtual uint32_t DistributorId(string&) const = 0
    //  (6) virtual uint32_t Brand(string&) const = 0
    //  (7) virtual Core::hresult ReleaseVersion(string&) const = 0
    //  (8) virtual Core::hresult ChipSet(string&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDeviceInfoStubMethods[] = {
        // (0) virtual uint32_t SerialNumber(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceInfo* implementation = reinterpret_cast<const Exchange::IDeviceInfo*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _serialNumber{};

            uint32_t result = implementation->SerialNumber(_serialNumber);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_serialNumber);
        },

        // (1) virtual uint32_t Sku(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceInfo* implementation = reinterpret_cast<const Exchange::IDeviceInfo*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _sku{};

            uint32_t result = implementation->Sku(_sku);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_sku);
        },

        // (2) virtual uint32_t Make(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceInfo* implementation = reinterpret_cast<const Exchange::IDeviceInfo*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _make{};

            uint32_t result = implementation->Make(_make);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_make);
        },

        // (3) virtual uint32_t Model(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceInfo* implementation = reinterpret_cast<const Exchange::IDeviceInfo*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _model{};

            uint32_t result = implementation->Model(_model);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_model);
        },

        // (4) virtual uint32_t DeviceType(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceInfo* implementation = reinterpret_cast<const Exchange::IDeviceInfo*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _deviceType{};

            uint32_t result = implementation->DeviceType(_deviceType);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_deviceType);
        },

        // (5) virtual uint32_t DistributorId(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceInfo* implementation = reinterpret_cast<const Exchange::IDeviceInfo*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _distributorId{};

            uint32_t result = implementation->DistributorId(_distributorId);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_distributorId);
        },

        // (6) virtual uint32_t Brand(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceInfo* implementation = reinterpret_cast<const Exchange::IDeviceInfo*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _brand{};

            uint32_t result = implementation->Brand(_brand);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_brand);
        },

        // (7) virtual Core::hresult ReleaseVersion(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceInfo* implementation = reinterpret_cast<const Exchange::IDeviceInfo*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _releaseVersion{};

            Core::hresult result = implementation->ReleaseVersion(_releaseVersion);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::hresult>(result);
            writer.Text(_releaseVersion);
        },

        // (8) virtual Core::hresult ChipSet(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceInfo* implementation = reinterpret_cast<const Exchange::IDeviceInfo*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _chipSet{};

            Core::hresult result = implementation->ChipSet(_chipSet);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::hresult>(result);
            writer.Text(_chipSet);
        }
    }; // ExchangeDeviceInfoStubMethods

    //
    // Exchange::IDeviceAudioCapabilities interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t SupportedAudioPorts(RPC::IStringIterator*&) const = 0
    //  (1) virtual uint32_t AudioCapabilities(const string&, Exchange::IDeviceAudioCapabilities::IAudioCapabilityIterator*&) const = 0
    //  (2) virtual uint32_t MS12Capabilities(const string&, Exchange::IDeviceAudioCapabilities::IMS12CapabilityIterator*&) const = 0
    //  (3) virtual uint32_t SupportedMS12AudioProfiles(const string&, RPC::IStringIterator*&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDeviceAudioCapabilitiesStubMethods[] = {
        // (0) virtual uint32_t SupportedAudioPorts(RPC::IStringIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceAudioCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceAudioCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::IStringIterator* _supportedAudioPorts{};

            uint32_t result = implementation->SupportedAudioPorts(_supportedAudioPorts);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_supportedAudioPorts));

            RPC::Administrator::Instance().RegisterInterface(channel, _supportedAudioPorts);
        },

        // (1) virtual uint32_t AudioCapabilities(const string&, Exchange::IDeviceAudioCapabilities::IAudioCapabilityIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceAudioCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceAudioCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _audioPort = reader.Text();

            Exchange::IDeviceAudioCapabilities::IAudioCapabilityIterator* _audioCapabilities{};

            uint32_t result = implementation->AudioCapabilities(static_cast<const string&>(_audioPort), _audioCapabilities);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_audioCapabilities));

            RPC::Administrator::Instance().RegisterInterface(channel, _audioCapabilities);
        },

        // (2) virtual uint32_t MS12Capabilities(const string&, Exchange::IDeviceAudioCapabilities::IMS12CapabilityIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceAudioCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceAudioCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _audioPort = reader.Text();

            Exchange::IDeviceAudioCapabilities::IMS12CapabilityIterator* _ms12Capabilities{};

            uint32_t result = implementation->MS12Capabilities(static_cast<const string&>(_audioPort), _ms12Capabilities);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_ms12Capabilities));

            RPC::Administrator::Instance().RegisterInterface(channel, _ms12Capabilities);
        },

        // (3) virtual uint32_t SupportedMS12AudioProfiles(const string&, RPC::IStringIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceAudioCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceAudioCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _audioPort = reader.Text();

            RPC::IStringIterator* _supportedMS12AudioProfiles{};

            uint32_t result = implementation->SupportedMS12AudioProfiles(static_cast<const string&>(_audioPort), _supportedMS12AudioProfiles);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_supportedMS12AudioProfiles));

            RPC::Administrator::Instance().RegisterInterface(channel, _supportedMS12AudioProfiles);
        }
    }; // ExchangeDeviceAudioCapabilitiesStubMethods

    //
    // Exchange::IDeviceVideoCapabilities interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t SupportedVideoDisplays(RPC::IStringIterator*&) const = 0
    //  (1) virtual uint32_t HostEDID(string&) const = 0
    //  (2) virtual uint32_t DefaultResolution(const string&, string&) const = 0
    //  (3) virtual uint32_t SupportedResolutions(const string&, RPC::IStringIterator*&) const = 0
    //  (4) virtual uint32_t SupportedHdcp(const string&, Exchange::IDeviceVideoCapabilities::CopyProtection&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDeviceVideoCapabilitiesStubMethods[] = {
        // (0) virtual uint32_t SupportedVideoDisplays(RPC::IStringIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceVideoCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceVideoCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::IStringIterator* _supportedVideoDisplays{};

            uint32_t result = implementation->SupportedVideoDisplays(_supportedVideoDisplays);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_supportedVideoDisplays));

            RPC::Administrator::Instance().RegisterInterface(channel, _supportedVideoDisplays);
        },

        // (1) virtual uint32_t HostEDID(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceVideoCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceVideoCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _edid{};

            uint32_t result = implementation->HostEDID(_edid);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_edid);
        },

        // (2) virtual uint32_t DefaultResolution(const string&, string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceVideoCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceVideoCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _videoDisplay = reader.Text();

            string _defaultResolution{};

            uint32_t result = implementation->DefaultResolution(static_cast<const string&>(_videoDisplay), _defaultResolution);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_defaultResolution);
        },

        // (3) virtual uint32_t SupportedResolutions(const string&, RPC::IStringIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceVideoCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceVideoCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _videoDisplay = reader.Text();

            RPC::IStringIterator* _supportedResolutions{};

            uint32_t result = implementation->SupportedResolutions(static_cast<const string&>(_videoDisplay), _supportedResolutions);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_supportedResolutions));

            RPC::Administrator::Instance().RegisterInterface(channel, _supportedResolutions);
        },

        // (4) virtual uint32_t SupportedHdcp(const string&, Exchange::IDeviceVideoCapabilities::CopyProtection&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDeviceVideoCapabilities* implementation = reinterpret_cast<const Exchange::IDeviceVideoCapabilities*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _videoDisplay = reader.Text();

            Exchange::IDeviceVideoCapabilities::CopyProtection _supportedHDCPVersion{};

            uint32_t result = implementation->SupportedHdcp(static_cast<const string&>(_videoDisplay), _supportedHDCPVersion);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDeviceVideoCapabilities::CopyProtection>(_supportedHDCPVersion);
        }
    }; // ExchangeDeviceVideoCapabilitiesStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // RPC::IIteratorTypeInstance35E23A29 interface proxy definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::IDeviceAudioCapabilities::AudioCapability&) = 0
    //  (1) virtual bool Previous(Exchange::IDeviceAudioCapabilities::AudioCapability&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::IDeviceAudioCapabilities::AudioCapability Current() const = 0
    //

    class RPCIteratorTypeInstance35E23A29Proxy final : public ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>> {
    public:
        RPCIteratorTypeInstance35E23A29Proxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        bool Next(Exchange::IDeviceAudioCapabilities::AudioCapability& _info) override
        {
            IPCMessage message(BaseClass::Message(0));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Number<Exchange::IDeviceAudioCapabilities::AudioCapability>();
            }

            return (result);
        }

        bool Previous(Exchange::IDeviceAudioCapabilities::AudioCapability& _info) override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Number<Exchange::IDeviceAudioCapabilities::AudioCapability>();
            }

            return (result);
        }

        void Reset(const uint32_t _position) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_position);

            ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>>::Invoke(message);
        }

        bool IsValid() const override
        {
            IPCMessage message(BaseClass::Message(3));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>>::Invoke(message);
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

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        Exchange::IDeviceAudioCapabilities::AudioCapability Current() const override
        {
            IPCMessage message(BaseClass::Message(5));

            Exchange::IDeviceAudioCapabilities::AudioCapability result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<Exchange::IDeviceAudioCapabilities::AudioCapability>();
            }

            return (result);
        }

    }; // class RPCIteratorTypeInstance35E23A29Proxy

    //
    // RPC::IIteratorTypeInstance9D76F5E7 interface proxy definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::IDeviceAudioCapabilities::MS12Capability&) = 0
    //  (1) virtual bool Previous(Exchange::IDeviceAudioCapabilities::MS12Capability&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::IDeviceAudioCapabilities::MS12Capability Current() const = 0
    //

    class RPCIteratorTypeInstance9D76F5E7Proxy final : public ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>> {
    public:
        RPCIteratorTypeInstance9D76F5E7Proxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        bool Next(Exchange::IDeviceAudioCapabilities::MS12Capability& _info) override
        {
            IPCMessage message(BaseClass::Message(0));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Number<Exchange::IDeviceAudioCapabilities::MS12Capability>();
            }

            return (result);
        }

        bool Previous(Exchange::IDeviceAudioCapabilities::MS12Capability& _info) override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Number<Exchange::IDeviceAudioCapabilities::MS12Capability>();
            }

            return (result);
        }

        void Reset(const uint32_t _position) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_position);

            ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>>::Invoke(message);
        }

        bool IsValid() const override
        {
            IPCMessage message(BaseClass::Message(3));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>>::Invoke(message);
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

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        Exchange::IDeviceAudioCapabilities::MS12Capability Current() const override
        {
            IPCMessage message(BaseClass::Message(5));

            Exchange::IDeviceAudioCapabilities::MS12Capability result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<Exchange::IDeviceAudioCapabilities::MS12Capability>();
            }

            return (result);
        }

    }; // class RPCIteratorTypeInstance9D76F5E7Proxy

    //
    // Exchange::IDeviceInfo interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t SerialNumber(string&) const = 0
    //  (1) virtual uint32_t Sku(string&) const = 0
    //  (2) virtual uint32_t Make(string&) const = 0
    //  (3) virtual uint32_t Model(string&) const = 0
    //  (4) virtual uint32_t DeviceType(string&) const = 0
    //  (5) virtual uint32_t DistributorId(string&) const = 0
    //  (6) virtual uint32_t Brand(string&) const = 0
    //  (7) virtual Core::hresult ReleaseVersion(string&) const = 0
    //  (8) virtual Core::hresult ChipSet(string&) const = 0
    //

    class ExchangeDeviceInfoProxy final : public ProxyStub::UnknownProxyType<Exchange::IDeviceInfo> {
    public:
        ExchangeDeviceInfoProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t SerialNumber(string& _serialNumber) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceInfo>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _serialNumber = reader.Text();
            }

            return (result);
        }

        uint32_t Sku(string& _sku) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceInfo>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _sku = reader.Text();
            }

            return (result);
        }

        uint32_t Make(string& _make) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceInfo>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _make = reader.Text();
            }

            return (result);
        }

        uint32_t Model(string& _model) const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceInfo>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _model = reader.Text();
            }

            return (result);
        }

        uint32_t DeviceType(string& _deviceType) const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceInfo>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _deviceType = reader.Text();
            }

            return (result);
        }

        uint32_t DistributorId(string& _distributorId) const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceInfo>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _distributorId = reader.Text();
            }

            return (result);
        }

        uint32_t Brand(string& _brand) const override
        {
            IPCMessage message(BaseClass::Message(6));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceInfo>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _brand = reader.Text();
            }

            return (result);
        }

        Core::hresult ReleaseVersion(string& _releaseVersion) const override
        {
            IPCMessage message(BaseClass::Message(7));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceInfo>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<Core::hresult>();
                if ((hresult & 0x80000000) == 0) {
                    _releaseVersion = reader.Text();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        Core::hresult ChipSet(string& _chipSet) const override
        {
            IPCMessage message(BaseClass::Message(8));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceInfo>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<Core::hresult>();
                if ((hresult & 0x80000000) == 0) {
                    _chipSet = reader.Text();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

    }; // class ExchangeDeviceInfoProxy

    //
    // Exchange::IDeviceAudioCapabilities interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t SupportedAudioPorts(RPC::IStringIterator*&) const = 0
    //  (1) virtual uint32_t AudioCapabilities(const string&, Exchange::IDeviceAudioCapabilities::IAudioCapabilityIterator*&) const = 0
    //  (2) virtual uint32_t MS12Capabilities(const string&, Exchange::IDeviceAudioCapabilities::IMS12CapabilityIterator*&) const = 0
    //  (3) virtual uint32_t SupportedMS12AudioProfiles(const string&, RPC::IStringIterator*&) const = 0
    //

    class ExchangeDeviceAudioCapabilitiesProxy final : public ProxyStub::UnknownProxyType<Exchange::IDeviceAudioCapabilities> {
    public:
        ExchangeDeviceAudioCapabilitiesProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t SupportedAudioPorts(RPC::IStringIterator*& _supportedAudioPorts) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceAudioCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _supportedAudioPorts = reinterpret_cast<RPC::IStringIterator*>(Interface(reader.Number<Core::instance_id>(), RPC::IStringIterator::ID));
            }

            return (result);
        }

        uint32_t AudioCapabilities(const string& _audioPort, Exchange::IDeviceAudioCapabilities::IAudioCapabilityIterator*& _audioCapabilities) const override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_audioPort));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceAudioCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _audioCapabilities = reinterpret_cast<Exchange::IDeviceAudioCapabilities::IAudioCapabilityIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDeviceAudioCapabilities::IAudioCapabilityIterator::ID));
            }

            return (result);
        }

        uint32_t MS12Capabilities(const string& _audioPort, Exchange::IDeviceAudioCapabilities::IMS12CapabilityIterator*& _ms12Capabilities) const override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_audioPort));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceAudioCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _ms12Capabilities = reinterpret_cast<Exchange::IDeviceAudioCapabilities::IMS12CapabilityIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDeviceAudioCapabilities::IMS12CapabilityIterator::ID));
            }

            return (result);
        }

        uint32_t SupportedMS12AudioProfiles(const string& _audioPort, RPC::IStringIterator*& _supportedMS12AudioProfiles) const override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_audioPort));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceAudioCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _supportedMS12AudioProfiles = reinterpret_cast<RPC::IStringIterator*>(Interface(reader.Number<Core::instance_id>(), RPC::IStringIterator::ID));
            }

            return (result);
        }

    }; // class ExchangeDeviceAudioCapabilitiesProxy

    //
    // Exchange::IDeviceVideoCapabilities interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t SupportedVideoDisplays(RPC::IStringIterator*&) const = 0
    //  (1) virtual uint32_t HostEDID(string&) const = 0
    //  (2) virtual uint32_t DefaultResolution(const string&, string&) const = 0
    //  (3) virtual uint32_t SupportedResolutions(const string&, RPC::IStringIterator*&) const = 0
    //  (4) virtual uint32_t SupportedHdcp(const string&, Exchange::IDeviceVideoCapabilities::CopyProtection&) const = 0
    //

    class ExchangeDeviceVideoCapabilitiesProxy final : public ProxyStub::UnknownProxyType<Exchange::IDeviceVideoCapabilities> {
    public:
        ExchangeDeviceVideoCapabilitiesProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t SupportedVideoDisplays(RPC::IStringIterator*& _supportedVideoDisplays) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceVideoCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _supportedVideoDisplays = reinterpret_cast<RPC::IStringIterator*>(Interface(reader.Number<Core::instance_id>(), RPC::IStringIterator::ID));
            }

            return (result);
        }

        uint32_t HostEDID(string& _edid) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceVideoCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _edid = reader.Text();
            }

            return (result);
        }

        uint32_t DefaultResolution(const string& _videoDisplay, string& _defaultResolution) const override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_videoDisplay));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceVideoCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _defaultResolution = reader.Text();
            }

            return (result);
        }

        uint32_t SupportedResolutions(const string& _videoDisplay, RPC::IStringIterator*& _supportedResolutions) const override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_videoDisplay));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceVideoCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _supportedResolutions = reinterpret_cast<RPC::IStringIterator*>(Interface(reader.Number<Core::instance_id>(), RPC::IStringIterator::ID));
            }

            return (result);
        }

        uint32_t SupportedHdcp(const string& _videoDisplay, Exchange::IDeviceVideoCapabilities::CopyProtection& _supportedHDCPVersion) const override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_videoDisplay));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDeviceVideoCapabilities>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _supportedHDCPVersion = reader.Number<Exchange::IDeviceVideoCapabilities::CopyProtection>();
            }

            return (result);
        }

    }; // class ExchangeDeviceVideoCapabilitiesProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>, RPCIteratorTypeInstance35E23A29StubMethods> RPCIteratorTypeInstance35E23A29Stub;
        typedef ProxyStub::UnknownStubType<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>, RPCIteratorTypeInstance9D76F5E7StubMethods> RPCIteratorTypeInstance9D76F5E7Stub;
        typedef ProxyStub::UnknownStubType<Exchange::IDeviceInfo, ExchangeDeviceInfoStubMethods> ExchangeDeviceInfoStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDeviceAudioCapabilities, ExchangeDeviceAudioCapabilitiesStubMethods> ExchangeDeviceAudioCapabilitiesStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDeviceVideoCapabilities, ExchangeDeviceVideoCapabilitiesStubMethods> ExchangeDeviceVideoCapabilitiesStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>, RPCIteratorTypeInstance35E23A29Proxy, RPCIteratorTypeInstance35E23A29Stub>();
                RPC::Administrator::Instance().Announce<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>, RPCIteratorTypeInstance9D76F5E7Proxy, RPCIteratorTypeInstance9D76F5E7Stub>();
                RPC::Administrator::Instance().Announce<Exchange::IDeviceInfo, ExchangeDeviceInfoProxy, ExchangeDeviceInfoStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDeviceAudioCapabilities, ExchangeDeviceAudioCapabilitiesProxy, ExchangeDeviceAudioCapabilitiesStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDeviceVideoCapabilities, ExchangeDeviceVideoCapabilitiesProxy, ExchangeDeviceVideoCapabilitiesStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::AudioCapability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_AUDIO_CAPABILITY>>();
                RPC::Administrator::Instance().Recall<RPC::IIteratorType<Exchange::IDeviceAudioCapabilities::MS12Capability, Exchange::ID_DEVICE_AUDIO_CAPABILITIES_MS12_CAPABILITY>>();
                RPC::Administrator::Instance().Recall<Exchange::IDeviceInfo>();
                RPC::Administrator::Instance().Recall<Exchange::IDeviceAudioCapabilities>();
                RPC::Administrator::Instance().Recall<Exchange::IDeviceVideoCapabilities>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
