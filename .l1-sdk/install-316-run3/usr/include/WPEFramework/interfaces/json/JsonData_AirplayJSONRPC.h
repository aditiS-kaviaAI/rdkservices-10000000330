// C++ classes for Airplay API JSON-RPC API.
// Generated automatically from 'Airplay.json'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>
#include <core/Enumerate.h>

namespace WPEFramework {

namespace JsonData {

    namespace AirplayJSONRPC {

        // Common enums
        //

        enum class VisibilityType : uint8_t {
            VISIBLE,
            HIDDEN
        };

        // Common classes
        //

        class StartappParamsInfo : public Core::JSON::Container {
        public:
            StartappParamsInfo()
                : Core::JSON::Container()
            {
                Add(_T("command"), &Command);
            }

            StartappParamsInfo(const StartappParamsInfo&) = delete;
            StartappParamsInfo& operator=(const StartappParamsInfo&) = delete;

        public:
            Core::JSON::String Command; // Command to send to Airplay
        }; // class StartappParamsInfo

        // Method params/result classes
        //

        class VisibilitychangeParamsData : public Core::JSON::Container {
        public:
            VisibilitychangeParamsData()
                : Core::JSON::Container()
            {
                Add(_T("hidden"), &Hidden);
            }

            VisibilitychangeParamsData(const VisibilitychangeParamsData&) = delete;
            VisibilitychangeParamsData& operator=(const VisibilitychangeParamsData&) = delete;

        public:
            Core::JSON::Boolean Hidden; // Determines if the Airplay has been hidden (true) or made visible (false)
        }; // class VisibilitychangeParamsData

    } // namespace AirplayJSONRPC

} // namespace JsonData

// Enum conversion handlers
ENUM_CONVERSION_HANDLER(JsonData::AirplayJSONRPC::VisibilityType);

}

