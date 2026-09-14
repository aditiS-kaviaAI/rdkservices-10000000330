// C++ classes for Display Info API JSON-RPC API.
// Generated automatically from 'DisplayInfo.json'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>
#include <core/Enumerate.h>

namespace WPEFramework {

namespace JsonData {

    namespace DisplayInfo {

        // Common enums
        //

        // HDR Type used
        enum class HdrtypesType : uint8_t {
            HDROFF,
            HDR10,
            HDR10PLUS,
            HDRHLG,
            HDRDOLBYVISION,
            HDRTECHNICOLOR
        };

        // Method params/result classes
        //

        class DisplayinfoData : public Core::JSON::Container {
        public:
            // HDCP Protection
            enum class HdcpprotectionType : uint8_t {
                UNENCRYPTED,
                HDCP1X,
                HDCP2X
            };

            DisplayinfoData()
                : Core::JSON::Container()
            {
                Add(_T("totalgpuram"), &Totalgpuram);
                Add(_T("freegpuram"), &Freegpuram);
                Add(_T("audiopassthrough"), &Audiopassthrough);
                Add(_T("connected"), &Connected);
                Add(_T("width"), &Width);
                Add(_T("height"), &Height);
                Add(_T("hdcpprotection"), &Hdcpprotection);
                Add(_T("hdrtype"), &Hdrtype);
                Add(_T("tvhdrtypes"), &Tvhdrtypes);
            }

            DisplayinfoData(const DisplayinfoData&) = delete;
            DisplayinfoData& operator=(const DisplayinfoData&) = delete;

        public:
            Core::JSON::DecUInt64 Totalgpuram; // Total GPU DRAM memory (in bytes)
            Core::JSON::DecUInt64 Freegpuram; // Free GPU DRAM memory (in bytes)
            Core::JSON::Boolean Audiopassthrough; // Audio Pass through is support for this device
            Core::JSON::Boolean Connected; // HDMI display connection status
            Core::JSON::DecUInt32 Width; // Width of the connected HDMI display
            Core::JSON::DecUInt32 Height; // Height of the connected HDMI display
            Core::JSON::EnumType<DisplayinfoData::HdcpprotectionType> Hdcpprotection; // HDCP Protection
            Core::JSON::EnumType<HdrtypesType> Hdrtype; // HDR Type used
            Core::JSON::ArrayType<Core::JSON::EnumType<HdrtypesType>> Tvhdrtypes; // TV supported HDR types
        }; // class DisplayinfoData

    } // namespace DisplayInfo

} // namespace JsonData

// Enum conversion handlers
ENUM_CONVERSION_HANDLER(JsonData::DisplayInfo::DisplayinfoData::HdcpprotectionType);
ENUM_CONVERSION_HANDLER(JsonData::DisplayInfo::HdrtypesType);

}

