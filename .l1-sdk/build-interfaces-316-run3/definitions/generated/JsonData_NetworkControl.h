// C++ classes for Network Control API JSON-RPC API.
// Generated automatically from 'NetworkControl.json'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>
#include <core/Enumerate.h>

namespace WPEFramework {

namespace JsonData {

    namespace NetworkControl {

        // Common classes
        //

        class ReloadParamsInfo : public Core::JSON::Container {
        public:
            ReloadParamsInfo()
                : Core::JSON::Container()
            {
                Add(_T("interface"), &Interface);
            }

            ReloadParamsInfo(const ReloadParamsInfo&) = delete;
            ReloadParamsInfo& operator=(const ReloadParamsInfo&) = delete;

        public:
            Core::JSON::String Interface; // Network interface name
        }; // class ReloadParamsInfo

        // Method params/result classes
        //

        class ConnectionchangeParamsData : public Core::JSON::Container {
        public:
            // Status of the interface, update, connected or not
            enum class StatusType : uint8_t {
                CREATED,
                UPDATED,
                REMOVED,
                CONNECTED,
                IPASSIGNED,
                CONNECTIONFAILED
            };

            ConnectionchangeParamsData()
                : Core::JSON::Container()
            {
                Add(_T("name"), &Name);
                Add(_T("address"), &Address);
                Add(_T("status"), &Status);
            }

            ConnectionchangeParamsData(const ConnectionchangeParamsData&) = delete;
            ConnectionchangeParamsData& operator=(const ConnectionchangeParamsData&) = delete;

        public:
            Core::JSON::String Name; // Network interface name
            Core::JSON::String Address; // IP Address of network interface, if it is connected
            Core::JSON::EnumType<ConnectionchangeParamsData::StatusType> Status; // Status of the interface, update, connected or not
        }; // class ConnectionchangeParamsData

        class NetworkData : public Core::JSON::Container {
        public:
            // Mode
            enum ModeType : uint8_t {
                MANUAL,
                STATIC,
                DYNAMIC
            };

            NetworkData()
                : Core::JSON::Container()
            {
                _Init();
            }

            NetworkData(const NetworkData& _other)
                : Core::JSON::Container()
                , Interface(_other.Interface)
                , Mode(_other.Mode)
                , Address(_other.Address)
                , Mask(_other.Mask)
                , Gateway(_other.Gateway)
                , Broadcast(_other.Broadcast)
                , Dns(_other.Dns)
            {
                _Init();
            }

            NetworkData& operator=(const NetworkData& _rhs)
            {
                Interface = _rhs.Interface;
                Mode = _rhs.Mode;
                Address = _rhs.Address;
                Mask = _rhs.Mask;
                Gateway = _rhs.Gateway;
                Broadcast = _rhs.Broadcast;
                Dns = _rhs.Dns;
                return (*this);
            }

        private:
            void _Init()
            {
                Add(_T("interface"), &Interface);
                Add(_T("mode"), &Mode);
                Add(_T("address"), &Address);
                Add(_T("mask"), &Mask);
                Add(_T("gateway"), &Gateway);
                Add(_T("broadcast"), &Broadcast);
                Add(_T("dns"), &Dns);
            }

        public:
            Core::JSON::String Interface; // Network interface name
            Core::JSON::EnumType<NetworkData::ModeType> Mode; // Mode
            Core::JSON::String Address; // IP address
            Core::JSON::DecUInt8 Mask; // Network interface mask
            Core::JSON::String Gateway; // Gateway address
            Core::JSON::String Broadcast; // Broadcast IP
            Core::JSON::ArrayType<Core::JSON::String> Dns; // DNS addresses
        }; // class NetworkData

    } // namespace NetworkControl

} // namespace JsonData

// Enum conversion handlers
ENUM_CONVERSION_HANDLER(JsonData::NetworkControl::NetworkData::ModeType);
ENUM_CONVERSION_HANDLER(JsonData::NetworkControl::ConnectionchangeParamsData::StatusType);

}

