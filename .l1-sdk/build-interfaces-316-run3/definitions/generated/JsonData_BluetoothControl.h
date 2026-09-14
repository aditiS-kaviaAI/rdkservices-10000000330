// C++ classes for Bluetooth Control API JSON-RPC API.
// Generated automatically from 'BluetoothControl.json'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>
#include <core/Enumerate.h>

namespace WPEFramework {

namespace JsonData {

    namespace BluetoothControl {

        // Common enums
        //

        // Bluetooth device type
        enum class DevicetypeType : uint8_t {
            CLASSIC,
            LOWENERGY
        };

        // Common classes
        //

        class ConnectParamsInfo : public Core::JSON::Container {
        public:
            ConnectParamsInfo()
                : Core::JSON::Container()
            {
                Add(_T("address"), &Address);
            }

            ConnectParamsInfo(const ConnectParamsInfo&) = delete;
            ConnectParamsInfo& operator=(const ConnectParamsInfo&) = delete;

        public:
            Core::JSON::String Address; // Bluetooth address
        }; // class ConnectParamsInfo

        class PasskeyParamsInfo : public Core::JSON::Container {
        public:
            PasskeyParamsInfo()
                : Core::JSON::Container()
            {
                Add(_T("address"), &Address);
                Add(_T("secret"), &Secret);
            }

            PasskeyParamsInfo(const PasskeyParamsInfo&) = delete;
            PasskeyParamsInfo& operator=(const PasskeyParamsInfo&) = delete;

        public:
            Core::JSON::String Address; // Bluetooth address
            Core::JSON::DecUInt32 Secret; // A six-digit decimal number passkey
        }; // class PasskeyParamsInfo

        // Method params/result classes
        //

        class AdapterData : public Core::JSON::Container {
        public:
            AdapterData()
                : Core::JSON::Container()
            {
                Add(_T("interface"), &Interface);
                Add(_T("address"), &Address);
                Add(_T("version"), &Version);
                Add(_T("manufacturer"), &Manufacturer);
                Add(_T("name"), &Name);
                Add(_T("shortname"), &Shortname);
            }

            AdapterData(const AdapterData&) = delete;
            AdapterData& operator=(const AdapterData&) = delete;

        public:
            Core::JSON::String Interface; // Ndapter interface name
            Core::JSON::String Address; // Bluetooth address
            Core::JSON::DecUInt8 Version; // Device version
            Core::JSON::DecUInt16 Manufacturer; // Device manufacturer Company Identifer
            Core::JSON::String Name; // Device name
            Core::JSON::String Shortname; // Device short name
        }; // class AdapterData

        class ConfirmpasskeyParamsData : public Core::JSON::Container {
        public:
            ConfirmpasskeyParamsData()
                : Core::JSON::Container()
            {
                Add(_T("address"), &Address);
                Add(_T("iscorrect"), &Iscorrect);
            }

            ConfirmpasskeyParamsData(const ConfirmpasskeyParamsData&) = delete;
            ConfirmpasskeyParamsData& operator=(const ConfirmpasskeyParamsData&) = delete;

        public:
            Core::JSON::String Address; // Bluetooth address
            Core::JSON::Boolean Iscorrect; // Specifies if the passkey sent in *passkeyconfirmrequest* event is correct (true) or incorrect (false)
        }; // class ConfirmpasskeyParamsData

        class DeviceData : public Core::JSON::Container {
        public:
            DeviceData()
                : Core::JSON::Container()
            {
                Add(_T("name"), &Name);
                Add(_T("type"), &Type);
                Add(_T("class"), &Class);
                Add(_T("connected"), &Connected);
                Add(_T("paired"), &Paired);
            }

            DeviceData(const DeviceData&) = delete;
            DeviceData& operator=(const DeviceData&) = delete;

        public:
            Core::JSON::String Name; // Name of the device
            Core::JSON::EnumType<DevicetypeType> Type; // Bluetooth device type
            Core::JSON::DecUInt32 Class; // Class of device (3 octets)
            Core::JSON::Boolean Connected; // Denotes if the device is currently connected to host
            Core::JSON::Boolean Paired; // Denotes if the device is currently paired with host
        }; // class DeviceData

        class DevicestatechangeParamsData : public Core::JSON::Container {
        public:
            // Device state
            enum class DevicestateType : uint8_t {
                PAIRING,
                PAIRED,
                UNPAIRED,
                CONNECTED,
                DISCONNECTED
            };

            // Disconnection reason in case of *Disconnected* event
            enum class DisconnectreasonType : uint8_t {
                CONNECTIONTIMEOUT,
                AUTHENTICATIONFAILURE,
                REMOTELOWONRESOURCES,
                REMOTEPOWEREDOFF,
                TERMINATEDBYREMOTE,
                TERMINATEDBYHOST
            };

            DevicestatechangeParamsData()
                : Core::JSON::Container()
            {
                Add(_T("address"), &Address);
                Add(_T("state"), &State);
                Add(_T("disconnectreason"), &Disconnectreason);
            }

            DevicestatechangeParamsData(const DevicestatechangeParamsData&) = delete;
            DevicestatechangeParamsData& operator=(const DevicestatechangeParamsData&) = delete;

        public:
            Core::JSON::String Address; // Bluetooth address
            Core::JSON::EnumType<DevicestatechangeParamsData::DevicestateType> State; // Device state
            Core::JSON::EnumType<DevicestatechangeParamsData::DisconnectreasonType> Disconnectreason; // Disconnection reason in case of *Disconnected* event
        }; // class DevicestatechangeParamsData

        class PairParamsData : public Core::JSON::Container {
        public:
            PairParamsData()
                : Core::JSON::Container()
            {
                Add(_T("address"), &Address);
                Add(_T("timeout"), &Timeout);
            }

            PairParamsData(const PairParamsData&) = delete;
            PairParamsData& operator=(const PairParamsData&) = delete;

        public:
            Core::JSON::String Address; // Bluetooth address
            Core::JSON::DecUInt16 Timeout; // Maximum time allowed for the pairing process to complete (in seconds); default: 20 seconds
        }; // class PairParamsData

        class PincodeParamsData : public Core::JSON::Container {
        public:
            PincodeParamsData()
                : Core::JSON::Container()
            {
                Add(_T("address"), &Address);
                Add(_T("secret"), &Secret);
            }

            PincodeParamsData(const PincodeParamsData&) = delete;
            PincodeParamsData& operator=(const PincodeParamsData&) = delete;

        public:
            Core::JSON::String Address; // Bluetooth address
            Core::JSON::String Secret; // A PIN code string, typically consisting of (but not limited to) four decimal digits
        }; // class PincodeParamsData

        class ScanParamsData : public Core::JSON::Container {
        public:
            ScanParamsData()
                : Core::JSON::Container()
            {
                Add(_T("type"), &Type);
                Add(_T("timeout"), &Timeout);
            }

            ScanParamsData(const ScanParamsData&) = delete;
            ScanParamsData& operator=(const ScanParamsData&) = delete;

        public:
            Core::JSON::EnumType<DevicetypeType> Type; // Bluetooth device type
            Core::JSON::DecUInt32 Timeout; // Duration of the scan (in seconds); default: 10 seconds
        }; // class ScanParamsData

    } // namespace BluetoothControl

} // namespace JsonData

// Enum conversion handlers
ENUM_CONVERSION_HANDLER(JsonData::BluetoothControl::DevicetypeType);
ENUM_CONVERSION_HANDLER(JsonData::BluetoothControl::DevicestatechangeParamsData::DevicestateType);
ENUM_CONVERSION_HANDLER(JsonData::BluetoothControl::DevicestatechangeParamsData::DisconnectreasonType);

}

