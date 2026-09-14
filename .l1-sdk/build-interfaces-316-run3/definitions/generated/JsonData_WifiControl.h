// C++ classes for WiFi Control API JSON-RPC API.
// Generated automatically from 'WifiControl.json'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>
#include <core/Enumerate.h>

namespace WPEFramework {

namespace JsonData {

    namespace WifiControl {

        // Common enums
        //

        // Type of protection. WPA_WPA2 means WPA, WPA2 and mixed types are allowed
        enum class TypeType : uint8_t {
            UNKNOWN,
            UNSECURE,
            WPA,
            WPA2,
            WPA_WPA2,
            ENTERPRISE
        };

        // Common classes
        //

        class ConfigInfo : public Core::JSON::Container {
        public:
            ConfigInfo()
                : Core::JSON::Container()
            {
                _Init();
            }

            ConfigInfo(const ConfigInfo& _other)
                : Core::JSON::Container()
                , Ssid(_other.Ssid)
                , Type(_other.Type)
                , Hidden(_other.Hidden)
                , Accesspoint(_other.Accesspoint)
                , Psk(_other.Psk)
                , Hash(_other.Hash)
                , Identity(_other.Identity)
                , Password(_other.Password)
            {
                _Init();
            }

            ConfigInfo& operator=(const ConfigInfo& _rhs)
            {
                Ssid = _rhs.Ssid;
                Type = _rhs.Type;
                Hidden = _rhs.Hidden;
                Accesspoint = _rhs.Accesspoint;
                Psk = _rhs.Psk;
                Hash = _rhs.Hash;
                Identity = _rhs.Identity;
                Password = _rhs.Password;
                return (*this);
            }

        private:
            void _Init()
            {
                Add(_T("ssid"), &Ssid);
                Add(_T("type"), &Type);
                Add(_T("hidden"), &Hidden);
                Add(_T("accesspoint"), &Accesspoint);
                Add(_T("psk"), &Psk);
                Add(_T("hash"), &Hash);
                Add(_T("identity"), &Identity);
                Add(_T("password"), &Password);
            }

        public:
            Core::JSON::String Ssid; // Identifier of a network
            Core::JSON::EnumType<TypeType> Type; // Type of protection. WPA_WPA2 means WPA, WPA2 and mixed types are allowed
            Core::JSON::Boolean Hidden; // Indicates whether a network is hidden
            Core::JSON::Boolean Accesspoint; // Indicates if the network operates in AP mode
            Core::JSON::String Psk; // Network's PSK in plaintext (irrelevant if hash is provided)
            Core::JSON::String Hash; // Network's PSK as a hash
            Core::JSON::String Identity; // User credentials (username part) for EAP
            Core::JSON::String Password; // User credentials (password part) for EAP
        }; // class ConfigInfo

        class DeleteParamsInfo : public Core::JSON::Container {
        public:
            DeleteParamsInfo()
                : Core::JSON::Container()
            {
                Add(_T("ssid"), &Ssid);
            }

            DeleteParamsInfo(const DeleteParamsInfo&) = delete;
            DeleteParamsInfo& operator=(const DeleteParamsInfo&) = delete;

        public:
            Core::JSON::String Ssid; // Identifier of a network
        }; // class DeleteParamsInfo

        class PairsInfo : public Core::JSON::Container {
        public:
            PairsInfo()
                : Core::JSON::Container()
            {
                _Init();
            }

            PairsInfo(const PairsInfo& _other)
                : Core::JSON::Container()
                , Method(_other.Method)
                , Keys(_other.Keys)
            {
                _Init();
            }

            PairsInfo& operator=(const PairsInfo& _rhs)
            {
                Method = _rhs.Method;
                Keys = _rhs.Keys;
                return (*this);
            }

        private:
            void _Init()
            {
                Add(_T("method"), &Method);
                Add(_T("keys"), &Keys);
            }

        public:
            Core::JSON::String Method; // Encryption method used by the network
            Core::JSON::ArrayType<Core::JSON::String> Keys;
        }; // class PairsInfo

        class NetworkInfo : public Core::JSON::Container {
        public:
            NetworkInfo()
                : Core::JSON::Container()
            {
                _Init();
            }

            NetworkInfo(const NetworkInfo& _other)
                : Core::JSON::Container()
                , Ssid(_other.Ssid)
                , Pairs(_other.Pairs)
                , Bssid(_other.Bssid)
                , Frequency(_other.Frequency)
                , Signal(_other.Signal)
            {
                _Init();
            }

            NetworkInfo& operator=(const NetworkInfo& _rhs)
            {
                Ssid = _rhs.Ssid;
                Pairs = _rhs.Pairs;
                Bssid = _rhs.Bssid;
                Frequency = _rhs.Frequency;
                Signal = _rhs.Signal;
                return (*this);
            }

        private:
            void _Init()
            {
                Add(_T("ssid"), &Ssid);
                Add(_T("pairs"), &Pairs);
                Add(_T("bssid"), &Bssid);
                Add(_T("frequency"), &Frequency);
                Add(_T("signal"), &Signal);
            }

        public:
            Core::JSON::String Ssid; // Identifier of a network
            Core::JSON::ArrayType<PairsInfo> Pairs;
            Core::JSON::String Bssid; // 48-bits long BSS identifier (might be MAC format)
            Core::JSON::DecUInt32 Frequency; // Network's frequency in MHz
            Core::JSON::DecUInt32 Signal; // Network's signal level in dBm
        }; // class NetworkInfo

        // Method params/result classes
        //

        class StatusData : public Core::JSON::Container {
        public:
            StatusData()
                : Core::JSON::Container()
            {
                Add(_T("connected"), &Connected);
                Add(_T("scanning"), &Scanning);
            }

            StatusData(const StatusData&) = delete;
            StatusData& operator=(const StatusData&) = delete;

        public:
            Core::JSON::String Connected; // Identifier of the connected network
            Core::JSON::Boolean Scanning; // Indicates whether a scanning for available network is in progress
        }; // class StatusData

    } // namespace WifiControl

} // namespace JsonData

// Enum conversion handlers
ENUM_CONVERSION_HANDLER(JsonData::WifiControl::TypeType);

}

