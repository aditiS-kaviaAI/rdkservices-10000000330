// C++ classes for Unified CAS Management Service JSON-RPC API.
// Generated automatically from 'UnifiedCASManagement.json'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>
#include <core/Enumerate.h>

namespace WPEFramework {

namespace JsonData {

    namespace UnifiedCASManagement {

        // Common enums
        //

        // Origin of the data.
        enum class SourceType : uint8_t {
            PUBLIC,
            PRIVATE
        };

        // Common classes
        //

        class ResultInfo : public Core::JSON::Container {
        public:
            ResultInfo()
                : Core::JSON::Container()
            {
                Add(_T("success"), &Success);
                Add(_T("failurereason"), &Failurereason);
            }

            ResultInfo(const ResultInfo&) = delete;
            ResultInfo& operator=(const ResultInfo&) = delete;

        public:
            Core::JSON::Boolean Success; // Returning whether this method failed or succeed
            Core::JSON::DecUInt32 Failurereason; // Reason why it's failed
        }; // class ResultInfo

        class XferinfoInfo : public Core::JSON::Container {
        public:
            XferinfoInfo()
                : Core::JSON::Container()
            {
                Add(_T("payload"), &Payload);
                Add(_T("source"), &Source);
            }

            XferinfoInfo(const XferinfoInfo&) = delete;
            XferinfoInfo& operator=(const XferinfoInfo&) = delete;

        public:
            Core::JSON::String Payload; // Data to transfer. Can be base64 coded if required.
            Core::JSON::EnumType<SourceType> Source; // Origin of the data.
        }; // class XferinfoInfo

        // Method params/result classes
        //

        class ManagerequestData : public Core::JSON::Container {
        public:
            // The use of the tune request
            enum class ModeType : uint8_t {
                MODE_NONE,
                MODE_LIVE,
                MODE_RECORD,
                MODE_PLAYBACK
            };

            // The type of CAS management to attach to the tune
            enum class ManageType : uint8_t {
                MANAGE_NONE,
                MANAGE_FULL,
                MANAGE_NO_PSI,
                MANAGE_NO_TUNER
            };

            ManagerequestData()
                : Core::JSON::Container()
            {
                Add(_T("mediaurl"), &Mediaurl);
                Add(_T("mode"), &Mode);
                Add(_T("manage"), &Manage);
                Add(_T("casinitdata"), &Casinitdata);
                Add(_T("casocdmid"), &Casocdmid);
            }

            ManagerequestData(const ManagerequestData&) = delete;
            ManagerequestData& operator=(const ManagerequestData&) = delete;

        public:
            Core::JSON::String Mediaurl; // The URL to tune to can be tune://, ocap:// http:// https://
            Core::JSON::EnumType<ManagerequestData::ModeType> Mode; // The use of the tune request
            Core::JSON::EnumType<ManagerequestData::ManageType> Manage; // The type of CAS management to attach to the tune
            Core::JSON::String Casinitdata; // CAS specific initdata for the selected media
            Core::JSON::String Casocdmid; // The well-known OCDM ID of the CAS to use
        }; // class ManagerequestData

    } // namespace UnifiedCASManagement

} // namespace JsonData

// Enum conversion handlers
ENUM_CONVERSION_HANDLER(JsonData::UnifiedCASManagement::ManagerequestData::ModeType);
ENUM_CONVERSION_HANDLER(JsonData::UnifiedCASManagement::ManagerequestData::ManageType);
ENUM_CONVERSION_HANDLER(JsonData::UnifiedCASManagement::SourceType);

}

