// Enumeration code for Device Info API JSON-RPC API.
// Generated automatically from 'DeviceInfo.json'.

#include <core/Enumerate.h>

#include "definitions.h"
#include "JsonData_DeviceInfo.h"

namespace WPEFramework {

ENUM_CONVERSION_BEGIN(JsonData::DeviceInfo::Output_resolutionType)
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_UNKNOWN, _TXT("unknown") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_480I, _TXT("480i") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_480P, _TXT("480p") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_576I, _TXT("576i") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_576P, _TXT("576p") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_576P50, _TXT("576p50") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_720P, _TXT("720p") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_720P24, _TXT("720p24") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_720P25, _TXT("720p25") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_720P30, _TXT("720p30") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_720P50, _TXT("720p50") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_720P60, _TXT("720p60") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_1080I, _TXT("1080i") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_1080I25, _TXT("1080i25") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_1080I50, _TXT("1080i50") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_1080I60, _TXT("1080i60") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_1080P, _TXT("1080p") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_1080P24, _TXT("1080p24") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_1080P25, _TXT("1080p25") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_1080P30, _TXT("1080p30") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_1080P50, _TXT("1080p50") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_1080P60, _TXT("1080p60") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_2160P24, _TXT("2160p24") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_2160P25, _TXT("2160p25") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_2160P30, _TXT("2160p30") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_2160P50, _TXT("2160p50") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_2160P60, _TXT("2160p60") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_4320P30, _TXT("4320p30") },
    { JsonData::DeviceInfo::Output_resolutionType::RESOLUTION_4320P60, _TXT("4320p60") },
ENUM_CONVERSION_END(JsonData::DeviceInfo::Output_resolutionType);

ENUM_CONVERSION_BEGIN(JsonData::DeviceInfo::SupportedhdcpResultData::Copy_protectionType)
    { JsonData::DeviceInfo::SupportedhdcpResultData::Copy_protectionType::HDCP_UNAVAILABLE, _TXT("unavailable") },
    { JsonData::DeviceInfo::SupportedhdcpResultData::Copy_protectionType::HDCP_14, _TXT("1.4") },
    { JsonData::DeviceInfo::SupportedhdcpResultData::Copy_protectionType::HDCP_20, _TXT("2.0") },
    { JsonData::DeviceInfo::SupportedhdcpResultData::Copy_protectionType::HDCP_21, _TXT("2.1") },
    { JsonData::DeviceInfo::SupportedhdcpResultData::Copy_protectionType::HDCP_22, _TXT("2.2") },
ENUM_CONVERSION_END(JsonData::DeviceInfo::SupportedhdcpResultData::Copy_protectionType);

ENUM_CONVERSION_BEGIN(JsonData::DeviceInfo::AudiocapabilitiesResultData::AudiocapabilityType)
    { JsonData::DeviceInfo::AudiocapabilitiesResultData::AudiocapabilityType::NONE, _TXT("none") },
    { JsonData::DeviceInfo::AudiocapabilitiesResultData::AudiocapabilityType::ATMOS, _TXT("ATMOS") },
    { JsonData::DeviceInfo::AudiocapabilitiesResultData::AudiocapabilityType::DD, _TXT("DOLBY DIGITAL") },
    { JsonData::DeviceInfo::AudiocapabilitiesResultData::AudiocapabilityType::DDPLUS, _TXT("DOLBY DIGITAL PLUS") },
    { JsonData::DeviceInfo::AudiocapabilitiesResultData::AudiocapabilityType::DAD, _TXT("Dual Audio Decode") },
    { JsonData::DeviceInfo::AudiocapabilitiesResultData::AudiocapabilityType::DAPV2, _TXT("DAPv2") },
    { JsonData::DeviceInfo::AudiocapabilitiesResultData::AudiocapabilityType::MS12, _TXT("MS12") },
ENUM_CONVERSION_END(JsonData::DeviceInfo::AudiocapabilitiesResultData::AudiocapabilityType);

ENUM_CONVERSION_BEGIN(JsonData::DeviceInfo::Ms12capabilitiesResultData::Ms12capabilityType)
    { JsonData::DeviceInfo::Ms12capabilitiesResultData::Ms12capabilityType::NONE, _TXT("none") },
    { JsonData::DeviceInfo::Ms12capabilitiesResultData::Ms12capabilityType::DOLBYVOLUME, _TXT("Dolby Volume") },
    { JsonData::DeviceInfo::Ms12capabilitiesResultData::Ms12capabilityType::INTELIGENTEQUALIZER, _TXT("Inteligent Equalizer") },
    { JsonData::DeviceInfo::Ms12capabilitiesResultData::Ms12capabilityType::DIALOGUEENHANCER, _TXT("Dialogue Enhancer") },
ENUM_CONVERSION_END(JsonData::DeviceInfo::Ms12capabilitiesResultData::Ms12capabilityType);

ENUM_CONVERSION_BEGIN(JsonData::DeviceInfo::FirmwareversionData::YoctoType)
    { JsonData::DeviceInfo::FirmwareversionData::YoctoType::DUNFELL, _TXT("dunfell") },
    { JsonData::DeviceInfo::FirmwareversionData::YoctoType::MORTY, _TXT("morty") },
    { JsonData::DeviceInfo::FirmwareversionData::YoctoType::DAISY, _TXT("daisy") },
ENUM_CONVERSION_END(JsonData::DeviceInfo::FirmwareversionData::YoctoType);

ENUM_CONVERSION_BEGIN(JsonData::DeviceInfo::ModelidData::SkuType)
    { JsonData::DeviceInfo::ModelidData::SkuType::PLTL11AEI, _TXT("PLTL11AEI") },
    { JsonData::DeviceInfo::ModelidData::SkuType::ZWCN11MWI, _TXT("ZWCN11MWI") },
    { JsonData::DeviceInfo::ModelidData::SkuType::SKTL11AEI, _TXT("SKTL11AEI") },
    { JsonData::DeviceInfo::ModelidData::SkuType::LS301, _TXT("LS301") },
    { JsonData::DeviceInfo::ModelidData::SkuType::HSTP11MWR, _TXT("HSTP11MWR") },
    { JsonData::DeviceInfo::ModelidData::SkuType::HSTP11MWRFX50, _TXT("HSTP11MWRFX50") },
    { JsonData::DeviceInfo::ModelidData::SkuType::ELTE11MWR, _TXT("ELTE11MWR") },
    { JsonData::DeviceInfo::ModelidData::SkuType::SKXI11ADS, _TXT("SKXI11ADS") },
    { JsonData::DeviceInfo::ModelidData::SkuType::SKXI11AIS, _TXT("SKXI11AIS") },
    { JsonData::DeviceInfo::ModelidData::SkuType::SKXI11ANS, _TXT("SKXI11ANS") },
    { JsonData::DeviceInfo::ModelidData::SkuType::SCXI11AIC, _TXT("SCXI11AIC") },
    { JsonData::DeviceInfo::ModelidData::SkuType::SCXI11BEI, _TXT("SCXI11BEI") },
    { JsonData::DeviceInfo::ModelidData::SkuType::CMXI11BEI, _TXT("CMXI11BEI") },
    { JsonData::DeviceInfo::ModelidData::SkuType::AX013AN, _TXT("AX013AN") },
    { JsonData::DeviceInfo::ModelidData::SkuType::AX014AN, _TXT("AX014AN") },
    { JsonData::DeviceInfo::ModelidData::SkuType::AX061AEI, _TXT("AX061AEI") },
    { JsonData::DeviceInfo::ModelidData::SkuType::MX011AN, _TXT("MX011AN") },
    { JsonData::DeviceInfo::ModelidData::SkuType::CS011AN, _TXT("CS011AN") },
    { JsonData::DeviceInfo::ModelidData::SkuType::CXD01ANI, _TXT("CXD01ANI") },
    { JsonData::DeviceInfo::ModelidData::SkuType::PX001AN, _TXT("PX001AN") },
    { JsonData::DeviceInfo::ModelidData::SkuType::PX013AN, _TXT("PX013AN") },
    { JsonData::DeviceInfo::ModelidData::SkuType::PX022AN, _TXT("PX022AN") },
    { JsonData::DeviceInfo::ModelidData::SkuType::PX032ANI, _TXT("PX032ANI") },
    { JsonData::DeviceInfo::ModelidData::SkuType::PX051AEI, _TXT("PX051AEI") },
    { JsonData::DeviceInfo::ModelidData::SkuType::PXD01ANI, _TXT("PXD01ANI") },
    { JsonData::DeviceInfo::ModelidData::SkuType::SX022AN, _TXT("SX022AN") },
    { JsonData::DeviceInfo::ModelidData::SkuType::TX061AEI, _TXT("TX061AEI") },
    { JsonData::DeviceInfo::ModelidData::SkuType::XUSHTC11MWR, _TXT("XUSHTC11MWR") },
ENUM_CONVERSION_END(JsonData::DeviceInfo::ModelidData::SkuType);

ENUM_CONVERSION_BEGIN(JsonData::DeviceInfo::MakeData::MakeType)
    { JsonData::DeviceInfo::MakeData::MakeType::PLATCO, _TXT("platco") },
    { JsonData::DeviceInfo::MakeData::MakeType::LLAMA, _TXT("llama") },
    { JsonData::DeviceInfo::MakeData::MakeType::HISENSE, _TXT("hisense") },
    { JsonData::DeviceInfo::MakeData::MakeType::ELEMENT, _TXT("element") },
    { JsonData::DeviceInfo::MakeData::MakeType::SKY, _TXT("sky") },
    { JsonData::DeviceInfo::MakeData::MakeType::SERCOMM, _TXT("sercomm") },
    { JsonData::DeviceInfo::MakeData::MakeType::COMMSCOPE, _TXT("commscope") },
    { JsonData::DeviceInfo::MakeData::MakeType::ARRIS, _TXT("arris") },
    { JsonData::DeviceInfo::MakeData::MakeType::CISCO, _TXT("cisco") },
    { JsonData::DeviceInfo::MakeData::MakeType::PACE, _TXT("pace") },
    { JsonData::DeviceInfo::MakeData::MakeType::SAMSUNG, _TXT("samsung") },
    { JsonData::DeviceInfo::MakeData::MakeType::TECHNICOLOR, _TXT("technicolor") },
    { JsonData::DeviceInfo::MakeData::MakeType::AMLOGIC_INC, _TXT("Amlogic_Inc") },
ENUM_CONVERSION_END(JsonData::DeviceInfo::MakeData::MakeType);

ENUM_CONVERSION_BEGIN(JsonData::DeviceInfo::DevicetypeData::DevicetypeType)
    { JsonData::DeviceInfo::DevicetypeData::DevicetypeType::TV, _TXT("tv") },
    { JsonData::DeviceInfo::DevicetypeData::DevicetypeType::IPSTB, _TXT("IpStb") },
    { JsonData::DeviceInfo::DevicetypeData::DevicetypeType::QAMIPSTB, _TXT("QamIpStb") },
ENUM_CONVERSION_END(JsonData::DeviceInfo::DevicetypeData::DevicetypeType);

ENUM_CONVERSION_BEGIN(JsonData::DeviceInfo::DistributoridData::DistributoridType)
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::COMCAST, _TXT("comcast") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::XGLOBAL, _TXT("xglobal") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::SKY_DE, _TXT("sky-de") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::SKY_ITALIA, _TXT("sky-italia") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::SKY_UK, _TXT("sky-uk") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::SKY_UK_DEV, _TXT("sky-uk-dev") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::SKY_DEU, _TXT("sky-deu") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::SKY_DEU_DEV, _TXT("sky-deu-dev") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::SKY_IT, _TXT("sky-it") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::SKY_IT_DEV, _TXT("sky-it-dev") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::COX, _TXT("cox") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::COX_HOSPITALITY, _TXT("cox-hospitality") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::COX_DEV, _TXT("cox-dev") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::COX_QA, _TXT("cox-qa") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::MIT, _TXT("MIT") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::SHAW, _TXT("shaw") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::SHAW_DEV, _TXT("shaw-dev") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::ROGERS, _TXT("rogers") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::ROGERS_DEV, _TXT("rogers-dev") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::VIDEOTRON, _TXT("videotron") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::CHARTER, _TXT("charter") },
    { JsonData::DeviceInfo::DistributoridData::DistributoridType::CHARTER_DEV, _TXT("charter-dev") },
ENUM_CONVERSION_END(JsonData::DeviceInfo::DistributoridData::DistributoridType);

}
