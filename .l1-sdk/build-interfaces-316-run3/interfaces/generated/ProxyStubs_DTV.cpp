//
// generated automatically from "IDTV.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IDTV
//   - class Exchange::IDTV::ICountry
//   - class Exchange::IDTV::ICountry::IIterator
//   - class Exchange::IDTV::IService
//   - class Exchange::IDTV::IService::IIterator
//   - class Exchange::IDTV::IDvbcTuningParams
//   - class Exchange::IDTV::IDvbsTuningParams
//   - class Exchange::IDTV::IDvbtTuningParams
//   - class Exchange::IDTV::ILnb
//   - class Exchange::IDTV::ILnb::IIterator
//   - class Exchange::IDTV::ISatellite
//   - class Exchange::IDTV::ISatellite::IIterator
//   - class Exchange::IDTV::IStatus
//   - class Exchange::IDTV::IEitEvent
//   - class Exchange::IDTV::IEitEvent::IIterator
//   - class Exchange::IDTV::IEitEvent::IContentData
//   - class Exchange::IDTV::IEitEvent::IContentData::IIterator
//   - class Exchange::IDTV::IEitExtendedEvent
//   - class Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem
//   - class Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator
//   - class Exchange::IDTV::ISignalInfo
//   - class Exchange::IDTV::IComponent
//   - class Exchange::IDTV::IComponent::IIterator
//   - class Exchange::IDTV::IComponent::ITag
//   - class Exchange::IDTV::IComponent::ITag::IIterator
//   - class Exchange::IDTV::ITransport
//   - class Exchange::IDTV::INotification
//

#include "Module.h"
#include "IDTV.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IDTV interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Initialize(PluginHost::IShell*) = 0
    //  (1) virtual uint32_t Register(Exchange::IDTV::INotification*) = 0
    //  (2) virtual uint32_t Unregister(Exchange::IDTV::INotification*) = 0
    //  (3) virtual uint32_t GetNumberOfCountries(uint8_t&) const = 0
    //  (4) virtual uint32_t GetCountryList(Exchange::IDTV::ICountry::IIterator*&) const = 0
    //  (5) virtual uint32_t GetCountry(uint32_t&) const = 0
    //  (6) virtual uint32_t SetCountry(const uint32_t) = 0
    //  (7) virtual uint32_t GetLnbList(Exchange::IDTV::ILnb::IIterator*&) const = 0
    //  (8) virtual uint32_t GetSatelliteList(Exchange::IDTV::ISatellite::IIterator*&) const = 0
    //  (9) virtual uint32_t GetNumberOfServices(uint16_t&) const = 0
    //  (10) virtual uint32_t GetServiceList(Exchange::IDTV::IService::IIterator*&) const = 0
    //  (11) virtual uint32_t GetServiceList(const Exchange::IDTV::TunerType, Exchange::IDTV::IService::IIterator*&) const = 0
    //  (12) virtual uint32_t GetServiceList(const uint16_t, const uint16_t, Exchange::IDTV::IService::IIterator*&) const = 0
    //  (13) virtual uint32_t GetNowNextEvents(const uint16_t, const uint16_t, const uint16_t, Exchange::IDTV::IEitEvent*&, Exchange::IDTV::IEitEvent*&) const = 0
    //  (14) virtual uint32_t GetScheduleEvents(const uint16_t, const uint16_t, const uint16_t, const uint32_t, const uint32_t, Exchange::IDTV::IEitEvent::IIterator*&) const = 0
    //  (15) virtual uint32_t GetStatus(const int32_t, Exchange::IDTV::IStatus*&) const = 0
    //  (16) virtual uint32_t GetServiceInfo(const uint16_t, const uint16_t, const uint16_t, Exchange::IDTV::IService*&) const = 0
    //  (17) virtual uint32_t GetServiceComponents(const uint16_t, const uint16_t, const uint16_t, Exchange::IDTV::IComponent::IIterator*&) const = 0
    //  (18) virtual uint32_t GetTransportInfo(const uint16_t, const uint16_t, Exchange::IDTV::ITransport*&) const = 0
    //  (19) virtual uint32_t GetExtendedEventInfo(const uint16_t, const uint16_t, const uint16_t, const uint16_t, Exchange::IDTV::IEitExtendedEvent*&) const = 0
    //  (20) virtual uint32_t GetSignalInfo(const int32_t, Exchange::IDTV::ISignalInfo*&) const = 0
    //  (21) virtual uint32_t AddLnb(const string, const Exchange::IDTV::ILnb::LnbType, const Exchange::IDTV::ILnb::LnbPower, const Exchange::IDTV::ILnb::DiseqcTone, const Exchange::IDTV::ILnb::DiseqcCSwitch, const bool, const bool, const bool, const bool, const bool, const uint8_t, const uint8_t, const uint8_t, const uint32_t) = 0
    //  (22) virtual uint32_t AddSatellite(const string, const int16_t, const string) = 0
    //  (23) virtual uint32_t StartServiceSearch(const Exchange::IDTV::TunerType, const Exchange::IDTV::ServiceSearchType, const bool) = 0
    //  (24) virtual uint32_t StartServiceSearch(const Exchange::IDTV::ServiceSearchType, const bool, const uint32_t, const uint16_t, const Exchange::IDTV::IDvbcTuningParams::ModulationType) = 0
    //  (25) virtual uint32_t StartServiceSearch(const Exchange::IDTV::ServiceSearchType, const bool, const string, const uint32_t, const Exchange::IDTV::IDvbsTuningParams::PolarityType, const uint16_t, const Exchange::IDTV::IDvbsTuningParams::FecType, const Exchange::IDTV::IDvbsTuningParams::ModulationType, const bool) = 0
    //  (26) virtual uint32_t StartServiceSearch(const Exchange::IDTV::ServiceSearchType, const bool, const uint32_t, const Exchange::IDTV::IDvbtTuningParams::BandwidthType, const Exchange::IDTV::IDvbtTuningParams::OfdmModeType, const bool, const uint8_t) = 0
    //  (27) virtual uint32_t FinishServiceSearch(const Exchange::IDTV::TunerType, const bool) = 0
    //  (28) virtual uint32_t StartPlaying(const string, const bool, int32_t&) = 0
    //  (29) virtual uint32_t StartPlaying(const uint16_t, const bool, int32_t&) = 0
    //  (30) virtual uint32_t StopPlaying(const int32_t) = 0
    //

    ProxyStub::MethodHandler ExchangeDTVStubMethods[] = {
        // (0) virtual uint32_t Initialize(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id frameworkImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _framework = nullptr;
            ProxyStub::UnknownProxy* frameworkProxy = nullptr;
            if (frameworkImplementation != 0) {
                frameworkProxy = RPC::Administrator::Instance().ProxyInstance(channel, frameworkImplementation, false, _framework);
                ASSERT((_framework != nullptr) && (frameworkProxy != nullptr));
            }

            uint32_t result = implementation->Initialize(_framework);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (frameworkProxy != nullptr) {
                RPC::Administrator::Instance().Release(frameworkProxy, message->Response());
            }
        },

        // (1) virtual uint32_t Register(Exchange::IDTV::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id notificationImplementation = reader.Number<Core::instance_id>();

            Exchange::IDTV::INotification* _notification = nullptr;
            ProxyStub::UnknownProxy* notificationProxy = nullptr;
            if (notificationImplementation != 0) {
                notificationProxy = RPC::Administrator::Instance().ProxyInstance(channel, notificationImplementation, false, _notification);
                ASSERT((_notification != nullptr) && (notificationProxy != nullptr));
            }

            uint32_t result = implementation->Register(_notification);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (notificationProxy != nullptr) {
                RPC::Administrator::Instance().Release(notificationProxy, message->Response());
            }
        },

        // (2) virtual uint32_t Unregister(Exchange::IDTV::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id notificationImplementation = reader.Number<Core::instance_id>();

            Exchange::IDTV::INotification* _notification = nullptr;
            ProxyStub::UnknownProxy* notificationProxy = nullptr;
            if (notificationImplementation != 0) {
                notificationProxy = RPC::Administrator::Instance().ProxyInstance(channel, notificationImplementation, false, _notification);
                ASSERT((_notification != nullptr) && (notificationProxy != nullptr));
            }

            uint32_t result = implementation->Unregister(_notification);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (notificationProxy != nullptr) {
                RPC::Administrator::Instance().Release(notificationProxy, message->Response());
            }
        },

        // (3) virtual uint32_t GetNumberOfCountries(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _count{};

            uint32_t result = implementation->GetNumberOfCountries(_count);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_count);
        },

        // (4) virtual uint32_t GetCountryList(Exchange::IDTV::ICountry::IIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::ICountry::IIterator* _countries{};

            uint32_t result = implementation->GetCountryList(_countries);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_countries));

            RPC::Administrator::Instance().RegisterInterface(channel, _countries);
        },

        // (5) virtual uint32_t GetCountry(uint32_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t _code{};

            uint32_t result = implementation->GetCountry(_code);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint32_t>(_code);
        },

        // (6) virtual uint32_t SetCountry(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _code = reader.Number<uint32_t>();

            uint32_t result = implementation->SetCountry(_code);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (7) virtual uint32_t GetLnbList(Exchange::IDTV::ILnb::IIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::ILnb::IIterator* _lnbs{};

            uint32_t result = implementation->GetLnbList(_lnbs);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_lnbs));

            RPC::Administrator::Instance().RegisterInterface(channel, _lnbs);
        },

        // (8) virtual uint32_t GetSatelliteList(Exchange::IDTV::ISatellite::IIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::ISatellite::IIterator* _satellites{};

            uint32_t result = implementation->GetSatelliteList(_satellites);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_satellites));

            RPC::Administrator::Instance().RegisterInterface(channel, _satellites);
        },

        // (9) virtual uint32_t GetNumberOfServices(uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint16_t _count{};

            uint32_t result = implementation->GetNumberOfServices(_count);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_count);
        },

        // (10) virtual uint32_t GetServiceList(Exchange::IDTV::IService::IIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IService::IIterator* _services{};

            uint32_t result = implementation->GetServiceList(_services);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_services));

            RPC::Administrator::Instance().RegisterInterface(channel, _services);
        },

        // (11) virtual uint32_t GetServiceList(const Exchange::IDTV::TunerType, Exchange::IDTV::IService::IIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::IDTV::TunerType _tuner_type = reader.Number<Exchange::IDTV::TunerType>();

            Exchange::IDTV::IService::IIterator* _services{};

            uint32_t result = implementation->GetServiceList(_tuner_type, _services);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_services));

            RPC::Administrator::Instance().RegisterInterface(channel, _services);
        },

        // (12) virtual uint32_t GetServiceList(const uint16_t, const uint16_t, Exchange::IDTV::IService::IIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint16_t _onet_id = reader.Number<uint16_t>();
            const uint16_t _trans_id = reader.Number<uint16_t>();

            Exchange::IDTV::IService::IIterator* _services{};

            uint32_t result = implementation->GetServiceList(_onet_id, _trans_id, _services);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_services));

            RPC::Administrator::Instance().RegisterInterface(channel, _services);
        },

        // (13) virtual uint32_t GetNowNextEvents(const uint16_t, const uint16_t, const uint16_t, Exchange::IDTV::IEitEvent*&, Exchange::IDTV::IEitEvent*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint16_t _onet_id = reader.Number<uint16_t>();
            const uint16_t _trans_id = reader.Number<uint16_t>();
            const uint16_t _serv_id = reader.Number<uint16_t>();

            Exchange::IDTV::IEitEvent* _now_event{};
            Exchange::IDTV::IEitEvent* _next_event{};

            uint32_t result = implementation->GetNowNextEvents(_onet_id, _trans_id, _serv_id, _now_event, _next_event);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_now_event));
            writer.Number<Core::instance_id>(RPC::instance_cast(_next_event));

            RPC::Administrator::Instance().RegisterInterface(channel, _now_event);
            RPC::Administrator::Instance().RegisterInterface(channel, _next_event);
        },

        // (14) virtual uint32_t GetScheduleEvents(const uint16_t, const uint16_t, const uint16_t, const uint32_t, const uint32_t, Exchange::IDTV::IEitEvent::IIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint16_t _onet_id = reader.Number<uint16_t>();
            const uint16_t _trans_id = reader.Number<uint16_t>();
            const uint16_t _serv_id = reader.Number<uint16_t>();
            const uint32_t _start_utc = reader.Number<uint32_t>();
            const uint32_t _end_utc = reader.Number<uint32_t>();

            Exchange::IDTV::IEitEvent::IIterator* _events{};

            uint32_t result = implementation->GetScheduleEvents(_onet_id, _trans_id, _serv_id, _start_utc, _end_utc, _events);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_events));

            RPC::Administrator::Instance().RegisterInterface(channel, _events);
        },

        // (15) virtual uint32_t GetStatus(const int32_t, Exchange::IDTV::IStatus*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const int32_t _handle = reader.Number<int32_t>();

            Exchange::IDTV::IStatus* _status{};

            uint32_t result = implementation->GetStatus(_handle, _status);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_status));

            RPC::Administrator::Instance().RegisterInterface(channel, _status);
        },

        // (16) virtual uint32_t GetServiceInfo(const uint16_t, const uint16_t, const uint16_t, Exchange::IDTV::IService*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint16_t _onet_id = reader.Number<uint16_t>();
            const uint16_t _trans_id = reader.Number<uint16_t>();
            const uint16_t _serv_id = reader.Number<uint16_t>();

            Exchange::IDTV::IService* _service_info{};

            uint32_t result = implementation->GetServiceInfo(_onet_id, _trans_id, _serv_id, _service_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_service_info));

            RPC::Administrator::Instance().RegisterInterface(channel, _service_info);
        },

        // (17) virtual uint32_t GetServiceComponents(const uint16_t, const uint16_t, const uint16_t, Exchange::IDTV::IComponent::IIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint16_t _onet_id = reader.Number<uint16_t>();
            const uint16_t _trans_id = reader.Number<uint16_t>();
            const uint16_t _serv_id = reader.Number<uint16_t>();

            Exchange::IDTV::IComponent::IIterator* _components{};

            uint32_t result = implementation->GetServiceComponents(_onet_id, _trans_id, _serv_id, _components);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_components));

            RPC::Administrator::Instance().RegisterInterface(channel, _components);
        },

        // (18) virtual uint32_t GetTransportInfo(const uint16_t, const uint16_t, Exchange::IDTV::ITransport*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint16_t _onet_id = reader.Number<uint16_t>();
            const uint16_t _trans_id = reader.Number<uint16_t>();

            Exchange::IDTV::ITransport* _transport_info{};

            uint32_t result = implementation->GetTransportInfo(_onet_id, _trans_id, _transport_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_transport_info));

            RPC::Administrator::Instance().RegisterInterface(channel, _transport_info);
        },

        // (19) virtual uint32_t GetExtendedEventInfo(const uint16_t, const uint16_t, const uint16_t, const uint16_t, Exchange::IDTV::IEitExtendedEvent*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint16_t _onet_id = reader.Number<uint16_t>();
            const uint16_t _trans_id = reader.Number<uint16_t>();
            const uint16_t _serv_id = reader.Number<uint16_t>();
            const uint16_t _event_id = reader.Number<uint16_t>();

            Exchange::IDTV::IEitExtendedEvent* _info{};

            uint32_t result = implementation->GetExtendedEventInfo(_onet_id, _trans_id, _serv_id, _event_id, _info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_info));

            RPC::Administrator::Instance().RegisterInterface(channel, _info);
        },

        // (20) virtual uint32_t GetSignalInfo(const int32_t, Exchange::IDTV::ISignalInfo*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV* implementation = reinterpret_cast<const Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const int32_t _handle = reader.Number<int32_t>();

            Exchange::IDTV::ISignalInfo* _info{};

            uint32_t result = implementation->GetSignalInfo(_handle, _info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_info));

            RPC::Administrator::Instance().RegisterInterface(channel, _info);
        },

        // (21) virtual uint32_t AddLnb(const string, const Exchange::IDTV::ILnb::LnbType, const Exchange::IDTV::ILnb::LnbPower, const Exchange::IDTV::ILnb::DiseqcTone, const Exchange::IDTV::ILnb::DiseqcCSwitch, const bool, const bool, const bool, const bool, const bool, const uint8_t, const uint8_t, const uint8_t, const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _lnb_name = reader.Text();
            const Exchange::IDTV::ILnb::LnbType _type = reader.Number<Exchange::IDTV::ILnb::LnbType>();
            const Exchange::IDTV::ILnb::LnbPower _power = reader.Number<Exchange::IDTV::ILnb::LnbPower>();
            const Exchange::IDTV::ILnb::DiseqcTone _tone = reader.Number<Exchange::IDTV::ILnb::DiseqcTone>();
            const Exchange::IDTV::ILnb::DiseqcCSwitch _cswitch = reader.Number<Exchange::IDTV::ILnb::DiseqcCSwitch>();
            const bool _is22khz = reader.Boolean();
            const bool _is12v = reader.Boolean();
            const bool _is_pulse_pos = reader.Boolean();
            const bool _is_diseqc_pos = reader.Boolean();
            const bool _is_smatv = reader.Boolean();
            const uint8_t _diseqc_repeats = reader.Number<uint8_t>();
            const uint8_t _uswitch = reader.Number<uint8_t>();
            const uint8_t _unicable_channel = reader.Number<uint8_t>();
            const uint32_t _unicable_freq = reader.Number<uint32_t>();

            uint32_t result = implementation->AddLnb(_lnb_name, _type, _power, _tone, _cswitch, _is22khz, _is12v, _is_pulse_pos, _is_diseqc_pos, _is_smatv, _diseqc_repeats, _uswitch, _unicable_channel, _unicable_freq);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (22) virtual uint32_t AddSatellite(const string, const int16_t, const string) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _sat_name = reader.Text();
            const int16_t _longitude = reader.Number<int16_t>();
            const string _lnb_name = reader.Text();

            uint32_t result = implementation->AddSatellite(_sat_name, _longitude, _lnb_name);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (23) virtual uint32_t StartServiceSearch(const Exchange::IDTV::TunerType, const Exchange::IDTV::ServiceSearchType, const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::IDTV::TunerType _tuner_type = reader.Number<Exchange::IDTV::TunerType>();
            const Exchange::IDTV::ServiceSearchType _search_type = reader.Number<Exchange::IDTV::ServiceSearchType>();
            const bool _retune = reader.Boolean();

            uint32_t result = implementation->StartServiceSearch(_tuner_type, _search_type, _retune);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (24) virtual uint32_t StartServiceSearch(const Exchange::IDTV::ServiceSearchType, const bool, const uint32_t, const uint16_t, const Exchange::IDTV::IDvbcTuningParams::ModulationType) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::IDTV::ServiceSearchType _search_type = reader.Number<Exchange::IDTV::ServiceSearchType>();
            const bool _retune = reader.Boolean();
            const uint32_t _freq_hz = reader.Number<uint32_t>();
            const uint16_t _symbol_rate = reader.Number<uint16_t>();
            const Exchange::IDTV::IDvbcTuningParams::ModulationType _modulation = reader.Number<Exchange::IDTV::IDvbcTuningParams::ModulationType>();

            uint32_t result = implementation->StartServiceSearch(_search_type, _retune, _freq_hz, _symbol_rate, _modulation);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (25) virtual uint32_t StartServiceSearch(const Exchange::IDTV::ServiceSearchType, const bool, const string, const uint32_t, const Exchange::IDTV::IDvbsTuningParams::PolarityType, const uint16_t, const Exchange::IDTV::IDvbsTuningParams::FecType, const Exchange::IDTV::IDvbsTuningParams::ModulationType, const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::IDTV::ServiceSearchType _search_type = reader.Number<Exchange::IDTV::ServiceSearchType>();
            const bool _retune = reader.Boolean();
            const string _sat_name = reader.Text();
            const uint32_t _freq_khz = reader.Number<uint32_t>();
            const Exchange::IDTV::IDvbsTuningParams::PolarityType _polarity = reader.Number<Exchange::IDTV::IDvbsTuningParams::PolarityType>();
            const uint16_t _symbol_rate = reader.Number<uint16_t>();
            const Exchange::IDTV::IDvbsTuningParams::FecType _fec = reader.Number<Exchange::IDTV::IDvbsTuningParams::FecType>();
            const Exchange::IDTV::IDvbsTuningParams::ModulationType _modulation = reader.Number<Exchange::IDTV::IDvbsTuningParams::ModulationType>();
            const bool _dvbs2 = reader.Boolean();

            uint32_t result = implementation->StartServiceSearch(_search_type, _retune, _sat_name, _freq_khz, _polarity, _symbol_rate, _fec, _modulation, _dvbs2);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (26) virtual uint32_t StartServiceSearch(const Exchange::IDTV::ServiceSearchType, const bool, const uint32_t, const Exchange::IDTV::IDvbtTuningParams::BandwidthType, const Exchange::IDTV::IDvbtTuningParams::OfdmModeType, const bool, const uint8_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::IDTV::ServiceSearchType _search_type = reader.Number<Exchange::IDTV::ServiceSearchType>();
            const bool _retune = reader.Boolean();
            const uint32_t _freq_hz = reader.Number<uint32_t>();
            const Exchange::IDTV::IDvbtTuningParams::BandwidthType _bandwidth = reader.Number<Exchange::IDTV::IDvbtTuningParams::BandwidthType>();
            const Exchange::IDTV::IDvbtTuningParams::OfdmModeType _mode = reader.Number<Exchange::IDTV::IDvbtTuningParams::OfdmModeType>();
            const bool _dvbt2 = reader.Boolean();
            const uint8_t _plp_id = reader.Number<uint8_t>();

            uint32_t result = implementation->StartServiceSearch(_search_type, _retune, _freq_hz, _bandwidth, _mode, _dvbt2, _plp_id);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (27) virtual uint32_t FinishServiceSearch(const Exchange::IDTV::TunerType, const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::IDTV::TunerType _tuner_type = reader.Number<Exchange::IDTV::TunerType>();
            const bool _save_changes = reader.Boolean();

            uint32_t result = implementation->FinishServiceSearch(_tuner_type, _save_changes);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (28) virtual uint32_t StartPlaying(const string, const bool, int32_t&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _dvburi = reader.Text();
            const bool _monitor_only = reader.Boolean();

            int32_t _play_handle{};

            uint32_t result = implementation->StartPlaying(_dvburi, _monitor_only, _play_handle);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<int32_t>(_play_handle);
        },

        // (29) virtual uint32_t StartPlaying(const uint16_t, const bool, int32_t&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint16_t _lcn = reader.Number<uint16_t>();
            const bool _monitor_only = reader.Boolean();

            int32_t _play_handle{};

            uint32_t result = implementation->StartPlaying(_lcn, _monitor_only, _play_handle);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<int32_t>(_play_handle);
        },

        // (30) virtual uint32_t StopPlaying(const int32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV* implementation = reinterpret_cast<Exchange::IDTV*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const int32_t _play_handle = reader.Number<int32_t>();

            uint32_t result = implementation->StopPlaying(_play_handle);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeDTVStubMethods

    //
    // Exchange::IDTV::ICountry interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Name(string&) const = 0
    //  (1) virtual uint32_t Code(uint32_t&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVCountryStubMethods[] = {
        // (0) virtual uint32_t Name(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ICountry* implementation = reinterpret_cast<const Exchange::IDTV::ICountry*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _name{};

            uint32_t result = implementation->Name(_name);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_name);
        },

        // (1) virtual uint32_t Code(uint32_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ICountry* implementation = reinterpret_cast<const Exchange::IDTV::ICountry*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t _code{};

            uint32_t result = implementation->Code(_code);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint32_t>(_code);
        }
    }; // ExchangeDTVCountryStubMethods

    //
    // Exchange::IDTV::ICountry::IIterator interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::ICountry*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    ProxyStub::MethodHandler ExchangeDTVCountryIteratorStubMethods[] = {
        // (0) virtual uint32_t Current(Exchange::IDTV::ICountry*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ICountry::IIterator* implementation = reinterpret_cast<const Exchange::IDTV::ICountry::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::ICountry* _country{};

            uint32_t result = implementation->Current(_country);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_country));

            RPC::Administrator::Instance().RegisterInterface(channel, _country);
        },

        // (1) virtual uint32_t Next() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::ICountry::IIterator* implementation = reinterpret_cast<Exchange::IDTV::ICountry::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Next();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t Reset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::ICountry::IIterator* implementation = reinterpret_cast<Exchange::IDTV::ICountry::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Reset();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeDTVCountryIteratorStubMethods

    //
    // Exchange::IDTV::IService interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Fullname(string&) const = 0
    //  (1) virtual uint32_t Shortname(string&) const = 0
    //  (2) virtual uint32_t Dvburi(string&) const = 0
    //  (3) virtual uint32_t Type(Exchange::IDTV::IService::ServiceType&) const = 0
    //  (4) virtual uint32_t Lcn(uint16_t&) const = 0
    //  (5) virtual uint32_t Scrambled(bool&) const = 0
    //  (6) virtual uint32_t HasCaDescriptor(bool&) const = 0
    //  (7) virtual uint32_t Hidden(bool&) const = 0
    //  (8) virtual uint32_t Selectable(bool&) const = 0
    //  (9) virtual uint32_t RunningStatus(Exchange::IDTV::IService::RunState&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVServiceStubMethods[] = {
        // (0) virtual uint32_t Fullname(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IService* implementation = reinterpret_cast<const Exchange::IDTV::IService*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _fullname{};

            uint32_t result = implementation->Fullname(_fullname);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_fullname);
        },

        // (1) virtual uint32_t Shortname(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IService* implementation = reinterpret_cast<const Exchange::IDTV::IService*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _shortname{};

            uint32_t result = implementation->Shortname(_shortname);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_shortname);
        },

        // (2) virtual uint32_t Dvburi(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IService* implementation = reinterpret_cast<const Exchange::IDTV::IService*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _dvburi{};

            uint32_t result = implementation->Dvburi(_dvburi);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_dvburi);
        },

        // (3) virtual uint32_t Type(Exchange::IDTV::IService::ServiceType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IService* implementation = reinterpret_cast<const Exchange::IDTV::IService*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IService::ServiceType _type{};

            uint32_t result = implementation->Type(_type);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IService::ServiceType>(_type);
        },

        // (4) virtual uint32_t Lcn(uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IService* implementation = reinterpret_cast<const Exchange::IDTV::IService*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint16_t _lcn{};

            uint32_t result = implementation->Lcn(_lcn);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_lcn);
        },

        // (5) virtual uint32_t Scrambled(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IService* implementation = reinterpret_cast<const Exchange::IDTV::IService*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _scrambled{};

            uint32_t result = implementation->Scrambled(_scrambled);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_scrambled);
        },

        // (6) virtual uint32_t HasCaDescriptor(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IService* implementation = reinterpret_cast<const Exchange::IDTV::IService*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _has_ca_desc{};

            uint32_t result = implementation->HasCaDescriptor(_has_ca_desc);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_has_ca_desc);
        },

        // (7) virtual uint32_t Hidden(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IService* implementation = reinterpret_cast<const Exchange::IDTV::IService*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _hidden{};

            uint32_t result = implementation->Hidden(_hidden);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_hidden);
        },

        // (8) virtual uint32_t Selectable(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IService* implementation = reinterpret_cast<const Exchange::IDTV::IService*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _selectable{};

            uint32_t result = implementation->Selectable(_selectable);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_selectable);
        },

        // (9) virtual uint32_t RunningStatus(Exchange::IDTV::IService::RunState&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IService* implementation = reinterpret_cast<const Exchange::IDTV::IService*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IService::RunState _run_state{};

            uint32_t result = implementation->RunningStatus(_run_state);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IService::RunState>(_run_state);
        }
    }; // ExchangeDTVServiceStubMethods

    //
    // Exchange::IDTV::IService::IIterator interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::IService*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    ProxyStub::MethodHandler ExchangeDTVServiceIteratorStubMethods[] = {
        // (0) virtual uint32_t Current(Exchange::IDTV::IService*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IService::IIterator* implementation = reinterpret_cast<const Exchange::IDTV::IService::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IService* _service{};

            uint32_t result = implementation->Current(_service);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_service));

            RPC::Administrator::Instance().RegisterInterface(channel, _service);
        },

        // (1) virtual uint32_t Next() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::IService::IIterator* implementation = reinterpret_cast<Exchange::IDTV::IService::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Next();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t Reset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::IService::IIterator* implementation = reinterpret_cast<Exchange::IDTV::IService::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Reset();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeDTVServiceIteratorStubMethods

    //
    // Exchange::IDTV::IDvbcTuningParams interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Frequency(uint32_t&) const = 0
    //  (1) virtual uint32_t SymbolRate(uint16_t&) const = 0
    //  (2) virtual uint32_t Modulation(Exchange::IDTV::IDvbcTuningParams::ModulationType&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVDvbcTuningParamsStubMethods[] = {
        // (0) virtual uint32_t Frequency(uint32_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbcTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbcTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t _freq_hz{};

            uint32_t result = implementation->Frequency(_freq_hz);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint32_t>(_freq_hz);
        },

        // (1) virtual uint32_t SymbolRate(uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbcTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbcTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint16_t _sym_rate{};

            uint32_t result = implementation->SymbolRate(_sym_rate);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_sym_rate);
        },

        // (2) virtual uint32_t Modulation(Exchange::IDTV::IDvbcTuningParams::ModulationType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbcTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbcTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IDvbcTuningParams::ModulationType _modulation{};

            uint32_t result = implementation->Modulation(_modulation);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IDvbcTuningParams::ModulationType>(_modulation);
        }
    }; // ExchangeDTVDvbcTuningParamsStubMethods

    //
    // Exchange::IDTV::IDvbsTuningParams interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Satellite(string&) const = 0
    //  (1) virtual uint32_t Frequency(uint32_t&) const = 0
    //  (2) virtual uint32_t Polarity(Exchange::IDTV::IDvbsTuningParams::PolarityType&) const = 0
    //  (3) virtual uint32_t SymbolRate(uint16_t&) const = 0
    //  (4) virtual uint32_t Fec(Exchange::IDTV::IDvbsTuningParams::FecType&) const = 0
    //  (5) virtual uint32_t Modulation(Exchange::IDTV::IDvbsTuningParams::ModulationType&) const = 0
    //  (6) virtual uint32_t DvbS2(bool&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVDvbsTuningParamsStubMethods[] = {
        // (0) virtual uint32_t Satellite(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbsTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbsTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _sat_name{};

            uint32_t result = implementation->Satellite(_sat_name);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_sat_name);
        },

        // (1) virtual uint32_t Frequency(uint32_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbsTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbsTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t _freq_khz{};

            uint32_t result = implementation->Frequency(_freq_khz);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint32_t>(_freq_khz);
        },

        // (2) virtual uint32_t Polarity(Exchange::IDTV::IDvbsTuningParams::PolarityType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbsTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbsTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IDvbsTuningParams::PolarityType _polarity{};

            uint32_t result = implementation->Polarity(_polarity);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IDvbsTuningParams::PolarityType>(_polarity);
        },

        // (3) virtual uint32_t SymbolRate(uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbsTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbsTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint16_t _sym_rate{};

            uint32_t result = implementation->SymbolRate(_sym_rate);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_sym_rate);
        },

        // (4) virtual uint32_t Fec(Exchange::IDTV::IDvbsTuningParams::FecType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbsTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbsTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IDvbsTuningParams::FecType _fec{};

            uint32_t result = implementation->Fec(_fec);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IDvbsTuningParams::FecType>(_fec);
        },

        // (5) virtual uint32_t Modulation(Exchange::IDTV::IDvbsTuningParams::ModulationType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbsTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbsTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IDvbsTuningParams::ModulationType _modulation{};

            uint32_t result = implementation->Modulation(_modulation);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IDvbsTuningParams::ModulationType>(_modulation);
        },

        // (6) virtual uint32_t DvbS2(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbsTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbsTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _dvbs2{};

            uint32_t result = implementation->DvbS2(_dvbs2);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_dvbs2);
        }
    }; // ExchangeDTVDvbsTuningParamsStubMethods

    //
    // Exchange::IDTV::IDvbtTuningParams interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Frequency(uint32_t&) const = 0
    //  (1) virtual uint32_t Bandwidth(Exchange::IDTV::IDvbtTuningParams::BandwidthType&) const = 0
    //  (2) virtual uint32_t OfdmMode(Exchange::IDTV::IDvbtTuningParams::OfdmModeType&) const = 0
    //  (3) virtual uint32_t DvbT2(bool&) const = 0
    //  (4) virtual uint32_t PlpId(uint8_t&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVDvbtTuningParamsStubMethods[] = {
        // (0) virtual uint32_t Frequency(uint32_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbtTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbtTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t _freq_hz{};

            uint32_t result = implementation->Frequency(_freq_hz);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint32_t>(_freq_hz);
        },

        // (1) virtual uint32_t Bandwidth(Exchange::IDTV::IDvbtTuningParams::BandwidthType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbtTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbtTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IDvbtTuningParams::BandwidthType _bandwidth{};

            uint32_t result = implementation->Bandwidth(_bandwidth);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IDvbtTuningParams::BandwidthType>(_bandwidth);
        },

        // (2) virtual uint32_t OfdmMode(Exchange::IDTV::IDvbtTuningParams::OfdmModeType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbtTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbtTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IDvbtTuningParams::OfdmModeType _mode{};

            uint32_t result = implementation->OfdmMode(_mode);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IDvbtTuningParams::OfdmModeType>(_mode);
        },

        // (3) virtual uint32_t DvbT2(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbtTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbtTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _dvbt2{};

            uint32_t result = implementation->DvbT2(_dvbt2);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_dvbt2);
        },

        // (4) virtual uint32_t PlpId(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IDvbtTuningParams* implementation = reinterpret_cast<const Exchange::IDTV::IDvbtTuningParams*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _plp_id{};

            uint32_t result = implementation->PlpId(_plp_id);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_plp_id);
        }
    }; // ExchangeDTVDvbtTuningParamsStubMethods

    //
    // Exchange::IDTV::ILnb interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Name(string&) const = 0
    //  (1) virtual uint32_t Type(Exchange::IDTV::ILnb::LnbType&) const = 0
    //  (2) virtual uint32_t Power(Exchange::IDTV::ILnb::LnbPower&) const = 0
    //  (3) virtual uint32_t Tone(Exchange::IDTV::ILnb::DiseqcTone&) const = 0
    //  (4) virtual uint32_t CSwitch(Exchange::IDTV::ILnb::DiseqcCSwitch&) const = 0
    //  (5) virtual uint32_t Is22kHz(bool&) const = 0
    //  (6) virtual uint32_t Is12V(bool&) const = 0
    //  (7) virtual uint32_t IsPulsePosition(bool&) const = 0
    //  (8) virtual uint32_t IsDiseqcPosition(bool&) const = 0
    //  (9) virtual uint32_t IsSmatv(bool&) const = 0
    //  (10) virtual uint32_t DiseqcRepeats(uint8_t&) const = 0
    //  (11) virtual uint32_t USwitch(uint8_t&) const = 0
    //  (12) virtual uint32_t UnicableChannel(uint8_t&) const = 0
    //  (13) virtual uint32_t UnicableFreq(uint32_t&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVLnbStubMethods[] = {
        // (0) virtual uint32_t Name(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _name{};

            uint32_t result = implementation->Name(_name);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_name);
        },

        // (1) virtual uint32_t Type(Exchange::IDTV::ILnb::LnbType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::ILnb::LnbType _type{};

            uint32_t result = implementation->Type(_type);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::ILnb::LnbType>(_type);
        },

        // (2) virtual uint32_t Power(Exchange::IDTV::ILnb::LnbPower&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::ILnb::LnbPower _power{};

            uint32_t result = implementation->Power(_power);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::ILnb::LnbPower>(_power);
        },

        // (3) virtual uint32_t Tone(Exchange::IDTV::ILnb::DiseqcTone&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::ILnb::DiseqcTone _tone{};

            uint32_t result = implementation->Tone(_tone);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::ILnb::DiseqcTone>(_tone);
        },

        // (4) virtual uint32_t CSwitch(Exchange::IDTV::ILnb::DiseqcCSwitch&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::ILnb::DiseqcCSwitch _cswitch{};

            uint32_t result = implementation->CSwitch(_cswitch);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::ILnb::DiseqcCSwitch>(_cswitch);
        },

        // (5) virtual uint32_t Is22kHz(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _is_22khz{};

            uint32_t result = implementation->Is22kHz(_is_22khz);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_is_22khz);
        },

        // (6) virtual uint32_t Is12V(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _is_12v{};

            uint32_t result = implementation->Is12V(_is_12v);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_is_12v);
        },

        // (7) virtual uint32_t IsPulsePosition(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _is_pulse_pos{};

            uint32_t result = implementation->IsPulsePosition(_is_pulse_pos);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_is_pulse_pos);
        },

        // (8) virtual uint32_t IsDiseqcPosition(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _is_diseqc_pos{};

            uint32_t result = implementation->IsDiseqcPosition(_is_diseqc_pos);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_is_diseqc_pos);
        },

        // (9) virtual uint32_t IsSmatv(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _is_smatv{};

            uint32_t result = implementation->IsSmatv(_is_smatv);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_is_smatv);
        },

        // (10) virtual uint32_t DiseqcRepeats(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _repeats{};

            uint32_t result = implementation->DiseqcRepeats(_repeats);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_repeats);
        },

        // (11) virtual uint32_t USwitch(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _u_switch{};

            uint32_t result = implementation->USwitch(_u_switch);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_u_switch);
        },

        // (12) virtual uint32_t UnicableChannel(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _channel{};

            uint32_t result = implementation->UnicableChannel(_channel);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_channel);
        },

        // (13) virtual uint32_t UnicableFreq(uint32_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb* implementation = reinterpret_cast<const Exchange::IDTV::ILnb*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t _freq{};

            uint32_t result = implementation->UnicableFreq(_freq);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint32_t>(_freq);
        }
    }; // ExchangeDTVLnbStubMethods

    //
    // Exchange::IDTV::ILnb::IIterator interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::ILnb*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    ProxyStub::MethodHandler ExchangeDTVLnbIteratorStubMethods[] = {
        // (0) virtual uint32_t Current(Exchange::IDTV::ILnb*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ILnb::IIterator* implementation = reinterpret_cast<const Exchange::IDTV::ILnb::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::ILnb* _lnb{};

            uint32_t result = implementation->Current(_lnb);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_lnb));

            RPC::Administrator::Instance().RegisterInterface(channel, _lnb);
        },

        // (1) virtual uint32_t Next() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::ILnb::IIterator* implementation = reinterpret_cast<Exchange::IDTV::ILnb::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Next();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t Reset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::ILnb::IIterator* implementation = reinterpret_cast<Exchange::IDTV::ILnb::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Reset();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeDTVLnbIteratorStubMethods

    //
    // Exchange::IDTV::ISatellite interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Name(string&) const = 0
    //  (1) virtual uint32_t Longitude(int16_t&) const = 0
    //  (2) virtual uint32_t Lnb(string&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVSatelliteStubMethods[] = {
        // (0) virtual uint32_t Name(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ISatellite* implementation = reinterpret_cast<const Exchange::IDTV::ISatellite*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _name{};

            uint32_t result = implementation->Name(_name);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_name);
        },

        // (1) virtual uint32_t Longitude(int16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ISatellite* implementation = reinterpret_cast<const Exchange::IDTV::ISatellite*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            int16_t _longitude{};

            uint32_t result = implementation->Longitude(_longitude);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<int16_t>(_longitude);
        },

        // (2) virtual uint32_t Lnb(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ISatellite* implementation = reinterpret_cast<const Exchange::IDTV::ISatellite*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _lnb_name{};

            uint32_t result = implementation->Lnb(_lnb_name);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_lnb_name);
        }
    }; // ExchangeDTVSatelliteStubMethods

    //
    // Exchange::IDTV::ISatellite::IIterator interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::ISatellite*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    ProxyStub::MethodHandler ExchangeDTVSatelliteIteratorStubMethods[] = {
        // (0) virtual uint32_t Current(Exchange::IDTV::ISatellite*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ISatellite::IIterator* implementation = reinterpret_cast<const Exchange::IDTV::ISatellite::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::ISatellite* _sat{};

            uint32_t result = implementation->Current(_sat);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_sat));

            RPC::Administrator::Instance().RegisterInterface(channel, _sat);
        },

        // (1) virtual uint32_t Next() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::ISatellite::IIterator* implementation = reinterpret_cast<Exchange::IDTV::ISatellite::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Next();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t Reset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::ISatellite::IIterator* implementation = reinterpret_cast<Exchange::IDTV::ISatellite::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Reset();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeDTVSatelliteIteratorStubMethods

    //
    // Exchange::IDTV::IStatus interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Tuner(uint8_t&) const = 0
    //  (1) virtual uint32_t Demux(uint8_t&) const = 0
    //  (2) virtual uint32_t PmtPid(uint16_t&) const = 0
    //  (3) virtual uint32_t Dvburi(string&) const = 0
    //  (4) virtual uint32_t Lcn(uint16_t&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVStatusStubMethods[] = {
        // (0) virtual uint32_t Tuner(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IStatus* implementation = reinterpret_cast<const Exchange::IDTV::IStatus*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _tuner{};

            uint32_t result = implementation->Tuner(_tuner);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_tuner);
        },

        // (1) virtual uint32_t Demux(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IStatus* implementation = reinterpret_cast<const Exchange::IDTV::IStatus*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _demux{};

            uint32_t result = implementation->Demux(_demux);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_demux);
        },

        // (2) virtual uint32_t PmtPid(uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IStatus* implementation = reinterpret_cast<const Exchange::IDTV::IStatus*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint16_t _pid{};

            uint32_t result = implementation->PmtPid(_pid);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_pid);
        },

        // (3) virtual uint32_t Dvburi(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IStatus* implementation = reinterpret_cast<const Exchange::IDTV::IStatus*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _dvburi{};

            uint32_t result = implementation->Dvburi(_dvburi);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_dvburi);
        },

        // (4) virtual uint32_t Lcn(uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IStatus* implementation = reinterpret_cast<const Exchange::IDTV::IStatus*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint16_t _lcn{};

            uint32_t result = implementation->Lcn(_lcn);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_lcn);
        }
    }; // ExchangeDTVStatusStubMethods

    //
    // Exchange::IDTV::IEitEvent interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Name(string&) const = 0
    //  (1) virtual uint32_t StartTime(uint32_t&) const = 0
    //  (2) virtual uint32_t Duration(uint32_t&) const = 0
    //  (3) virtual uint32_t EventId(uint16_t&) const = 0
    //  (4) virtual uint32_t ShortDescription(string&) const = 0
    //  (5) virtual uint32_t HasSubtitles(bool&) const = 0
    //  (6) virtual uint32_t HasAudioDescription(bool&) const = 0
    //  (7) virtual uint32_t ParentalRating(uint8_t&) const = 0
    //  (8) virtual uint32_t ContentData(Exchange::IDTV::IEitEvent::IContentData::IIterator*&) const = 0
    //  (9) virtual uint32_t HasExtendedInfo(bool&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVEitEventStubMethods[] = {
        // (0) virtual uint32_t Name(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _name{};

            uint32_t result = implementation->Name(_name);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_name);
        },

        // (1) virtual uint32_t StartTime(uint32_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t _start_time{};

            uint32_t result = implementation->StartTime(_start_time);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint32_t>(_start_time);
        },

        // (2) virtual uint32_t Duration(uint32_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t _duration{};

            uint32_t result = implementation->Duration(_duration);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint32_t>(_duration);
        },

        // (3) virtual uint32_t EventId(uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint16_t _event_id{};

            uint32_t result = implementation->EventId(_event_id);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_event_id);
        },

        // (4) virtual uint32_t ShortDescription(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _description{};

            uint32_t result = implementation->ShortDescription(_description);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_description);
        },

        // (5) virtual uint32_t HasSubtitles(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _has_subs{};

            uint32_t result = implementation->HasSubtitles(_has_subs);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_has_subs);
        },

        // (6) virtual uint32_t HasAudioDescription(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _has_ad{};

            uint32_t result = implementation->HasAudioDescription(_has_ad);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_has_ad);
        },

        // (7) virtual uint32_t ParentalRating(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _rating{};

            uint32_t result = implementation->ParentalRating(_rating);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_rating);
        },

        // (8) virtual uint32_t ContentData(Exchange::IDTV::IEitEvent::IContentData::IIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IEitEvent::IContentData::IIterator* _content_data{};

            uint32_t result = implementation->ContentData(_content_data);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_content_data));

            RPC::Administrator::Instance().RegisterInterface(channel, _content_data);
        },

        // (9) virtual uint32_t HasExtendedInfo(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _extended_info{};

            uint32_t result = implementation->HasExtendedInfo(_extended_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_extended_info);
        }
    }; // ExchangeDTVEitEventStubMethods

    //
    // Exchange::IDTV::IEitEvent::IIterator interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::IEitEvent*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    ProxyStub::MethodHandler ExchangeDTVEitEventIteratorStubMethods[] = {
        // (0) virtual uint32_t Current(Exchange::IDTV::IEitEvent*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent::IIterator* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IEitEvent* _eit_event{};

            uint32_t result = implementation->Current(_eit_event);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_eit_event));

            RPC::Administrator::Instance().RegisterInterface(channel, _eit_event);
        },

        // (1) virtual uint32_t Next() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::IEitEvent::IIterator* implementation = reinterpret_cast<Exchange::IDTV::IEitEvent::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Next();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t Reset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::IEitEvent::IIterator* implementation = reinterpret_cast<Exchange::IDTV::IEitEvent::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Reset();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeDTVEitEventIteratorStubMethods

    //
    // Exchange::IDTV::IEitEvent::IContentData interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Value(uint8_t&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVEitEventContentDataStubMethods[] = {
        // (0) virtual uint32_t Value(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent::IContentData* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent::IContentData*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _value{};

            uint32_t result = implementation->Value(_value);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_value);
        }
    }; // ExchangeDTVEitEventContentDataStubMethods

    //
    // Exchange::IDTV::IEitEvent::IContentData::IIterator interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::IEitEvent::IContentData*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    ProxyStub::MethodHandler ExchangeDTVEitEventContentDataIteratorStubMethods[] = {
        // (0) virtual uint32_t Current(Exchange::IDTV::IEitEvent::IContentData*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitEvent::IContentData::IIterator* implementation = reinterpret_cast<const Exchange::IDTV::IEitEvent::IContentData::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IEitEvent::IContentData* _content_data{};

            uint32_t result = implementation->Current(_content_data);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_content_data));

            RPC::Administrator::Instance().RegisterInterface(channel, _content_data);
        },

        // (1) virtual uint32_t Next() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::IEitEvent::IContentData::IIterator* implementation = reinterpret_cast<Exchange::IDTV::IEitEvent::IContentData::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Next();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t Reset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::IEitEvent::IContentData::IIterator* implementation = reinterpret_cast<Exchange::IDTV::IEitEvent::IContentData::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Reset();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeDTVEitEventContentDataIteratorStubMethods

    //
    // Exchange::IDTV::IEitExtendedEvent interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Description(string&) const = 0
    //  (1) virtual uint32_t Items(Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator*&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVEitExtendedEventStubMethods[] = {
        // (0) virtual uint32_t Description(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitExtendedEvent* implementation = reinterpret_cast<const Exchange::IDTV::IEitExtendedEvent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _desc{};

            uint32_t result = implementation->Description(_desc);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_desc);
        },

        // (1) virtual uint32_t Items(Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitExtendedEvent* implementation = reinterpret_cast<const Exchange::IDTV::IEitExtendedEvent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator* _items{};

            uint32_t result = implementation->Items(_items);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_items));

            RPC::Administrator::Instance().RegisterInterface(channel, _items);
        }
    }; // ExchangeDTVEitExtendedEventStubMethods

    //
    // Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Description(string&) const = 0
    //  (1) virtual uint32_t Item(string&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVEitExtendedEventEitExtendedEventItemStubMethods[] = {
        // (0) virtual uint32_t Description(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem* implementation = reinterpret_cast<const Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _desc{};

            uint32_t result = implementation->Description(_desc);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_desc);
        },

        // (1) virtual uint32_t Item(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem* implementation = reinterpret_cast<const Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _item{};

            uint32_t result = implementation->Item(_item);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_item);
        }
    }; // ExchangeDTVEitExtendedEventEitExtendedEventItemStubMethods

    //
    // Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    ProxyStub::MethodHandler ExchangeDTVEitExtendedEventEitExtendedEventItemIteratorStubMethods[] = {
        // (0) virtual uint32_t Current(Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator* implementation = reinterpret_cast<const Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem* _event_item{};

            uint32_t result = implementation->Current(_event_item);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_event_item));

            RPC::Administrator::Instance().RegisterInterface(channel, _event_item);
        },

        // (1) virtual uint32_t Next() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator* implementation = reinterpret_cast<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Next();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t Reset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator* implementation = reinterpret_cast<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Reset();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeDTVEitExtendedEventEitExtendedEventItemIteratorStubMethods

    //
    // Exchange::IDTV::ISignalInfo interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Locked(bool&) const = 0
    //  (1) virtual uint32_t Strength(uint8_t&) const = 0
    //  (2) virtual uint32_t Quality(uint8_t&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVSignalInfoStubMethods[] = {
        // (0) virtual uint32_t Locked(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ISignalInfo* implementation = reinterpret_cast<const Exchange::IDTV::ISignalInfo*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _locked{};

            uint32_t result = implementation->Locked(_locked);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_locked);
        },

        // (1) virtual uint32_t Strength(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ISignalInfo* implementation = reinterpret_cast<const Exchange::IDTV::ISignalInfo*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _strength{};

            uint32_t result = implementation->Strength(_strength);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_strength);
        },

        // (2) virtual uint32_t Quality(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ISignalInfo* implementation = reinterpret_cast<const Exchange::IDTV::ISignalInfo*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _quality{};

            uint32_t result = implementation->Quality(_quality);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_quality);
        }
    }; // ExchangeDTVSignalInfoStubMethods

    //
    // Exchange::IDTV::IComponent interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Type(Exchange::IDTV::IComponent::ComponentType&) const = 0
    //  (1) virtual uint32_t Tags(Exchange::IDTV::IComponent::ITag::IIterator*&) const = 0
    //  (2) virtual uint32_t Pid(uint16_t&) const = 0
    //  (3) virtual uint32_t Codec(Exchange::IDTV::IComponent::CodecType&) const = 0
    //  (4) virtual uint32_t Language(string&) const = 0
    //  (5) virtual uint32_t AudioType(Exchange::IDTV::IComponent::AudType&) const = 0
    //  (6) virtual uint32_t AudioMode(Exchange::IDTV::IComponent::AudMode&) const = 0
    //  (7) virtual uint32_t SubtitleFormat(Exchange::IDTV::IComponent::SubFormat&) const = 0
    //  (8) virtual uint32_t CompositionPage(uint16_t&) const = 0
    //  (9) virtual uint32_t AncillaryPage(uint16_t&) const = 0
    //  (10) virtual uint32_t TeletextType(uint8_t&) const = 0
    //  (11) virtual uint32_t TeletextMagazine(uint8_t&) const = 0
    //  (12) virtual uint32_t TeletextPage(uint8_t&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVComponentStubMethods[] = {
        // (0) virtual uint32_t Type(Exchange::IDTV::IComponent::ComponentType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IComponent::ComponentType _type{};

            uint32_t result = implementation->Type(_type);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IComponent::ComponentType>(_type);
        },

        // (1) virtual uint32_t Tags(Exchange::IDTV::IComponent::ITag::IIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IComponent::ITag::IIterator* _tags{};

            uint32_t result = implementation->Tags(_tags);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_tags));

            RPC::Administrator::Instance().RegisterInterface(channel, _tags);
        },

        // (2) virtual uint32_t Pid(uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint16_t _pid{};

            uint32_t result = implementation->Pid(_pid);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_pid);
        },

        // (3) virtual uint32_t Codec(Exchange::IDTV::IComponent::CodecType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IComponent::CodecType _codec{};

            uint32_t result = implementation->Codec(_codec);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IComponent::CodecType>(_codec);
        },

        // (4) virtual uint32_t Language(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _lang{};

            uint32_t result = implementation->Language(_lang);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_lang);
        },

        // (5) virtual uint32_t AudioType(Exchange::IDTV::IComponent::AudType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IComponent::AudType _type{};

            uint32_t result = implementation->AudioType(_type);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IComponent::AudType>(_type);
        },

        // (6) virtual uint32_t AudioMode(Exchange::IDTV::IComponent::AudMode&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IComponent::AudMode _mode{};

            uint32_t result = implementation->AudioMode(_mode);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IComponent::AudMode>(_mode);
        },

        // (7) virtual uint32_t SubtitleFormat(Exchange::IDTV::IComponent::SubFormat&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IComponent::SubFormat _format{};

            uint32_t result = implementation->SubtitleFormat(_format);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::IComponent::SubFormat>(_format);
        },

        // (8) virtual uint32_t CompositionPage(uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint16_t _page{};

            uint32_t result = implementation->CompositionPage(_page);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_page);
        },

        // (9) virtual uint32_t AncillaryPage(uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint16_t _page{};

            uint32_t result = implementation->AncillaryPage(_page);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_page);
        },

        // (10) virtual uint32_t TeletextType(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _type{};

            uint32_t result = implementation->TeletextType(_type);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_type);
        },

        // (11) virtual uint32_t TeletextMagazine(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _magazine{};

            uint32_t result = implementation->TeletextMagazine(_magazine);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_magazine);
        },

        // (12) virtual uint32_t TeletextPage(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent* implementation = reinterpret_cast<const Exchange::IDTV::IComponent*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _page{};

            uint32_t result = implementation->TeletextPage(_page);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_page);
        }
    }; // ExchangeDTVComponentStubMethods

    //
    // Exchange::IDTV::IComponent::IIterator interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::IComponent*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    ProxyStub::MethodHandler ExchangeDTVComponentIteratorStubMethods[] = {
        // (0) virtual uint32_t Current(Exchange::IDTV::IComponent*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent::IIterator* implementation = reinterpret_cast<const Exchange::IDTV::IComponent::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IComponent* _comp{};

            uint32_t result = implementation->Current(_comp);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_comp));

            RPC::Administrator::Instance().RegisterInterface(channel, _comp);
        },

        // (1) virtual uint32_t Next() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::IComponent::IIterator* implementation = reinterpret_cast<Exchange::IDTV::IComponent::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Next();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t Reset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::IComponent::IIterator* implementation = reinterpret_cast<Exchange::IDTV::IComponent::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Reset();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeDTVComponentIteratorStubMethods

    //
    // Exchange::IDTV::IComponent::ITag interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Tag(uint8_t&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVComponentTagStubMethods[] = {
        // (0) virtual uint32_t Tag(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent::ITag* implementation = reinterpret_cast<const Exchange::IDTV::IComponent::ITag*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _value{};

            uint32_t result = implementation->Tag(_value);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_value);
        }
    }; // ExchangeDTVComponentTagStubMethods

    //
    // Exchange::IDTV::IComponent::ITag::IIterator interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::IComponent::ITag*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    ProxyStub::MethodHandler ExchangeDTVComponentTagIteratorStubMethods[] = {
        // (0) virtual uint32_t Current(Exchange::IDTV::IComponent::ITag*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::IComponent::ITag::IIterator* implementation = reinterpret_cast<const Exchange::IDTV::IComponent::ITag::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IComponent::ITag* _tag{};

            uint32_t result = implementation->Current(_tag);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_tag));

            RPC::Administrator::Instance().RegisterInterface(channel, _tag);
        },

        // (1) virtual uint32_t Next() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::IComponent::ITag::IIterator* implementation = reinterpret_cast<Exchange::IDTV::IComponent::ITag::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Next();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t Reset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::IComponent::ITag::IIterator* implementation = reinterpret_cast<Exchange::IDTV::IComponent::ITag::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Reset();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeDTVComponentTagIteratorStubMethods

    //
    // Exchange::IDTV::ITransport interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Tuner(Exchange::IDTV::TunerType&) const = 0
    //  (1) virtual uint32_t OriginalNetworkId(uint16_t&) const = 0
    //  (2) virtual uint32_t TransportId(uint16_t&) const = 0
    //  (3) virtual uint32_t SignalStrength(uint8_t&) const = 0
    //  (4) virtual uint32_t SignalQuality(uint8_t&) const = 0
    //  (5) virtual uint32_t TuningParamsDvbc(Exchange::IDTV::IDvbcTuningParams*&) const = 0
    //  (6) virtual uint32_t TuningParamsDvbs(Exchange::IDTV::IDvbsTuningParams*&) const = 0
    //  (7) virtual uint32_t TuningParamsDvbt(Exchange::IDTV::IDvbtTuningParams*&) const = 0
    //

    ProxyStub::MethodHandler ExchangeDTVTransportStubMethods[] = {
        // (0) virtual uint32_t Tuner(Exchange::IDTV::TunerType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ITransport* implementation = reinterpret_cast<const Exchange::IDTV::ITransport*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::TunerType _type{};

            uint32_t result = implementation->Tuner(_type);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IDTV::TunerType>(_type);
        },

        // (1) virtual uint32_t OriginalNetworkId(uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ITransport* implementation = reinterpret_cast<const Exchange::IDTV::ITransport*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint16_t _onet_id{};

            uint32_t result = implementation->OriginalNetworkId(_onet_id);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_onet_id);
        },

        // (2) virtual uint32_t TransportId(uint16_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ITransport* implementation = reinterpret_cast<const Exchange::IDTV::ITransport*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint16_t _trans_id{};

            uint32_t result = implementation->TransportId(_trans_id);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint16_t>(_trans_id);
        },

        // (3) virtual uint32_t SignalStrength(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ITransport* implementation = reinterpret_cast<const Exchange::IDTV::ITransport*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _strength{};

            uint32_t result = implementation->SignalStrength(_strength);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_strength);
        },

        // (4) virtual uint32_t SignalQuality(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ITransport* implementation = reinterpret_cast<const Exchange::IDTV::ITransport*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _quality{};

            uint32_t result = implementation->SignalQuality(_quality);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_quality);
        },

        // (5) virtual uint32_t TuningParamsDvbc(Exchange::IDTV::IDvbcTuningParams*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ITransport* implementation = reinterpret_cast<const Exchange::IDTV::ITransport*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IDvbcTuningParams* _params{};

            uint32_t result = implementation->TuningParamsDvbc(_params);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_params));

            RPC::Administrator::Instance().RegisterInterface(channel, _params);
        },

        // (6) virtual uint32_t TuningParamsDvbs(Exchange::IDTV::IDvbsTuningParams*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ITransport* implementation = reinterpret_cast<const Exchange::IDTV::ITransport*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IDvbsTuningParams* _params{};

            uint32_t result = implementation->TuningParamsDvbs(_params);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_params));

            RPC::Administrator::Instance().RegisterInterface(channel, _params);
        },

        // (7) virtual uint32_t TuningParamsDvbt(Exchange::IDTV::IDvbtTuningParams*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IDTV::ITransport* implementation = reinterpret_cast<const Exchange::IDTV::ITransport*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IDTV::IDvbtTuningParams* _params{};

            uint32_t result = implementation->TuningParamsDvbt(_params);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_params));

            RPC::Administrator::Instance().RegisterInterface(channel, _params);
        }
    }; // ExchangeDTVTransportStubMethods

    //
    // Exchange::IDTV::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void SearchEvent(const uint8_t, const bool, const uint8_t) = 0
    //  (1) virtual void ServiceEvent(const Exchange::IDTV::INotification::ServiceEventType, const Exchange::IDTV::IService*, const Exchange::IDTV::IEitEvent*) = 0
    //

    ProxyStub::MethodHandler ExchangeDTVNotificationStubMethods[] = {
        // (0) virtual void SearchEvent(const uint8_t, const bool, const uint8_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::INotification* implementation = reinterpret_cast<Exchange::IDTV::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint8_t _handle = reader.Number<uint8_t>();
            const bool _finished = reader.Boolean();
            const uint8_t _progress = reader.Number<uint8_t>();

            implementation->SearchEvent(_handle, _finished, _progress);
        },

        // (1) virtual void ServiceEvent(const Exchange::IDTV::INotification::ServiceEventType, const Exchange::IDTV::IService*, const Exchange::IDTV::IEitEvent*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IDTV::INotification* implementation = reinterpret_cast<Exchange::IDTV::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::IDTV::INotification::ServiceEventType _event_type = reader.Number<Exchange::IDTV::INotification::ServiceEventType>();
            const Core::instance_id serviceImplementation = reader.Number<Core::instance_id>();
            const Core::instance_id eit_eventImplementation = reader.Number<Core::instance_id>();

            Exchange::IDTV::IService* _service = nullptr;
            ProxyStub::UnknownProxy* serviceProxy = nullptr;
            if (serviceImplementation != 0) {
                serviceProxy = RPC::Administrator::Instance().ProxyInstance(channel, serviceImplementation, false, _service);
                ASSERT((_service != nullptr) && (serviceProxy != nullptr));
            }
            Exchange::IDTV::IEitEvent* _eit_event = nullptr;
            ProxyStub::UnknownProxy* eit_eventProxy = nullptr;
            if (eit_eventImplementation != 0) {
                eit_eventProxy = RPC::Administrator::Instance().ProxyInstance(channel, eit_eventImplementation, false, _eit_event);
                ASSERT((_eit_event != nullptr) && (eit_eventProxy != nullptr));
            }

            implementation->ServiceEvent(_event_type, _service, nullptr);

            if (serviceProxy != nullptr) {
                RPC::Administrator::Instance().Release(serviceProxy, message->Response());
            }
            if (eit_eventProxy != nullptr) {
                RPC::Administrator::Instance().Release(eit_eventProxy, message->Response());
            }
        }
    }; // ExchangeDTVNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IDTV interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Initialize(PluginHost::IShell*) = 0
    //  (1) virtual uint32_t Register(Exchange::IDTV::INotification*) = 0
    //  (2) virtual uint32_t Unregister(Exchange::IDTV::INotification*) = 0
    //  (3) virtual uint32_t GetNumberOfCountries(uint8_t&) const = 0
    //  (4) virtual uint32_t GetCountryList(Exchange::IDTV::ICountry::IIterator*&) const = 0
    //  (5) virtual uint32_t GetCountry(uint32_t&) const = 0
    //  (6) virtual uint32_t SetCountry(const uint32_t) = 0
    //  (7) virtual uint32_t GetLnbList(Exchange::IDTV::ILnb::IIterator*&) const = 0
    //  (8) virtual uint32_t GetSatelliteList(Exchange::IDTV::ISatellite::IIterator*&) const = 0
    //  (9) virtual uint32_t GetNumberOfServices(uint16_t&) const = 0
    //  (10) virtual uint32_t GetServiceList(Exchange::IDTV::IService::IIterator*&) const = 0
    //  (11) virtual uint32_t GetServiceList(const Exchange::IDTV::TunerType, Exchange::IDTV::IService::IIterator*&) const = 0
    //  (12) virtual uint32_t GetServiceList(const uint16_t, const uint16_t, Exchange::IDTV::IService::IIterator*&) const = 0
    //  (13) virtual uint32_t GetNowNextEvents(const uint16_t, const uint16_t, const uint16_t, Exchange::IDTV::IEitEvent*&, Exchange::IDTV::IEitEvent*&) const = 0
    //  (14) virtual uint32_t GetScheduleEvents(const uint16_t, const uint16_t, const uint16_t, const uint32_t, const uint32_t, Exchange::IDTV::IEitEvent::IIterator*&) const = 0
    //  (15) virtual uint32_t GetStatus(const int32_t, Exchange::IDTV::IStatus*&) const = 0
    //  (16) virtual uint32_t GetServiceInfo(const uint16_t, const uint16_t, const uint16_t, Exchange::IDTV::IService*&) const = 0
    //  (17) virtual uint32_t GetServiceComponents(const uint16_t, const uint16_t, const uint16_t, Exchange::IDTV::IComponent::IIterator*&) const = 0
    //  (18) virtual uint32_t GetTransportInfo(const uint16_t, const uint16_t, Exchange::IDTV::ITransport*&) const = 0
    //  (19) virtual uint32_t GetExtendedEventInfo(const uint16_t, const uint16_t, const uint16_t, const uint16_t, Exchange::IDTV::IEitExtendedEvent*&) const = 0
    //  (20) virtual uint32_t GetSignalInfo(const int32_t, Exchange::IDTV::ISignalInfo*&) const = 0
    //  (21) virtual uint32_t AddLnb(const string, const Exchange::IDTV::ILnb::LnbType, const Exchange::IDTV::ILnb::LnbPower, const Exchange::IDTV::ILnb::DiseqcTone, const Exchange::IDTV::ILnb::DiseqcCSwitch, const bool, const bool, const bool, const bool, const bool, const uint8_t, const uint8_t, const uint8_t, const uint32_t) = 0
    //  (22) virtual uint32_t AddSatellite(const string, const int16_t, const string) = 0
    //  (23) virtual uint32_t StartServiceSearch(const Exchange::IDTV::TunerType, const Exchange::IDTV::ServiceSearchType, const bool) = 0
    //  (24) virtual uint32_t StartServiceSearch(const Exchange::IDTV::ServiceSearchType, const bool, const uint32_t, const uint16_t, const Exchange::IDTV::IDvbcTuningParams::ModulationType) = 0
    //  (25) virtual uint32_t StartServiceSearch(const Exchange::IDTV::ServiceSearchType, const bool, const string, const uint32_t, const Exchange::IDTV::IDvbsTuningParams::PolarityType, const uint16_t, const Exchange::IDTV::IDvbsTuningParams::FecType, const Exchange::IDTV::IDvbsTuningParams::ModulationType, const bool) = 0
    //  (26) virtual uint32_t StartServiceSearch(const Exchange::IDTV::ServiceSearchType, const bool, const uint32_t, const Exchange::IDTV::IDvbtTuningParams::BandwidthType, const Exchange::IDTV::IDvbtTuningParams::OfdmModeType, const bool, const uint8_t) = 0
    //  (27) virtual uint32_t FinishServiceSearch(const Exchange::IDTV::TunerType, const bool) = 0
    //  (28) virtual uint32_t StartPlaying(const string, const bool, int32_t&) = 0
    //  (29) virtual uint32_t StartPlaying(const uint16_t, const bool, int32_t&) = 0
    //  (30) virtual uint32_t StopPlaying(const int32_t) = 0
    //

    class ExchangeDTVProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV> {
    public:
        ExchangeDTVProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Initialize(PluginHost::IShell* _framework) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_framework));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        uint32_t Register(Exchange::IDTV::INotification* _notification) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_notification));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        uint32_t Unregister(Exchange::IDTV::INotification* _notification) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_notification));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        uint32_t GetNumberOfCountries(uint8_t& _count) const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _count = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint32_t GetCountryList(Exchange::IDTV::ICountry::IIterator*& _countries) const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _countries = reinterpret_cast<Exchange::IDTV::ICountry::IIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::ICountry::IIterator::ID));
            }

            return (result);
        }

        uint32_t GetCountry(uint32_t& _code) const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _code = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t SetCountry(const uint32_t _code) override
        {
            IPCMessage message(BaseClass::Message(6));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_code);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t GetLnbList(Exchange::IDTV::ILnb::IIterator*& _lnbs) const override
        {
            IPCMessage message(BaseClass::Message(7));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _lnbs = reinterpret_cast<Exchange::IDTV::ILnb::IIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::ILnb::IIterator::ID));
            }

            return (result);
        }

        uint32_t GetSatelliteList(Exchange::IDTV::ISatellite::IIterator*& _satellites) const override
        {
            IPCMessage message(BaseClass::Message(8));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _satellites = reinterpret_cast<Exchange::IDTV::ISatellite::IIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::ISatellite::IIterator::ID));
            }

            return (result);
        }

        uint32_t GetNumberOfServices(uint16_t& _count) const override
        {
            IPCMessage message(BaseClass::Message(9));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _count = reader.Number<uint16_t>();
            }

            return (result);
        }

        uint32_t GetServiceList(Exchange::IDTV::IService::IIterator*& _services) const override
        {
            IPCMessage message(BaseClass::Message(10));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _services = reinterpret_cast<Exchange::IDTV::IService::IIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IService::IIterator::ID));
            }

            return (result);
        }

        uint32_t GetServiceList(const Exchange::IDTV::TunerType _tuner_type, Exchange::IDTV::IService::IIterator*& _services) const override
        {
            IPCMessage message(BaseClass::Message(11));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::IDTV::TunerType>(_tuner_type);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _services = reinterpret_cast<Exchange::IDTV::IService::IIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IService::IIterator::ID));
            }

            return (result);
        }

        uint32_t GetServiceList(const uint16_t _onet_id, const uint16_t _trans_id, Exchange::IDTV::IService::IIterator*& _services) const override
        {
            IPCMessage message(BaseClass::Message(12));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint16_t>(_onet_id);
            writer.Number<uint16_t>(_trans_id);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _services = reinterpret_cast<Exchange::IDTV::IService::IIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IService::IIterator::ID));
            }

            return (result);
        }

        uint32_t GetNowNextEvents(const uint16_t _onet_id, const uint16_t _trans_id, const uint16_t _serv_id, Exchange::IDTV::IEitEvent*& _now_event, Exchange::IDTV::IEitEvent*& _next_event) const override
        {
            IPCMessage message(BaseClass::Message(13));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint16_t>(_onet_id);
            writer.Number<uint16_t>(_trans_id);
            writer.Number<uint16_t>(_serv_id);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _now_event = reinterpret_cast<Exchange::IDTV::IEitEvent*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IEitEvent::ID));
                _next_event = reinterpret_cast<Exchange::IDTV::IEitEvent*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IEitEvent::ID));
            }

            return (result);
        }

        uint32_t GetScheduleEvents(const uint16_t _onet_id, const uint16_t _trans_id, const uint16_t _serv_id, const uint32_t _start_utc, const uint32_t _end_utc, Exchange::IDTV::IEitEvent::IIterator*& _events) const override
        {
            IPCMessage message(BaseClass::Message(14));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint16_t>(_onet_id);
            writer.Number<uint16_t>(_trans_id);
            writer.Number<uint16_t>(_serv_id);
            writer.Number<uint32_t>(_start_utc);
            writer.Number<uint32_t>(_end_utc);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _events = reinterpret_cast<Exchange::IDTV::IEitEvent::IIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IEitEvent::IIterator::ID));
            }

            return (result);
        }

        uint32_t GetStatus(const int32_t _handle, Exchange::IDTV::IStatus*& _status) const override
        {
            IPCMessage message(BaseClass::Message(15));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<int32_t>(_handle);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _status = reinterpret_cast<Exchange::IDTV::IStatus*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IStatus::ID));
            }

            return (result);
        }

        uint32_t GetServiceInfo(const uint16_t _onet_id, const uint16_t _trans_id, const uint16_t _serv_id, Exchange::IDTV::IService*& _service_info) const override
        {
            IPCMessage message(BaseClass::Message(16));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint16_t>(_onet_id);
            writer.Number<uint16_t>(_trans_id);
            writer.Number<uint16_t>(_serv_id);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _service_info = reinterpret_cast<Exchange::IDTV::IService*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IService::ID));
            }

            return (result);
        }

        uint32_t GetServiceComponents(const uint16_t _onet_id, const uint16_t _trans_id, const uint16_t _serv_id, Exchange::IDTV::IComponent::IIterator*& _components) const override
        {
            IPCMessage message(BaseClass::Message(17));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint16_t>(_onet_id);
            writer.Number<uint16_t>(_trans_id);
            writer.Number<uint16_t>(_serv_id);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _components = reinterpret_cast<Exchange::IDTV::IComponent::IIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IComponent::IIterator::ID));
            }

            return (result);
        }

        uint32_t GetTransportInfo(const uint16_t _onet_id, const uint16_t _trans_id, Exchange::IDTV::ITransport*& _transport_info) const override
        {
            IPCMessage message(BaseClass::Message(18));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint16_t>(_onet_id);
            writer.Number<uint16_t>(_trans_id);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _transport_info = reinterpret_cast<Exchange::IDTV::ITransport*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::ITransport::ID));
            }

            return (result);
        }

        uint32_t GetExtendedEventInfo(const uint16_t _onet_id, const uint16_t _trans_id, const uint16_t _serv_id, const uint16_t _event_id, Exchange::IDTV::IEitExtendedEvent*& _info) const override
        {
            IPCMessage message(BaseClass::Message(19));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint16_t>(_onet_id);
            writer.Number<uint16_t>(_trans_id);
            writer.Number<uint16_t>(_serv_id);
            writer.Number<uint16_t>(_event_id);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _info = reinterpret_cast<Exchange::IDTV::IEitExtendedEvent*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IEitExtendedEvent::ID));
            }

            return (result);
        }

        uint32_t GetSignalInfo(const int32_t _handle, Exchange::IDTV::ISignalInfo*& _info) const override
        {
            IPCMessage message(BaseClass::Message(20));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<int32_t>(_handle);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _info = reinterpret_cast<Exchange::IDTV::ISignalInfo*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::ISignalInfo::ID));
            }

            return (result);
        }

        uint32_t AddLnb(const string _lnb_name, const Exchange::IDTV::ILnb::LnbType _type, const Exchange::IDTV::ILnb::LnbPower _power, const Exchange::IDTV::ILnb::DiseqcTone _tone, const Exchange::IDTV::ILnb::DiseqcCSwitch _cswitch, const bool _is22khz, const bool _is12v, const bool _is_pulse_pos, const bool _is_diseqc_pos, const bool _is_smatv, const uint8_t _diseqc_repeats, const uint8_t _uswitch, const uint8_t _unicable_channel, const uint32_t _unicable_freq) override
        {
            IPCMessage message(BaseClass::Message(21));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_lnb_name);
            writer.Number<Exchange::IDTV::ILnb::LnbType>(_type);
            writer.Number<Exchange::IDTV::ILnb::LnbPower>(_power);
            writer.Number<Exchange::IDTV::ILnb::DiseqcTone>(_tone);
            writer.Number<Exchange::IDTV::ILnb::DiseqcCSwitch>(_cswitch);
            writer.Boolean(_is22khz);
            writer.Boolean(_is12v);
            writer.Boolean(_is_pulse_pos);
            writer.Boolean(_is_diseqc_pos);
            writer.Boolean(_is_smatv);
            writer.Number<uint8_t>(_diseqc_repeats);
            writer.Number<uint8_t>(_uswitch);
            writer.Number<uint8_t>(_unicable_channel);
            writer.Number<uint32_t>(_unicable_freq);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t AddSatellite(const string _sat_name, const int16_t _longitude, const string _lnb_name) override
        {
            IPCMessage message(BaseClass::Message(22));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_sat_name);
            writer.Number<int16_t>(_longitude);
            writer.Text(_lnb_name);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t StartServiceSearch(const Exchange::IDTV::TunerType _tuner_type, const Exchange::IDTV::ServiceSearchType _search_type, const bool _retune) override
        {
            IPCMessage message(BaseClass::Message(23));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::IDTV::TunerType>(_tuner_type);
            writer.Number<Exchange::IDTV::ServiceSearchType>(_search_type);
            writer.Boolean(_retune);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t StartServiceSearch(const Exchange::IDTV::ServiceSearchType _search_type, const bool _retune, const uint32_t _freq_hz, const uint16_t _symbol_rate, const Exchange::IDTV::IDvbcTuningParams::ModulationType _modulation) override
        {
            IPCMessage message(BaseClass::Message(24));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::IDTV::ServiceSearchType>(_search_type);
            writer.Boolean(_retune);
            writer.Number<uint32_t>(_freq_hz);
            writer.Number<uint16_t>(_symbol_rate);
            writer.Number<Exchange::IDTV::IDvbcTuningParams::ModulationType>(_modulation);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t StartServiceSearch(const Exchange::IDTV::ServiceSearchType _search_type, const bool _retune, const string _sat_name, const uint32_t _freq_khz, const Exchange::IDTV::IDvbsTuningParams::PolarityType _polarity, const uint16_t _symbol_rate, const Exchange::IDTV::IDvbsTuningParams::FecType _fec, const Exchange::IDTV::IDvbsTuningParams::ModulationType _modulation, const bool _dvbs2) override
        {
            IPCMessage message(BaseClass::Message(25));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::IDTV::ServiceSearchType>(_search_type);
            writer.Boolean(_retune);
            writer.Text(_sat_name);
            writer.Number<uint32_t>(_freq_khz);
            writer.Number<Exchange::IDTV::IDvbsTuningParams::PolarityType>(_polarity);
            writer.Number<uint16_t>(_symbol_rate);
            writer.Number<Exchange::IDTV::IDvbsTuningParams::FecType>(_fec);
            writer.Number<Exchange::IDTV::IDvbsTuningParams::ModulationType>(_modulation);
            writer.Boolean(_dvbs2);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t StartServiceSearch(const Exchange::IDTV::ServiceSearchType _search_type, const bool _retune, const uint32_t _freq_hz, const Exchange::IDTV::IDvbtTuningParams::BandwidthType _bandwidth, const Exchange::IDTV::IDvbtTuningParams::OfdmModeType _mode, const bool _dvbt2, const uint8_t _plp_id) override
        {
            IPCMessage message(BaseClass::Message(26));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::IDTV::ServiceSearchType>(_search_type);
            writer.Boolean(_retune);
            writer.Number<uint32_t>(_freq_hz);
            writer.Number<Exchange::IDTV::IDvbtTuningParams::BandwidthType>(_bandwidth);
            writer.Number<Exchange::IDTV::IDvbtTuningParams::OfdmModeType>(_mode);
            writer.Boolean(_dvbt2);
            writer.Number<uint8_t>(_plp_id);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t FinishServiceSearch(const Exchange::IDTV::TunerType _tuner_type, const bool _save_changes) override
        {
            IPCMessage message(BaseClass::Message(27));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::IDTV::TunerType>(_tuner_type);
            writer.Boolean(_save_changes);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t StartPlaying(const string _dvburi, const bool _monitor_only, int32_t& _play_handle) override
        {
            IPCMessage message(BaseClass::Message(28));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_dvburi);
            writer.Boolean(_monitor_only);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _play_handle = reader.Number<int32_t>();
            }

            return (result);
        }

        uint32_t StartPlaying(const uint16_t _lcn, const bool _monitor_only, int32_t& _play_handle) override
        {
            IPCMessage message(BaseClass::Message(29));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint16_t>(_lcn);
            writer.Boolean(_monitor_only);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _play_handle = reader.Number<int32_t>();
            }

            return (result);
        }

        uint32_t StopPlaying(const int32_t _play_handle) override
        {
            IPCMessage message(BaseClass::Message(30));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<int32_t>(_play_handle);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVProxy

    //
    // Exchange::IDTV::ICountry interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Name(string&) const = 0
    //  (1) virtual uint32_t Code(uint32_t&) const = 0
    //

    class ExchangeDTVCountryProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::ICountry> {
    public:
        ExchangeDTVCountryProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Name(string& _name) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ICountry>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _name = reader.Text();
            }

            return (result);
        }

        uint32_t Code(uint32_t& _code) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ICountry>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _code = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVCountryProxy

    //
    // Exchange::IDTV::ICountry::IIterator interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::ICountry*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    class ExchangeDTVCountryIteratorProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::ICountry::IIterator> {
    public:
        ExchangeDTVCountryIteratorProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Current(Exchange::IDTV::ICountry*& _country) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ICountry::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _country = reinterpret_cast<Exchange::IDTV::ICountry*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::ICountry::ID));
            }

            return (result);
        }

        uint32_t Next() override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ICountry::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Reset() override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ICountry::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVCountryIteratorProxy

    //
    // Exchange::IDTV::IService interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Fullname(string&) const = 0
    //  (1) virtual uint32_t Shortname(string&) const = 0
    //  (2) virtual uint32_t Dvburi(string&) const = 0
    //  (3) virtual uint32_t Type(Exchange::IDTV::IService::ServiceType&) const = 0
    //  (4) virtual uint32_t Lcn(uint16_t&) const = 0
    //  (5) virtual uint32_t Scrambled(bool&) const = 0
    //  (6) virtual uint32_t HasCaDescriptor(bool&) const = 0
    //  (7) virtual uint32_t Hidden(bool&) const = 0
    //  (8) virtual uint32_t Selectable(bool&) const = 0
    //  (9) virtual uint32_t RunningStatus(Exchange::IDTV::IService::RunState&) const = 0
    //

    class ExchangeDTVServiceProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IService> {
    public:
        ExchangeDTVServiceProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Fullname(string& _fullname) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _fullname = reader.Text();
            }

            return (result);
        }

        uint32_t Shortname(string& _shortname) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _shortname = reader.Text();
            }

            return (result);
        }

        uint32_t Dvburi(string& _dvburi) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _dvburi = reader.Text();
            }

            return (result);
        }

        uint32_t Type(Exchange::IDTV::IService::ServiceType& _type) const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _type = reader.Number<Exchange::IDTV::IService::ServiceType>();
            }

            return (result);
        }

        uint32_t Lcn(uint16_t& _lcn) const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _lcn = reader.Number<uint16_t>();
            }

            return (result);
        }

        uint32_t Scrambled(bool& _scrambled) const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _scrambled = reader.Boolean();
            }

            return (result);
        }

        uint32_t HasCaDescriptor(bool& _has_ca_desc) const override
        {
            IPCMessage message(BaseClass::Message(6));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _has_ca_desc = reader.Boolean();
            }

            return (result);
        }

        uint32_t Hidden(bool& _hidden) const override
        {
            IPCMessage message(BaseClass::Message(7));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _hidden = reader.Boolean();
            }

            return (result);
        }

        uint32_t Selectable(bool& _selectable) const override
        {
            IPCMessage message(BaseClass::Message(8));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _selectable = reader.Boolean();
            }

            return (result);
        }

        uint32_t RunningStatus(Exchange::IDTV::IService::RunState& _run_state) const override
        {
            IPCMessage message(BaseClass::Message(9));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _run_state = reader.Number<Exchange::IDTV::IService::RunState>();
            }

            return (result);
        }

    }; // class ExchangeDTVServiceProxy

    //
    // Exchange::IDTV::IService::IIterator interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::IService*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    class ExchangeDTVServiceIteratorProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IService::IIterator> {
    public:
        ExchangeDTVServiceIteratorProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Current(Exchange::IDTV::IService*& _service) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _service = reinterpret_cast<Exchange::IDTV::IService*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IService::ID));
            }

            return (result);
        }

        uint32_t Next() override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Reset() override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IService::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVServiceIteratorProxy

    //
    // Exchange::IDTV::IDvbcTuningParams interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Frequency(uint32_t&) const = 0
    //  (1) virtual uint32_t SymbolRate(uint16_t&) const = 0
    //  (2) virtual uint32_t Modulation(Exchange::IDTV::IDvbcTuningParams::ModulationType&) const = 0
    //

    class ExchangeDTVDvbcTuningParamsProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbcTuningParams> {
    public:
        ExchangeDTVDvbcTuningParamsProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Frequency(uint32_t& _freq_hz) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbcTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _freq_hz = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t SymbolRate(uint16_t& _sym_rate) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbcTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _sym_rate = reader.Number<uint16_t>();
            }

            return (result);
        }

        uint32_t Modulation(Exchange::IDTV::IDvbcTuningParams::ModulationType& _modulation) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbcTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _modulation = reader.Number<Exchange::IDTV::IDvbcTuningParams::ModulationType>();
            }

            return (result);
        }

    }; // class ExchangeDTVDvbcTuningParamsProxy

    //
    // Exchange::IDTV::IDvbsTuningParams interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Satellite(string&) const = 0
    //  (1) virtual uint32_t Frequency(uint32_t&) const = 0
    //  (2) virtual uint32_t Polarity(Exchange::IDTV::IDvbsTuningParams::PolarityType&) const = 0
    //  (3) virtual uint32_t SymbolRate(uint16_t&) const = 0
    //  (4) virtual uint32_t Fec(Exchange::IDTV::IDvbsTuningParams::FecType&) const = 0
    //  (5) virtual uint32_t Modulation(Exchange::IDTV::IDvbsTuningParams::ModulationType&) const = 0
    //  (6) virtual uint32_t DvbS2(bool&) const = 0
    //

    class ExchangeDTVDvbsTuningParamsProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbsTuningParams> {
    public:
        ExchangeDTVDvbsTuningParamsProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Satellite(string& _sat_name) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbsTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _sat_name = reader.Text();
            }

            return (result);
        }

        uint32_t Frequency(uint32_t& _freq_khz) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbsTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _freq_khz = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Polarity(Exchange::IDTV::IDvbsTuningParams::PolarityType& _polarity) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbsTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _polarity = reader.Number<Exchange::IDTV::IDvbsTuningParams::PolarityType>();
            }

            return (result);
        }

        uint32_t SymbolRate(uint16_t& _sym_rate) const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbsTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _sym_rate = reader.Number<uint16_t>();
            }

            return (result);
        }

        uint32_t Fec(Exchange::IDTV::IDvbsTuningParams::FecType& _fec) const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbsTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _fec = reader.Number<Exchange::IDTV::IDvbsTuningParams::FecType>();
            }

            return (result);
        }

        uint32_t Modulation(Exchange::IDTV::IDvbsTuningParams::ModulationType& _modulation) const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbsTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _modulation = reader.Number<Exchange::IDTV::IDvbsTuningParams::ModulationType>();
            }

            return (result);
        }

        uint32_t DvbS2(bool& _dvbs2) const override
        {
            IPCMessage message(BaseClass::Message(6));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbsTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _dvbs2 = reader.Boolean();
            }

            return (result);
        }

    }; // class ExchangeDTVDvbsTuningParamsProxy

    //
    // Exchange::IDTV::IDvbtTuningParams interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Frequency(uint32_t&) const = 0
    //  (1) virtual uint32_t Bandwidth(Exchange::IDTV::IDvbtTuningParams::BandwidthType&) const = 0
    //  (2) virtual uint32_t OfdmMode(Exchange::IDTV::IDvbtTuningParams::OfdmModeType&) const = 0
    //  (3) virtual uint32_t DvbT2(bool&) const = 0
    //  (4) virtual uint32_t PlpId(uint8_t&) const = 0
    //

    class ExchangeDTVDvbtTuningParamsProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbtTuningParams> {
    public:
        ExchangeDTVDvbtTuningParamsProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Frequency(uint32_t& _freq_hz) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbtTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _freq_hz = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Bandwidth(Exchange::IDTV::IDvbtTuningParams::BandwidthType& _bandwidth) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbtTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _bandwidth = reader.Number<Exchange::IDTV::IDvbtTuningParams::BandwidthType>();
            }

            return (result);
        }

        uint32_t OfdmMode(Exchange::IDTV::IDvbtTuningParams::OfdmModeType& _mode) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbtTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _mode = reader.Number<Exchange::IDTV::IDvbtTuningParams::OfdmModeType>();
            }

            return (result);
        }

        uint32_t DvbT2(bool& _dvbt2) const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbtTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _dvbt2 = reader.Boolean();
            }

            return (result);
        }

        uint32_t PlpId(uint8_t& _plp_id) const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IDvbtTuningParams>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _plp_id = reader.Number<uint8_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVDvbtTuningParamsProxy

    //
    // Exchange::IDTV::ILnb interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Name(string&) const = 0
    //  (1) virtual uint32_t Type(Exchange::IDTV::ILnb::LnbType&) const = 0
    //  (2) virtual uint32_t Power(Exchange::IDTV::ILnb::LnbPower&) const = 0
    //  (3) virtual uint32_t Tone(Exchange::IDTV::ILnb::DiseqcTone&) const = 0
    //  (4) virtual uint32_t CSwitch(Exchange::IDTV::ILnb::DiseqcCSwitch&) const = 0
    //  (5) virtual uint32_t Is22kHz(bool&) const = 0
    //  (6) virtual uint32_t Is12V(bool&) const = 0
    //  (7) virtual uint32_t IsPulsePosition(bool&) const = 0
    //  (8) virtual uint32_t IsDiseqcPosition(bool&) const = 0
    //  (9) virtual uint32_t IsSmatv(bool&) const = 0
    //  (10) virtual uint32_t DiseqcRepeats(uint8_t&) const = 0
    //  (11) virtual uint32_t USwitch(uint8_t&) const = 0
    //  (12) virtual uint32_t UnicableChannel(uint8_t&) const = 0
    //  (13) virtual uint32_t UnicableFreq(uint32_t&) const = 0
    //

    class ExchangeDTVLnbProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb> {
    public:
        ExchangeDTVLnbProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Name(string& _name) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _name = reader.Text();
            }

            return (result);
        }

        uint32_t Type(Exchange::IDTV::ILnb::LnbType& _type) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _type = reader.Number<Exchange::IDTV::ILnb::LnbType>();
            }

            return (result);
        }

        uint32_t Power(Exchange::IDTV::ILnb::LnbPower& _power) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _power = reader.Number<Exchange::IDTV::ILnb::LnbPower>();
            }

            return (result);
        }

        uint32_t Tone(Exchange::IDTV::ILnb::DiseqcTone& _tone) const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _tone = reader.Number<Exchange::IDTV::ILnb::DiseqcTone>();
            }

            return (result);
        }

        uint32_t CSwitch(Exchange::IDTV::ILnb::DiseqcCSwitch& _cswitch) const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _cswitch = reader.Number<Exchange::IDTV::ILnb::DiseqcCSwitch>();
            }

            return (result);
        }

        uint32_t Is22kHz(bool& _is_22khz) const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _is_22khz = reader.Boolean();
            }

            return (result);
        }

        uint32_t Is12V(bool& _is_12v) const override
        {
            IPCMessage message(BaseClass::Message(6));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _is_12v = reader.Boolean();
            }

            return (result);
        }

        uint32_t IsPulsePosition(bool& _is_pulse_pos) const override
        {
            IPCMessage message(BaseClass::Message(7));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _is_pulse_pos = reader.Boolean();
            }

            return (result);
        }

        uint32_t IsDiseqcPosition(bool& _is_diseqc_pos) const override
        {
            IPCMessage message(BaseClass::Message(8));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _is_diseqc_pos = reader.Boolean();
            }

            return (result);
        }

        uint32_t IsSmatv(bool& _is_smatv) const override
        {
            IPCMessage message(BaseClass::Message(9));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _is_smatv = reader.Boolean();
            }

            return (result);
        }

        uint32_t DiseqcRepeats(uint8_t& _repeats) const override
        {
            IPCMessage message(BaseClass::Message(10));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _repeats = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint32_t USwitch(uint8_t& _u_switch) const override
        {
            IPCMessage message(BaseClass::Message(11));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _u_switch = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint32_t UnicableChannel(uint8_t& _channel) const override
        {
            IPCMessage message(BaseClass::Message(12));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _channel = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint32_t UnicableFreq(uint32_t& _freq) const override
        {
            IPCMessage message(BaseClass::Message(13));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _freq = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVLnbProxy

    //
    // Exchange::IDTV::ILnb::IIterator interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::ILnb*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    class ExchangeDTVLnbIteratorProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb::IIterator> {
    public:
        ExchangeDTVLnbIteratorProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Current(Exchange::IDTV::ILnb*& _lnb) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _lnb = reinterpret_cast<Exchange::IDTV::ILnb*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::ILnb::ID));
            }

            return (result);
        }

        uint32_t Next() override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Reset() override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ILnb::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVLnbIteratorProxy

    //
    // Exchange::IDTV::ISatellite interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Name(string&) const = 0
    //  (1) virtual uint32_t Longitude(int16_t&) const = 0
    //  (2) virtual uint32_t Lnb(string&) const = 0
    //

    class ExchangeDTVSatelliteProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::ISatellite> {
    public:
        ExchangeDTVSatelliteProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Name(string& _name) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ISatellite>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _name = reader.Text();
            }

            return (result);
        }

        uint32_t Longitude(int16_t& _longitude) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ISatellite>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _longitude = reader.Number<int16_t>();
            }

            return (result);
        }

        uint32_t Lnb(string& _lnb_name) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ISatellite>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _lnb_name = reader.Text();
            }

            return (result);
        }

    }; // class ExchangeDTVSatelliteProxy

    //
    // Exchange::IDTV::ISatellite::IIterator interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::ISatellite*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    class ExchangeDTVSatelliteIteratorProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::ISatellite::IIterator> {
    public:
        ExchangeDTVSatelliteIteratorProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Current(Exchange::IDTV::ISatellite*& _sat) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ISatellite::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _sat = reinterpret_cast<Exchange::IDTV::ISatellite*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::ISatellite::ID));
            }

            return (result);
        }

        uint32_t Next() override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ISatellite::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Reset() override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ISatellite::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVSatelliteIteratorProxy

    //
    // Exchange::IDTV::IStatus interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Tuner(uint8_t&) const = 0
    //  (1) virtual uint32_t Demux(uint8_t&) const = 0
    //  (2) virtual uint32_t PmtPid(uint16_t&) const = 0
    //  (3) virtual uint32_t Dvburi(string&) const = 0
    //  (4) virtual uint32_t Lcn(uint16_t&) const = 0
    //

    class ExchangeDTVStatusProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IStatus> {
    public:
        ExchangeDTVStatusProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Tuner(uint8_t& _tuner) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IStatus>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _tuner = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint32_t Demux(uint8_t& _demux) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IStatus>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _demux = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint32_t PmtPid(uint16_t& _pid) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IStatus>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _pid = reader.Number<uint16_t>();
            }

            return (result);
        }

        uint32_t Dvburi(string& _dvburi) const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IStatus>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _dvburi = reader.Text();
            }

            return (result);
        }

        uint32_t Lcn(uint16_t& _lcn) const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IStatus>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _lcn = reader.Number<uint16_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVStatusProxy

    //
    // Exchange::IDTV::IEitEvent interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Name(string&) const = 0
    //  (1) virtual uint32_t StartTime(uint32_t&) const = 0
    //  (2) virtual uint32_t Duration(uint32_t&) const = 0
    //  (3) virtual uint32_t EventId(uint16_t&) const = 0
    //  (4) virtual uint32_t ShortDescription(string&) const = 0
    //  (5) virtual uint32_t HasSubtitles(bool&) const = 0
    //  (6) virtual uint32_t HasAudioDescription(bool&) const = 0
    //  (7) virtual uint32_t ParentalRating(uint8_t&) const = 0
    //  (8) virtual uint32_t ContentData(Exchange::IDTV::IEitEvent::IContentData::IIterator*&) const = 0
    //  (9) virtual uint32_t HasExtendedInfo(bool&) const = 0
    //

    class ExchangeDTVEitEventProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent> {
    public:
        ExchangeDTVEitEventProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Name(string& _name) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _name = reader.Text();
            }

            return (result);
        }

        uint32_t StartTime(uint32_t& _start_time) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _start_time = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Duration(uint32_t& _duration) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _duration = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t EventId(uint16_t& _event_id) const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _event_id = reader.Number<uint16_t>();
            }

            return (result);
        }

        uint32_t ShortDescription(string& _description) const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _description = reader.Text();
            }

            return (result);
        }

        uint32_t HasSubtitles(bool& _has_subs) const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _has_subs = reader.Boolean();
            }

            return (result);
        }

        uint32_t HasAudioDescription(bool& _has_ad) const override
        {
            IPCMessage message(BaseClass::Message(6));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _has_ad = reader.Boolean();
            }

            return (result);
        }

        uint32_t ParentalRating(uint8_t& _rating) const override
        {
            IPCMessage message(BaseClass::Message(7));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _rating = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint32_t ContentData(Exchange::IDTV::IEitEvent::IContentData::IIterator*& _content_data) const override
        {
            IPCMessage message(BaseClass::Message(8));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _content_data = reinterpret_cast<Exchange::IDTV::IEitEvent::IContentData::IIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IEitEvent::IContentData::IIterator::ID));
            }

            return (result);
        }

        uint32_t HasExtendedInfo(bool& _extended_info) const override
        {
            IPCMessage message(BaseClass::Message(9));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _extended_info = reader.Boolean();
            }

            return (result);
        }

    }; // class ExchangeDTVEitEventProxy

    //
    // Exchange::IDTV::IEitEvent::IIterator interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::IEitEvent*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    class ExchangeDTVEitEventIteratorProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent::IIterator> {
    public:
        ExchangeDTVEitEventIteratorProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Current(Exchange::IDTV::IEitEvent*& _eit_event) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _eit_event = reinterpret_cast<Exchange::IDTV::IEitEvent*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IEitEvent::ID));
            }

            return (result);
        }

        uint32_t Next() override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Reset() override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVEitEventIteratorProxy

    //
    // Exchange::IDTV::IEitEvent::IContentData interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Value(uint8_t&) const = 0
    //

    class ExchangeDTVEitEventContentDataProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent::IContentData> {
    public:
        ExchangeDTVEitEventContentDataProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Value(uint8_t& _value) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent::IContentData>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _value = reader.Number<uint8_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVEitEventContentDataProxy

    //
    // Exchange::IDTV::IEitEvent::IContentData::IIterator interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::IEitEvent::IContentData*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    class ExchangeDTVEitEventContentDataIteratorProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent::IContentData::IIterator> {
    public:
        ExchangeDTVEitEventContentDataIteratorProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Current(Exchange::IDTV::IEitEvent::IContentData*& _content_data) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent::IContentData::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _content_data = reinterpret_cast<Exchange::IDTV::IEitEvent::IContentData*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IEitEvent::IContentData::ID));
            }

            return (result);
        }

        uint32_t Next() override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent::IContentData::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Reset() override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitEvent::IContentData::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVEitEventContentDataIteratorProxy

    //
    // Exchange::IDTV::IEitExtendedEvent interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Description(string&) const = 0
    //  (1) virtual uint32_t Items(Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator*&) const = 0
    //

    class ExchangeDTVEitExtendedEventProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IEitExtendedEvent> {
    public:
        ExchangeDTVEitExtendedEventProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Description(string& _desc) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitExtendedEvent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _desc = reader.Text();
            }

            return (result);
        }

        uint32_t Items(Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator*& _items) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitExtendedEvent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _items = reinterpret_cast<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator::ID));
            }

            return (result);
        }

    }; // class ExchangeDTVEitExtendedEventProxy

    //
    // Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Description(string&) const = 0
    //  (1) virtual uint32_t Item(string&) const = 0
    //

    class ExchangeDTVEitExtendedEventEitExtendedEventItemProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem> {
    public:
        ExchangeDTVEitExtendedEventEitExtendedEventItemProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Description(string& _desc) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _desc = reader.Text();
            }

            return (result);
        }

        uint32_t Item(string& _item) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _item = reader.Text();
            }

            return (result);
        }

    }; // class ExchangeDTVEitExtendedEventEitExtendedEventItemProxy

    //
    // Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    class ExchangeDTVEitExtendedEventEitExtendedEventItemIteratorProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator> {
    public:
        ExchangeDTVEitExtendedEventEitExtendedEventItemIteratorProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Current(Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem*& _event_item) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _event_item = reinterpret_cast<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::ID));
            }

            return (result);
        }

        uint32_t Next() override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Reset() override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVEitExtendedEventEitExtendedEventItemIteratorProxy

    //
    // Exchange::IDTV::ISignalInfo interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Locked(bool&) const = 0
    //  (1) virtual uint32_t Strength(uint8_t&) const = 0
    //  (2) virtual uint32_t Quality(uint8_t&) const = 0
    //

    class ExchangeDTVSignalInfoProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::ISignalInfo> {
    public:
        ExchangeDTVSignalInfoProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Locked(bool& _locked) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ISignalInfo>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _locked = reader.Boolean();
            }

            return (result);
        }

        uint32_t Strength(uint8_t& _strength) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ISignalInfo>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _strength = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint32_t Quality(uint8_t& _quality) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ISignalInfo>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _quality = reader.Number<uint8_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVSignalInfoProxy

    //
    // Exchange::IDTV::IComponent interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Type(Exchange::IDTV::IComponent::ComponentType&) const = 0
    //  (1) virtual uint32_t Tags(Exchange::IDTV::IComponent::ITag::IIterator*&) const = 0
    //  (2) virtual uint32_t Pid(uint16_t&) const = 0
    //  (3) virtual uint32_t Codec(Exchange::IDTV::IComponent::CodecType&) const = 0
    //  (4) virtual uint32_t Language(string&) const = 0
    //  (5) virtual uint32_t AudioType(Exchange::IDTV::IComponent::AudType&) const = 0
    //  (6) virtual uint32_t AudioMode(Exchange::IDTV::IComponent::AudMode&) const = 0
    //  (7) virtual uint32_t SubtitleFormat(Exchange::IDTV::IComponent::SubFormat&) const = 0
    //  (8) virtual uint32_t CompositionPage(uint16_t&) const = 0
    //  (9) virtual uint32_t AncillaryPage(uint16_t&) const = 0
    //  (10) virtual uint32_t TeletextType(uint8_t&) const = 0
    //  (11) virtual uint32_t TeletextMagazine(uint8_t&) const = 0
    //  (12) virtual uint32_t TeletextPage(uint8_t&) const = 0
    //

    class ExchangeDTVComponentProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent> {
    public:
        ExchangeDTVComponentProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Type(Exchange::IDTV::IComponent::ComponentType& _type) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _type = reader.Number<Exchange::IDTV::IComponent::ComponentType>();
            }

            return (result);
        }

        uint32_t Tags(Exchange::IDTV::IComponent::ITag::IIterator*& _tags) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _tags = reinterpret_cast<Exchange::IDTV::IComponent::ITag::IIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IComponent::ITag::IIterator::ID));
            }

            return (result);
        }

        uint32_t Pid(uint16_t& _pid) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _pid = reader.Number<uint16_t>();
            }

            return (result);
        }

        uint32_t Codec(Exchange::IDTV::IComponent::CodecType& _codec) const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _codec = reader.Number<Exchange::IDTV::IComponent::CodecType>();
            }

            return (result);
        }

        uint32_t Language(string& _lang) const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _lang = reader.Text();
            }

            return (result);
        }

        uint32_t AudioType(Exchange::IDTV::IComponent::AudType& _type) const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _type = reader.Number<Exchange::IDTV::IComponent::AudType>();
            }

            return (result);
        }

        uint32_t AudioMode(Exchange::IDTV::IComponent::AudMode& _mode) const override
        {
            IPCMessage message(BaseClass::Message(6));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _mode = reader.Number<Exchange::IDTV::IComponent::AudMode>();
            }

            return (result);
        }

        uint32_t SubtitleFormat(Exchange::IDTV::IComponent::SubFormat& _format) const override
        {
            IPCMessage message(BaseClass::Message(7));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _format = reader.Number<Exchange::IDTV::IComponent::SubFormat>();
            }

            return (result);
        }

        uint32_t CompositionPage(uint16_t& _page) const override
        {
            IPCMessage message(BaseClass::Message(8));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _page = reader.Number<uint16_t>();
            }

            return (result);
        }

        uint32_t AncillaryPage(uint16_t& _page) const override
        {
            IPCMessage message(BaseClass::Message(9));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _page = reader.Number<uint16_t>();
            }

            return (result);
        }

        uint32_t TeletextType(uint8_t& _type) const override
        {
            IPCMessage message(BaseClass::Message(10));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _type = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint32_t TeletextMagazine(uint8_t& _magazine) const override
        {
            IPCMessage message(BaseClass::Message(11));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _magazine = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint32_t TeletextPage(uint8_t& _page) const override
        {
            IPCMessage message(BaseClass::Message(12));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _page = reader.Number<uint8_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVComponentProxy

    //
    // Exchange::IDTV::IComponent::IIterator interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::IComponent*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    class ExchangeDTVComponentIteratorProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent::IIterator> {
    public:
        ExchangeDTVComponentIteratorProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Current(Exchange::IDTV::IComponent*& _comp) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _comp = reinterpret_cast<Exchange::IDTV::IComponent*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IComponent::ID));
            }

            return (result);
        }

        uint32_t Next() override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Reset() override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVComponentIteratorProxy

    //
    // Exchange::IDTV::IComponent::ITag interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Tag(uint8_t&) const = 0
    //

    class ExchangeDTVComponentTagProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent::ITag> {
    public:
        ExchangeDTVComponentTagProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Tag(uint8_t& _value) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent::ITag>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _value = reader.Number<uint8_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVComponentTagProxy

    //
    // Exchange::IDTV::IComponent::ITag::IIterator interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Current(Exchange::IDTV::IComponent::ITag*&) const = 0
    //  (1) virtual uint32_t Next() = 0
    //  (2) virtual uint32_t Reset() = 0
    //

    class ExchangeDTVComponentTagIteratorProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent::ITag::IIterator> {
    public:
        ExchangeDTVComponentTagIteratorProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Current(Exchange::IDTV::IComponent::ITag*& _tag) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent::ITag::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _tag = reinterpret_cast<Exchange::IDTV::IComponent::ITag*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IComponent::ITag::ID));
            }

            return (result);
        }

        uint32_t Next() override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent::ITag::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Reset() override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::IComponent::ITag::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeDTVComponentTagIteratorProxy

    //
    // Exchange::IDTV::ITransport interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Tuner(Exchange::IDTV::TunerType&) const = 0
    //  (1) virtual uint32_t OriginalNetworkId(uint16_t&) const = 0
    //  (2) virtual uint32_t TransportId(uint16_t&) const = 0
    //  (3) virtual uint32_t SignalStrength(uint8_t&) const = 0
    //  (4) virtual uint32_t SignalQuality(uint8_t&) const = 0
    //  (5) virtual uint32_t TuningParamsDvbc(Exchange::IDTV::IDvbcTuningParams*&) const = 0
    //  (6) virtual uint32_t TuningParamsDvbs(Exchange::IDTV::IDvbsTuningParams*&) const = 0
    //  (7) virtual uint32_t TuningParamsDvbt(Exchange::IDTV::IDvbtTuningParams*&) const = 0
    //

    class ExchangeDTVTransportProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::ITransport> {
    public:
        ExchangeDTVTransportProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Tuner(Exchange::IDTV::TunerType& _type) const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ITransport>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _type = reader.Number<Exchange::IDTV::TunerType>();
            }

            return (result);
        }

        uint32_t OriginalNetworkId(uint16_t& _onet_id) const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ITransport>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _onet_id = reader.Number<uint16_t>();
            }

            return (result);
        }

        uint32_t TransportId(uint16_t& _trans_id) const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ITransport>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _trans_id = reader.Number<uint16_t>();
            }

            return (result);
        }

        uint32_t SignalStrength(uint8_t& _strength) const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ITransport>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _strength = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint32_t SignalQuality(uint8_t& _quality) const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ITransport>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _quality = reader.Number<uint8_t>();
            }

            return (result);
        }

        uint32_t TuningParamsDvbc(Exchange::IDTV::IDvbcTuningParams*& _params) const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ITransport>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _params = reinterpret_cast<Exchange::IDTV::IDvbcTuningParams*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IDvbcTuningParams::ID));
            }

            return (result);
        }

        uint32_t TuningParamsDvbs(Exchange::IDTV::IDvbsTuningParams*& _params) const override
        {
            IPCMessage message(BaseClass::Message(6));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ITransport>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _params = reinterpret_cast<Exchange::IDTV::IDvbsTuningParams*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IDvbsTuningParams::ID));
            }

            return (result);
        }

        uint32_t TuningParamsDvbt(Exchange::IDTV::IDvbtTuningParams*& _params) const override
        {
            IPCMessage message(BaseClass::Message(7));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::ITransport>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                _params = reinterpret_cast<Exchange::IDTV::IDvbtTuningParams*>(Interface(reader.Number<Core::instance_id>(), Exchange::IDTV::IDvbtTuningParams::ID));
            }

            return (result);
        }

    }; // class ExchangeDTVTransportProxy

    //
    // Exchange::IDTV::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void SearchEvent(const uint8_t, const bool, const uint8_t) = 0
    //  (1) virtual void ServiceEvent(const Exchange::IDTV::INotification::ServiceEventType, const Exchange::IDTV::IService*, const Exchange::IDTV::IEitEvent*) = 0
    //

    class ExchangeDTVNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::IDTV::INotification> {
    public:
        ExchangeDTVNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void SearchEvent(const uint8_t _handle, const bool _finished, const uint8_t _progress) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint8_t>(_handle);
            writer.Boolean(_finished);
            writer.Number<uint8_t>(_progress);

            ProxyStub::UnknownProxyType<Exchange::IDTV::INotification>::Invoke(message);
        }

        void ServiceEvent(const Exchange::IDTV::INotification::ServiceEventType _event_type, const Exchange::IDTV::IService* _service, const Exchange::IDTV::IEitEvent* _eit_event) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::IDTV::INotification::ServiceEventType>(_event_type);
            writer.Number<Core::instance_id>(RPC::instance_cast(_service));
            writer.Number<Core::instance_id>(RPC::instance_cast(nullptr));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IDTV::INotification>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

    }; // class ExchangeDTVNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IDTV, ExchangeDTVStubMethods> ExchangeDTVStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::ICountry, ExchangeDTVCountryStubMethods> ExchangeDTVCountryStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::ICountry::IIterator, ExchangeDTVCountryIteratorStubMethods> ExchangeDTVCountryIteratorStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IService, ExchangeDTVServiceStubMethods> ExchangeDTVServiceStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IService::IIterator, ExchangeDTVServiceIteratorStubMethods> ExchangeDTVServiceIteratorStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IDvbcTuningParams, ExchangeDTVDvbcTuningParamsStubMethods> ExchangeDTVDvbcTuningParamsStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IDvbsTuningParams, ExchangeDTVDvbsTuningParamsStubMethods> ExchangeDTVDvbsTuningParamsStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IDvbtTuningParams, ExchangeDTVDvbtTuningParamsStubMethods> ExchangeDTVDvbtTuningParamsStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::ILnb, ExchangeDTVLnbStubMethods> ExchangeDTVLnbStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::ILnb::IIterator, ExchangeDTVLnbIteratorStubMethods> ExchangeDTVLnbIteratorStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::ISatellite, ExchangeDTVSatelliteStubMethods> ExchangeDTVSatelliteStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::ISatellite::IIterator, ExchangeDTVSatelliteIteratorStubMethods> ExchangeDTVSatelliteIteratorStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IStatus, ExchangeDTVStatusStubMethods> ExchangeDTVStatusStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IEitEvent, ExchangeDTVEitEventStubMethods> ExchangeDTVEitEventStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IEitEvent::IIterator, ExchangeDTVEitEventIteratorStubMethods> ExchangeDTVEitEventIteratorStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IEitEvent::IContentData, ExchangeDTVEitEventContentDataStubMethods> ExchangeDTVEitEventContentDataStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IEitEvent::IContentData::IIterator, ExchangeDTVEitEventContentDataIteratorStubMethods> ExchangeDTVEitEventContentDataIteratorStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IEitExtendedEvent, ExchangeDTVEitExtendedEventStubMethods> ExchangeDTVEitExtendedEventStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem, ExchangeDTVEitExtendedEventEitExtendedEventItemStubMethods> ExchangeDTVEitExtendedEventEitExtendedEventItemStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator, ExchangeDTVEitExtendedEventEitExtendedEventItemIteratorStubMethods> ExchangeDTVEitExtendedEventEitExtendedEventItemIteratorStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::ISignalInfo, ExchangeDTVSignalInfoStubMethods> ExchangeDTVSignalInfoStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IComponent, ExchangeDTVComponentStubMethods> ExchangeDTVComponentStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IComponent::IIterator, ExchangeDTVComponentIteratorStubMethods> ExchangeDTVComponentIteratorStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IComponent::ITag, ExchangeDTVComponentTagStubMethods> ExchangeDTVComponentTagStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::IComponent::ITag::IIterator, ExchangeDTVComponentTagIteratorStubMethods> ExchangeDTVComponentTagIteratorStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::ITransport, ExchangeDTVTransportStubMethods> ExchangeDTVTransportStub;
        typedef ProxyStub::UnknownStubType<Exchange::IDTV::INotification, ExchangeDTVNotificationStubMethods> ExchangeDTVNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IDTV, ExchangeDTVProxy, ExchangeDTVStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::ICountry, ExchangeDTVCountryProxy, ExchangeDTVCountryStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::ICountry::IIterator, ExchangeDTVCountryIteratorProxy, ExchangeDTVCountryIteratorStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IService, ExchangeDTVServiceProxy, ExchangeDTVServiceStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IService::IIterator, ExchangeDTVServiceIteratorProxy, ExchangeDTVServiceIteratorStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IDvbcTuningParams, ExchangeDTVDvbcTuningParamsProxy, ExchangeDTVDvbcTuningParamsStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IDvbsTuningParams, ExchangeDTVDvbsTuningParamsProxy, ExchangeDTVDvbsTuningParamsStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IDvbtTuningParams, ExchangeDTVDvbtTuningParamsProxy, ExchangeDTVDvbtTuningParamsStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::ILnb, ExchangeDTVLnbProxy, ExchangeDTVLnbStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::ILnb::IIterator, ExchangeDTVLnbIteratorProxy, ExchangeDTVLnbIteratorStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::ISatellite, ExchangeDTVSatelliteProxy, ExchangeDTVSatelliteStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::ISatellite::IIterator, ExchangeDTVSatelliteIteratorProxy, ExchangeDTVSatelliteIteratorStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IStatus, ExchangeDTVStatusProxy, ExchangeDTVStatusStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IEitEvent, ExchangeDTVEitEventProxy, ExchangeDTVEitEventStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IEitEvent::IIterator, ExchangeDTVEitEventIteratorProxy, ExchangeDTVEitEventIteratorStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IEitEvent::IContentData, ExchangeDTVEitEventContentDataProxy, ExchangeDTVEitEventContentDataStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IEitEvent::IContentData::IIterator, ExchangeDTVEitEventContentDataIteratorProxy, ExchangeDTVEitEventContentDataIteratorStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IEitExtendedEvent, ExchangeDTVEitExtendedEventProxy, ExchangeDTVEitExtendedEventStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem, ExchangeDTVEitExtendedEventEitExtendedEventItemProxy, ExchangeDTVEitExtendedEventEitExtendedEventItemStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator, ExchangeDTVEitExtendedEventEitExtendedEventItemIteratorProxy, ExchangeDTVEitExtendedEventEitExtendedEventItemIteratorStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::ISignalInfo, ExchangeDTVSignalInfoProxy, ExchangeDTVSignalInfoStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IComponent, ExchangeDTVComponentProxy, ExchangeDTVComponentStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IComponent::IIterator, ExchangeDTVComponentIteratorProxy, ExchangeDTVComponentIteratorStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IComponent::ITag, ExchangeDTVComponentTagProxy, ExchangeDTVComponentTagStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::IComponent::ITag::IIterator, ExchangeDTVComponentTagIteratorProxy, ExchangeDTVComponentTagIteratorStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::ITransport, ExchangeDTVTransportProxy, ExchangeDTVTransportStub>();
                RPC::Administrator::Instance().Announce<Exchange::IDTV::INotification, ExchangeDTVNotificationProxy, ExchangeDTVNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IDTV>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::ICountry>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::ICountry::IIterator>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IService>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IService::IIterator>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IDvbcTuningParams>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IDvbsTuningParams>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IDvbtTuningParams>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::ILnb>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::ILnb::IIterator>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::ISatellite>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::ISatellite::IIterator>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IStatus>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IEitEvent>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IEitEvent::IIterator>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IEitEvent::IContentData>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IEitEvent::IContentData::IIterator>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IEitExtendedEvent>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IEitExtendedEvent::IEitExtendedEventItem::IIterator>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::ISignalInfo>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IComponent>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IComponent::IIterator>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IComponent::ITag>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::IComponent::ITag::IIterator>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::ITransport>();
                RPC::Administrator::Instance().Recall<Exchange::IDTV::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
