// Enumeration code for Unified Player JSON-RPC API.
// Generated automatically from 'UnifiedPlayer.json'.

#include <core/Enumerate.h>

#include "definitions.h"
#include "JsonData_UnifiedPlayer.h"

namespace WPEFramework {

ENUM_CONVERSION_BEGIN(JsonData::UnifiedPlayer::ModeType)
    { JsonData::UnifiedPlayer::ModeType::MODE_NONE, _TXT("MODE_NONE") },
    { JsonData::UnifiedPlayer::ModeType::MODE_LIVE, _TXT("MODE_LIVE") },
    { JsonData::UnifiedPlayer::ModeType::MODE_RECORD, _TXT("MODE_RECORD") },
    { JsonData::UnifiedPlayer::ModeType::MODE_PLAYBACK, _TXT("MODE_PLAYBACK") },
ENUM_CONVERSION_END(JsonData::UnifiedPlayer::ModeType);

ENUM_CONVERSION_BEGIN(JsonData::UnifiedPlayer::ManageType)
    { JsonData::UnifiedPlayer::ManageType::MANAGE_NONE, _TXT("MANAGE_NONE") },
    { JsonData::UnifiedPlayer::ManageType::MANAGE_FULL, _TXT("MANAGE_FULL") },
    { JsonData::UnifiedPlayer::ManageType::MANAGE_NO_PSI, _TXT("MANAGE_NO_PSI") },
    { JsonData::UnifiedPlayer::ManageType::MANAGE_NO_TUNER, _TXT("MANAGE_NO_TUNER") },
ENUM_CONVERSION_END(JsonData::UnifiedPlayer::ManageType);

}
