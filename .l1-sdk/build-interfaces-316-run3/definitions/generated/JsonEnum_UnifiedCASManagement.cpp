// Enumeration code for Unified CAS Management Service JSON-RPC API.
// Generated automatically from 'UnifiedCASManagement.json'.

#include <core/Enumerate.h>

#include "definitions.h"
#include "JsonData_UnifiedCASManagement.h"

namespace WPEFramework {

ENUM_CONVERSION_BEGIN(JsonData::UnifiedCASManagement::ManagerequestData::ModeType)
    { JsonData::UnifiedCASManagement::ManagerequestData::ModeType::MODE_NONE, _TXT("MODE_NONE") },
    { JsonData::UnifiedCASManagement::ManagerequestData::ModeType::MODE_LIVE, _TXT("MODE_LIVE") },
    { JsonData::UnifiedCASManagement::ManagerequestData::ModeType::MODE_RECORD, _TXT("MODE_RECORD") },
    { JsonData::UnifiedCASManagement::ManagerequestData::ModeType::MODE_PLAYBACK, _TXT("MODE_PLAYBACK") },
ENUM_CONVERSION_END(JsonData::UnifiedCASManagement::ManagerequestData::ModeType);

ENUM_CONVERSION_BEGIN(JsonData::UnifiedCASManagement::ManagerequestData::ManageType)
    { JsonData::UnifiedCASManagement::ManagerequestData::ManageType::MANAGE_NONE, _TXT("MANAGE_NONE") },
    { JsonData::UnifiedCASManagement::ManagerequestData::ManageType::MANAGE_FULL, _TXT("MANAGE_FULL") },
    { JsonData::UnifiedCASManagement::ManagerequestData::ManageType::MANAGE_NO_PSI, _TXT("MANAGE_NO_PSI") },
    { JsonData::UnifiedCASManagement::ManagerequestData::ManageType::MANAGE_NO_TUNER, _TXT("MANAGE_NO_TUNER") },
ENUM_CONVERSION_END(JsonData::UnifiedCASManagement::ManagerequestData::ManageType);

ENUM_CONVERSION_BEGIN(JsonData::UnifiedCASManagement::SourceType)
    { JsonData::UnifiedCASManagement::SourceType::PUBLIC, _TXT("PUBLIC") },
    { JsonData::UnifiedCASManagement::SourceType::PRIVATE, _TXT("PRIVATE") },
ENUM_CONVERSION_END(JsonData::UnifiedCASManagement::SourceType);

}
