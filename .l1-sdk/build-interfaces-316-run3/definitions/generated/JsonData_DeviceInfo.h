// C++ classes for Device Info API JSON-RPC API.
// Generated automatically from 'DeviceInfo.json'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>
#include <core/Enumerate.h>

namespace WPEFramework {

namespace JsonData {

    namespace DeviceInfo {

        // Common enums
        //

        // Resolution supported by the STB
        enum class Output_resolutionType : uint8_t {
            RESOLUTION_UNKNOWN,
            RESOLUTION_480I,
            RESOLUTION_480P,
            RESOLUTION_576I,
            RESOLUTION_576P,
            RESOLUTION_576P50,
            RESOLUTION_720P,
            RESOLUTION_720P24,
            RESOLUTION_720P25,
            RESOLUTION_720P30,
            RESOLUTION_720P50,
            RESOLUTION_720P60,
            RESOLUTION_1080I,
            RESOLUTION_1080I25,
            RESOLUTION_1080I50,
            RESOLUTION_1080I60,
            RESOLUTION_1080P,
            RESOLUTION_1080P24,
            RESOLUTION_1080P25,
            RESOLUTION_1080P30,
            RESOLUTION_1080P50,
            RESOLUTION_1080P60,
            RESOLUTION_2160P24,
            RESOLUTION_2160P25,
            RESOLUTION_2160P30,
            RESOLUTION_2160P50,
            RESOLUTION_2160P60,
            RESOLUTION_4320P30,
            RESOLUTION_4320P60
        };

        // Common classes
        //

        class AudiocapabilitiesParamsInfo : public Core::JSON::Container {
        public:
            AudiocapabilitiesParamsInfo()
                : Core::JSON::Container()
            {
                Add(_T("audioPort"), &AudioPort);
            }

            AudiocapabilitiesParamsInfo(const AudiocapabilitiesParamsInfo&) = delete;
            AudiocapabilitiesParamsInfo& operator=(const AudiocapabilitiesParamsInfo&) = delete;

        public:
            Core::JSON::String AudioPort; // Audio port name
        }; // class AudiocapabilitiesParamsInfo

        class SupportedresolutionsParamsInfo : public Core::JSON::Container {
        public:
            SupportedresolutionsParamsInfo()
                : Core::JSON::Container()
            {
                Add(_T("videoDisplay"), &VideoDisplay);
            }

            SupportedresolutionsParamsInfo(const SupportedresolutionsParamsInfo&) = delete;
            SupportedresolutionsParamsInfo& operator=(const SupportedresolutionsParamsInfo&) = delete;

        public:
            Core::JSON::String VideoDisplay; // Video display port name
        }; // class SupportedresolutionsParamsInfo

        // Method params/result classes
        //

        class AddressesData : public Core::JSON::Container {
        public:
            AddressesData()
                : Core::JSON::Container()
            {
                _Init();
            }

            AddressesData(const AddressesData& _other)
                : Core::JSON::Container()
                , Name(_other.Name)
                , Mac(_other.Mac)
                , Ip(_other.Ip)
            {
                _Init();
            }

            AddressesData& operator=(const AddressesData& _rhs)
            {
                Name = _rhs.Name;
                Mac = _rhs.Mac;
                Ip = _rhs.Ip;
                return (*this);
            }

        private:
            void _Init()
            {
                Add(_T("name"), &Name);
                Add(_T("mac"), &Mac);
                Add(_T("ip"), &Ip);
            }

        public:
            Core::JSON::String Name; // Interface name
            Core::JSON::String Mac; // Interface MAC address
            Core::JSON::ArrayType<Core::JSON::String> Ip;
        }; // class AddressesData

        class AudiocapabilitiesResultData : public Core::JSON::Container {
        public:
            // Audio capability
            enum class AudiocapabilityType : uint8_t {
                NONE,
                ATMOS,
                DD,
                DDPLUS,
                DAD,
                DAPV2,
                MS12
            };

            AudiocapabilitiesResultData()
                : Core::JSON::Container()
            {
                Add(_T("AudioCapabilities"), &AudioCapabilities);
            }

            AudiocapabilitiesResultData(const AudiocapabilitiesResultData&) = delete;
            AudiocapabilitiesResultData& operator=(const AudiocapabilitiesResultData&) = delete;

        public:
            Core::JSON::ArrayType<Core::JSON::EnumType<AudiocapabilitiesResultData::AudiocapabilityType>> AudioCapabilities;
        }; // class AudiocapabilitiesResultData

        class BrandnameData : public Core::JSON::Container {
        public:
            BrandnameData()
                : Core::JSON::Container()
            {
                Add(_T("brand"), &Brand);
            }

            BrandnameData(const BrandnameData&) = delete;
            BrandnameData& operator=(const BrandnameData&) = delete;

        public:
            Core::JSON::String Brand;
        }; // class BrandnameData

        class ChipsetData : public Core::JSON::Container {
        public:
            ChipsetData()
                : Core::JSON::Container()
            {
                Add(_T("chipset"), &Chipset);
            }

            ChipsetData(const ChipsetData&) = delete;
            ChipsetData& operator=(const ChipsetData&) = delete;

        public:
            Core::JSON::String Chipset;
        }; // class ChipsetData

        class DefaultresolutionResultData : public Core::JSON::Container {
        public:
            DefaultresolutionResultData()
                : Core::JSON::Container()
            {
                Add(_T("defaultResolution"), &DefaultResolution);
            }

            DefaultresolutionResultData(const DefaultresolutionResultData&) = delete;
            DefaultresolutionResultData& operator=(const DefaultresolutionResultData&) = delete;

        public:
            Core::JSON::EnumType<Output_resolutionType> DefaultResolution; // Resolution supported by the STB
        }; // class DefaultresolutionResultData

        class DevicetypeData : public Core::JSON::Container {
        public:
            // Device type
            enum class DevicetypeType : uint8_t {
                TV,
                IPSTB,
                QAMIPSTB
            };

            DevicetypeData()
                : Core::JSON::Container()
            {
                Add(_T("devicetype"), &Devicetype);
            }

            DevicetypeData(const DevicetypeData&) = delete;
            DevicetypeData& operator=(const DevicetypeData&) = delete;

        public:
            Core::JSON::EnumType<DevicetypeData::DevicetypeType> Devicetype; // Device type
        }; // class DevicetypeData

        class DistributoridData : public Core::JSON::Container {
        public:
            // Partner ID or distributor ID for device
            enum class DistributoridType : uint8_t {
                COMCAST,
                XGLOBAL,
                SKY_DE,
                SKY_ITALIA,
                SKY_UK,
                SKY_UK_DEV,
                SKY_DEU,
                SKY_DEU_DEV,
                SKY_IT,
                SKY_IT_DEV,
                COX,
                COX_HOSPITALITY,
                COX_DEV,
                COX_QA,
                MIT,
                SHAW,
                SHAW_DEV,
                ROGERS,
                ROGERS_DEV,
                VIDEOTRON,
                CHARTER,
                CHARTER_DEV
            };

            DistributoridData()
                : Core::JSON::Container()
            {
                Add(_T("distributorid"), &Distributorid);
            }

            DistributoridData(const DistributoridData&) = delete;
            DistributoridData& operator=(const DistributoridData&) = delete;

        public:
            Core::JSON::EnumType<DistributoridData::DistributoridType> Distributorid; // Partner ID or distributor ID for device
        }; // class DistributoridData

        class FirmwareversionData : public Core::JSON::Container {
        public:
            // Yocto version
            enum class YoctoType : uint8_t {
                DUNFELL,
                MORTY,
                DAISY
            };

            FirmwareversionData()
                : Core::JSON::Container()
            {
                Add(_T("imagename"), &Imagename);
                Add(_T("sdk"), &Sdk);
                Add(_T("mediarite"), &Mediarite);
                Add(_T("yocto"), &Yocto);
                Add(_T("pdri"), &Pdri);
            }

            FirmwareversionData(const FirmwareversionData&) = delete;
            FirmwareversionData& operator=(const FirmwareversionData&) = delete;

        public:
            Core::JSON::String Imagename;
            Core::JSON::String Sdk;
            Core::JSON::String Mediarite;
            Core::JSON::EnumType<FirmwareversionData::YoctoType> Yocto; // Yocto version
            Core::JSON::String Pdri;
        }; // class FirmwareversionData

        class HostedidData : public Core::JSON::Container {
        public:
            HostedidData()
                : Core::JSON::Container()
            {
                Add(_T("EDID"), &EDID);
            }

            HostedidData(const HostedidData&) = delete;
            HostedidData& operator=(const HostedidData&) = delete;

        public:
            Core::JSON::String EDID;
        }; // class HostedidData

        class MakeData : public Core::JSON::Container {
        public:
            // Device manufacturer
            enum class MakeType : uint8_t {
                PLATCO,
                LLAMA,
                HISENSE,
                ELEMENT,
                SKY,
                SERCOMM,
                COMMSCOPE,
                ARRIS,
                CISCO,
                PACE,
                SAMSUNG,
                TECHNICOLOR,
                AMLOGIC_INC
            };

            MakeData()
                : Core::JSON::Container()
            {
                Add(_T("make"), &Make);
            }

            MakeData(const MakeData&) = delete;
            MakeData& operator=(const MakeData&) = delete;

        public:
            Core::JSON::EnumType<MakeData::MakeType> Make; // Device manufacturer
        }; // class MakeData

        class ModelidData : public Core::JSON::Container {
        public:
            // Device model number or SKU
            enum class SkuType : uint8_t {
                PLTL11AEI,
                ZWCN11MWI,
                SKTL11AEI,
                LS301,
                HSTP11MWR,
                HSTP11MWRFX50,
                ELTE11MWR,
                SKXI11ADS,
                SKXI11AIS,
                SKXI11ANS,
                SCXI11AIC,
                SCXI11BEI,
                CMXI11BEI,
                AX013AN,
                AX014AN,
                AX061AEI,
                MX011AN,
                CS011AN,
                CXD01ANI,
                PX001AN,
                PX013AN,
                PX022AN,
                PX032ANI,
                PX051AEI,
                PXD01ANI,
                SX022AN,
                TX061AEI,
                XUSHTC11MWR
            };

            ModelidData()
                : Core::JSON::Container()
            {
                Add(_T("sku"), &Sku);
            }

            ModelidData(const ModelidData&) = delete;
            ModelidData& operator=(const ModelidData&) = delete;

        public:
            Core::JSON::EnumType<ModelidData::SkuType> Sku; // Device model number or SKU
        }; // class ModelidData

        class ModelnameData : public Core::JSON::Container {
        public:
            ModelnameData()
                : Core::JSON::Container()
            {
                Add(_T("model"), &Model);
            }

            ModelnameData(const ModelnameData&) = delete;
            ModelnameData& operator=(const ModelnameData&) = delete;

        public:
            Core::JSON::String Model;
        }; // class ModelnameData

        class Ms12capabilitiesResultData : public Core::JSON::Container {
        public:
            // MS12 audio capability
            enum class Ms12capabilityType : uint8_t {
                NONE,
                DOLBYVOLUME,
                INTELIGENTEQUALIZER,
                DIALOGUEENHANCER
            };

            Ms12capabilitiesResultData()
                : Core::JSON::Container()
            {
                Add(_T("MS12Capabilities"), &MS12Capabilities);
            }

            Ms12capabilitiesResultData(const Ms12capabilitiesResultData&) = delete;
            Ms12capabilitiesResultData& operator=(const Ms12capabilitiesResultData&) = delete;

        public:
            Core::JSON::ArrayType<Core::JSON::EnumType<Ms12capabilitiesResultData::Ms12capabilityType>> MS12Capabilities;
        }; // class Ms12capabilitiesResultData

        class ReleaseversionData : public Core::JSON::Container {
        public:
            ReleaseversionData()
                : Core::JSON::Container()
            {
                Add(_T("releaseversion"), &Releaseversion);
            }

            ReleaseversionData(const ReleaseversionData&) = delete;
            ReleaseversionData& operator=(const ReleaseversionData&) = delete;

        public:
            Core::JSON::String Releaseversion;
        }; // class ReleaseversionData

        class SerialnumberData : public Core::JSON::Container {
        public:
            SerialnumberData()
                : Core::JSON::Container()
            {
                Add(_T("serialnumber"), &Serialnumber);
            }

            SerialnumberData(const SerialnumberData&) = delete;
            SerialnumberData& operator=(const SerialnumberData&) = delete;

        public:
            Core::JSON::String Serialnumber;
        }; // class SerialnumberData

        class SocketinfoData : public Core::JSON::Container {
        public:
            SocketinfoData()
                : Core::JSON::Container()
            {
                Add(_T("runs"), &Runs);
            }

            SocketinfoData(const SocketinfoData&) = delete;
            SocketinfoData& operator=(const SocketinfoData&) = delete;

        public:
            Core::JSON::DecUInt32 Runs; // Number of runs
        }; // class SocketinfoData

        class SupportedaudioportsData : public Core::JSON::Container {
        public:
            SupportedaudioportsData()
                : Core::JSON::Container()
            {
                Add(_T("supportedAudioPorts"), &SupportedAudioPorts);
            }

            SupportedaudioportsData(const SupportedaudioportsData&) = delete;
            SupportedaudioportsData& operator=(const SupportedaudioportsData&) = delete;

        public:
            Core::JSON::ArrayType<Core::JSON::String> SupportedAudioPorts;
        }; // class SupportedaudioportsData

        class SupportedhdcpResultData : public Core::JSON::Container {
        public:
            // HDCP support
            enum class Copy_protectionType : uint8_t {
                HDCP_UNAVAILABLE,
                HDCP_14,
                HDCP_20,
                HDCP_21,
                HDCP_22
            };

            SupportedhdcpResultData()
                : Core::JSON::Container()
            {
                Add(_T("supportedHDCPVersion"), &SupportedHDCPVersion);
            }

            SupportedhdcpResultData(const SupportedhdcpResultData&) = delete;
            SupportedhdcpResultData& operator=(const SupportedhdcpResultData&) = delete;

        public:
            Core::JSON::EnumType<SupportedhdcpResultData::Copy_protectionType> SupportedHDCPVersion; // HDCP support
        }; // class SupportedhdcpResultData

        class Supportedms12audioprofilesResultData : public Core::JSON::Container {
        public:
            Supportedms12audioprofilesResultData()
                : Core::JSON::Container()
            {
                Add(_T("supportedMS12AudioProfiles"), &SupportedMS12AudioProfiles);
            }

            Supportedms12audioprofilesResultData(const Supportedms12audioprofilesResultData&) = delete;
            Supportedms12audioprofilesResultData& operator=(const Supportedms12audioprofilesResultData&) = delete;

        public:
            Core::JSON::ArrayType<Core::JSON::String> SupportedMS12AudioProfiles;
        }; // class Supportedms12audioprofilesResultData

        class SupportedresolutionsResultData : public Core::JSON::Container {
        public:
            SupportedresolutionsResultData()
                : Core::JSON::Container()
            {
                Add(_T("supportedResolutions"), &SupportedResolutions);
            }

            SupportedresolutionsResultData(const SupportedresolutionsResultData&) = delete;
            SupportedresolutionsResultData& operator=(const SupportedresolutionsResultData&) = delete;

        public:
            Core::JSON::ArrayType<Core::JSON::EnumType<Output_resolutionType>> SupportedResolutions;
        }; // class SupportedresolutionsResultData

        class SupportedvideodisplaysData : public Core::JSON::Container {
        public:
            SupportedvideodisplaysData()
                : Core::JSON::Container()
            {
                Add(_T("supportedVideoDisplays"), &SupportedVideoDisplays);
            }

            SupportedvideodisplaysData(const SupportedvideodisplaysData&) = delete;
            SupportedvideodisplaysData& operator=(const SupportedvideodisplaysData&) = delete;

        public:
            Core::JSON::ArrayType<Core::JSON::String> SupportedVideoDisplays;
        }; // class SupportedvideodisplaysData

        class SysteminfoData : public Core::JSON::Container {
        public:
            class CpuloadavgsData : public Core::JSON::Container {
            public:
                CpuloadavgsData()
                    : Core::JSON::Container()
                {
                    Add(_T("avg1min"), &Avg1min);
                    Add(_T("avg5min"), &Avg5min);
                    Add(_T("avg15min"), &Avg15min);
                }

                CpuloadavgsData(const CpuloadavgsData&) = delete;
                CpuloadavgsData& operator=(const CpuloadavgsData&) = delete;

            public:
                Core::JSON::DecUInt64 Avg1min; // 1min cpuload average
                Core::JSON::DecUInt64 Avg5min; // 5min cpuload average
                Core::JSON::DecUInt64 Avg15min; // 15min cpuload average
            }; // class CpuloadavgsData

            SysteminfoData()
                : Core::JSON::Container()
            {
                Add(_T("version"), &Version);
                Add(_T("uptime"), &Uptime);
                Add(_T("totalram"), &Totalram);
                Add(_T("freeram"), &Freeram);
                Add(_T("totalswap"), &Totalswap);
                Add(_T("freeswap"), &Freeswap);
                Add(_T("devicename"), &Devicename);
                Add(_T("cpuload"), &Cpuload);
                Add(_T("cpuloadavg"), &Cpuloadavg);
                Add(_T("serialnumber"), &Serialnumber);
                Add(_T("time"), &Time);
            }

            SysteminfoData(const SysteminfoData&) = delete;
            SysteminfoData& operator=(const SysteminfoData&) = delete;

        public:
            Core::JSON::String Version; // Software version (in form *version#hashtag*)
            Core::JSON::DecUInt64 Uptime; // System uptime (in seconds)
            Core::JSON::DecUInt64 Totalram; // Total installed system RAM memory (in bytes)
            Core::JSON::DecUInt64 Freeram; // Free system RAM memory (in bytes)
            Core::JSON::DecUInt64 Totalswap; // Total swap space (in bytes)
            Core::JSON::DecUInt64 Freeswap; // swap space still available (in bytes)
            Core::JSON::String Devicename; // Host name
            Core::JSON::String Cpuload; // Current CPU load (percentage)
            SysteminfoData::CpuloadavgsData Cpuloadavg; // CPU load average
            Core::JSON::String Serialnumber; // Device serial number
            Core::JSON::String Time; // Current system date and time
        }; // class SysteminfoData

    } // namespace DeviceInfo

} // namespace JsonData

// Enum conversion handlers
ENUM_CONVERSION_HANDLER(JsonData::DeviceInfo::Output_resolutionType);
ENUM_CONVERSION_HANDLER(JsonData::DeviceInfo::SupportedhdcpResultData::Copy_protectionType);
ENUM_CONVERSION_HANDLER(JsonData::DeviceInfo::AudiocapabilitiesResultData::AudiocapabilityType);
ENUM_CONVERSION_HANDLER(JsonData::DeviceInfo::Ms12capabilitiesResultData::Ms12capabilityType);
ENUM_CONVERSION_HANDLER(JsonData::DeviceInfo::FirmwareversionData::YoctoType);
ENUM_CONVERSION_HANDLER(JsonData::DeviceInfo::ModelidData::SkuType);
ENUM_CONVERSION_HANDLER(JsonData::DeviceInfo::MakeData::MakeType);
ENUM_CONVERSION_HANDLER(JsonData::DeviceInfo::DevicetypeData::DevicetypeType);
ENUM_CONVERSION_HANDLER(JsonData::DeviceInfo::DistributoridData::DistributoridType);

}

