// Enumeration code for Bluetooth Control API JSON-RPC API.
// Generated automatically from 'BluetoothControl.json'.

#include <core/Enumerate.h>

#include "definitions.h"
#include "JsonData_BluetoothControl.h"

namespace WPEFramework {

ENUM_CONVERSION_BEGIN(JsonData::BluetoothControl::DevicetypeType)
    { JsonData::BluetoothControl::DevicetypeType::CLASSIC, _TXT("Classic") },
    { JsonData::BluetoothControl::DevicetypeType::LOWENERGY, _TXT("LowEnergy") },
ENUM_CONVERSION_END(JsonData::BluetoothControl::DevicetypeType);

ENUM_CONVERSION_BEGIN(JsonData::BluetoothControl::DevicestatechangeParamsData::DevicestateType)
    { JsonData::BluetoothControl::DevicestatechangeParamsData::DevicestateType::PAIRING, _TXT("Pairing") },
    { JsonData::BluetoothControl::DevicestatechangeParamsData::DevicestateType::PAIRED, _TXT("Paired") },
    { JsonData::BluetoothControl::DevicestatechangeParamsData::DevicestateType::UNPAIRED, _TXT("Unpaired") },
    { JsonData::BluetoothControl::DevicestatechangeParamsData::DevicestateType::CONNECTED, _TXT("Connected") },
    { JsonData::BluetoothControl::DevicestatechangeParamsData::DevicestateType::DISCONNECTED, _TXT("Disconnected") },
ENUM_CONVERSION_END(JsonData::BluetoothControl::DevicestatechangeParamsData::DevicestateType);

ENUM_CONVERSION_BEGIN(JsonData::BluetoothControl::DevicestatechangeParamsData::DisconnectreasonType)
    { JsonData::BluetoothControl::DevicestatechangeParamsData::DisconnectreasonType::CONNECTIONTIMEOUT, _TXT("ConnectionTimeout") },
    { JsonData::BluetoothControl::DevicestatechangeParamsData::DisconnectreasonType::AUTHENTICATIONFAILURE, _TXT("AuthenticationFailure") },
    { JsonData::BluetoothControl::DevicestatechangeParamsData::DisconnectreasonType::REMOTELOWONRESOURCES, _TXT("RemoteLowOnResources") },
    { JsonData::BluetoothControl::DevicestatechangeParamsData::DisconnectreasonType::REMOTEPOWEREDOFF, _TXT("RemotePoweredOff") },
    { JsonData::BluetoothControl::DevicestatechangeParamsData::DisconnectreasonType::TERMINATEDBYREMOTE, _TXT("TerminatedByRemote") },
    { JsonData::BluetoothControl::DevicestatechangeParamsData::DisconnectreasonType::TERMINATEDBYHOST, _TXT("TerminatedByHost") },
ENUM_CONVERSION_END(JsonData::BluetoothControl::DevicestatechangeParamsData::DisconnectreasonType);

}
