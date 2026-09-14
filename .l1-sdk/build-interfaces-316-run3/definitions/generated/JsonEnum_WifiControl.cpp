// Enumeration code for WiFi Control API JSON-RPC API.
// Generated automatically from 'WifiControl.json'.

#include <core/Enumerate.h>

#include "definitions.h"
#include "JsonData_WifiControl.h"

namespace WPEFramework {

ENUM_CONVERSION_BEGIN(JsonData::WifiControl::TypeType)
    { JsonData::WifiControl::TypeType::UNKNOWN, _TXT("Unknown") },
    { JsonData::WifiControl::TypeType::UNSECURE, _TXT("Unsecure") },
    { JsonData::WifiControl::TypeType::WPA, _TXT("WPA") },
    { JsonData::WifiControl::TypeType::WPA2, _TXT("WPA2") },
    { JsonData::WifiControl::TypeType::WPA_WPA2, _TXT("WPA_WPA2") },
    { JsonData::WifiControl::TypeType::ENTERPRISE, _TXT("Enterprise") },
ENUM_CONVERSION_END(JsonData::WifiControl::TypeType);

}
