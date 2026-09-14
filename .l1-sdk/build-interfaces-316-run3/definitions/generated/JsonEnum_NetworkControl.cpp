// Enumeration code for Network Control API JSON-RPC API.
// Generated automatically from 'NetworkControl.json'.

#include <core/Enumerate.h>

#include "definitions.h"
#include "JsonData_NetworkControl.h"

namespace WPEFramework {

ENUM_CONVERSION_BEGIN(JsonData::NetworkControl::NetworkData::ModeType)
    { JsonData::NetworkControl::NetworkData::ModeType::MANUAL, _TXT("Manual") },
    { JsonData::NetworkControl::NetworkData::ModeType::STATIC, _TXT("Static") },
    { JsonData::NetworkControl::NetworkData::ModeType::DYNAMIC, _TXT("Dynamic") },
ENUM_CONVERSION_END(JsonData::NetworkControl::NetworkData::ModeType);

ENUM_CONVERSION_BEGIN(JsonData::NetworkControl::ConnectionchangeParamsData::StatusType)
    { JsonData::NetworkControl::ConnectionchangeParamsData::StatusType::CREATED, _TXT("created") },
    { JsonData::NetworkControl::ConnectionchangeParamsData::StatusType::UPDATED, _TXT("updated") },
    { JsonData::NetworkControl::ConnectionchangeParamsData::StatusType::REMOVED, _TXT("removed") },
    { JsonData::NetworkControl::ConnectionchangeParamsData::StatusType::CONNECTED, _TXT("connected") },
    { JsonData::NetworkControl::ConnectionchangeParamsData::StatusType::IPASSIGNED, _TXT("ipassigned") },
    { JsonData::NetworkControl::ConnectionchangeParamsData::StatusType::CONNECTIONFAILED, _TXT("connectionfailed") },
ENUM_CONVERSION_END(JsonData::NetworkControl::ConnectionchangeParamsData::StatusType);

}
