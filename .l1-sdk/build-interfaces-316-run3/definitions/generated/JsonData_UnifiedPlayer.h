// C++ classes for Unified Player JSON-RPC API.
// Generated automatically from 'UnifiedPlayer.json'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>
#include <core/Enumerate.h>

namespace WPEFramework {

namespace JsonData {

    namespace UnifiedPlayer {

        // Common enums
        //

        // The type of CAS management to attach to the tune
        enum class ManageType : uint8_t {
            MANAGE_NONE,
            MANAGE_FULL,
            MANAGE_NO_PSI,
            MANAGE_NO_TUNER
        };

        // The use of the tune request
        enum class ModeType : uint8_t {
            MODE_NONE,
            MODE_LIVE,
            MODE_RECORD,
            MODE_PLAYBACK
        };

        // Common classes
        //

        class BooleanresultInfo : public Core::JSON::Container {
        public:
            BooleanresultInfo()
                : Core::JSON::Container()
            {
                Add(_T("success"), &Success);
                Add(_T("value"), &Value);
                Add(_T("failurereason"), &Failurereason);
            }

            BooleanresultInfo(const BooleanresultInfo&) = delete;
            BooleanresultInfo& operator=(const BooleanresultInfo&) = delete;

        public:
            Core::JSON::Boolean Success; // Returning whether this method failed or succeed
            Core::JSON::Boolean Value; // The returned boolean value
            Core::JSON::DecUInt32 Failurereason; // Reason why it's failed
        }; // class BooleanresultInfo

        class BooleansessionvalueInfo : public Core::JSON::Container {
        public:
            BooleansessionvalueInfo()
                : Core::JSON::Container()
            {
                Add(_T("value"), &Value);
                Add(_T("session"), &Session);
            }

            BooleansessionvalueInfo(const BooleansessionvalueInfo&) = delete;
            BooleansessionvalueInfo& operator=(const BooleansessionvalueInfo&) = delete;

        public:
            Core::JSON::Boolean Value; // Generic Boolean value
            Core::JSON::DecUInt32 Session; // ID of created session, used to identify sessions to control
        }; // class BooleansessionvalueInfo

        class FloatresultInfo : public Core::JSON::Container {
        public:
            FloatresultInfo()
                : Core::JSON::Container()
            {
                Add(_T("success"), &Success);
                Add(_T("value"), &Value);
                Add(_T("failurereason"), &Failurereason);
            }

            FloatresultInfo(const FloatresultInfo&) = delete;
            FloatresultInfo& operator=(const FloatresultInfo&) = delete;

        public:
            Core::JSON::Boolean Success; // Returning whether this method failed or succeed
            Core::JSON::Float Value; // The returned float value
            Core::JSON::DecUInt32 Failurereason; // Reason why it's failed
        }; // class FloatresultInfo

        class FloatsessionvalueInfo : public Core::JSON::Container {
        public:
            FloatsessionvalueInfo()
                : Core::JSON::Container()
            {
                Add(_T("value"), &Value);
                Add(_T("session"), &Session);
            }

            FloatsessionvalueInfo(const FloatsessionvalueInfo&) = delete;
            FloatsessionvalueInfo& operator=(const FloatsessionvalueInfo&) = delete;

        public:
            Core::JSON::Float Value; // Generic Floating Point [32 bit] value
            Core::JSON::DecUInt32 Session; // ID of created session, used to identify sessions to control
        }; // class FloatsessionvalueInfo

        class MutecontrolInfo : public Core::JSON::Container {
        public:
            MutecontrolInfo()
                : Core::JSON::Container()
            {
                Add(_T("video"), &Video);
                Add(_T("audio"), &Audio);
            }

            MutecontrolInfo(const MutecontrolInfo&) = delete;
            MutecontrolInfo& operator=(const MutecontrolInfo&) = delete;

        public:
            Core::JSON::Boolean Video;
            Core::JSON::Boolean Audio;
        }; // class MutecontrolInfo

        class MediarequestInfo : public Core::JSON::Container {
        public:
            MediarequestInfo()
                : Core::JSON::Container()
            {
                Add(_T("mediaurl"), &Mediaurl);
                Add(_T("mode"), &Mode);
                Add(_T("manage"), &Manage);
                Add(_T("casocdmid"), &Casocdmid);
                Add(_T("casinitdata"), &Casinitdata);
                Add(_T("mute"), &Mute);
            }

            MediarequestInfo(const MediarequestInfo&) = delete;
            MediarequestInfo& operator=(const MediarequestInfo&) = delete;

        public:
            Core::JSON::String Mediaurl; // The URL to tune to can be tune://, ocap:// http:// https://
            Core::JSON::EnumType<ModeType> Mode; // The use of the tune request
            Core::JSON::EnumType<ManageType> Manage; // The type of CAS management to attach to the tune
            Core::JSON::String Casocdmid; // The well-known OCDM ID of the CAS to use
            Core::JSON::String Casinitdata; // CAS specific initdata for the selected media
            MutecontrolInfo Mute; // Sets if presentation should be muted [audio and video]
        }; // class MediarequestInfo

        class PlayerinitializedeventInfo : public Core::JSON::Container {
        public:
            PlayerinitializedeventInfo()
                : Core::JSON::Container()
            {
                Add(_T("sessionid"), &Sessionid);
            }

            PlayerinitializedeventInfo(const PlayerinitializedeventInfo&) = delete;
            PlayerinitializedeventInfo& operator=(const PlayerinitializedeventInfo&) = delete;

        public:
            Core::JSON::DecUInt32 Sessionid; // ID of created session, used to identify sessions to control
        }; // class PlayerinitializedeventInfo

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

        class SessionidresultInfo : public Core::JSON::Container {
        public:
            SessionidresultInfo()
                : Core::JSON::Container()
            {
                Add(_T("success"), &Success);
                Add(_T("sessionid"), &Sessionid);
                Add(_T("failurereason"), &Failurereason);
            }

            SessionidresultInfo(const SessionidresultInfo&) = delete;
            SessionidresultInfo& operator=(const SessionidresultInfo&) = delete;

        public:
            Core::JSON::Boolean Success; // Returning whether this method failed or succeed
            Core::JSON::DecUInt32 Sessionid; // The session ID created
            Core::JSON::DecUInt32 Failurereason; // Reason why it's failed
        }; // class SessionidresultInfo

        class StringarrayresultInfo : public Core::JSON::Container {
        public:
            StringarrayresultInfo()
                : Core::JSON::Container()
            {
                Add(_T("success"), &Success);
                Add(_T("value"), &Value);
                Add(_T("failurereason"), &Failurereason);
            }

            StringarrayresultInfo(const StringarrayresultInfo&) = delete;
            StringarrayresultInfo& operator=(const StringarrayresultInfo&) = delete;

        public:
            Core::JSON::Boolean Success; // Returning whether this method failed or succeed
            Core::JSON::ArrayType<Core::JSON::String> Value; // The returned string array value
            Core::JSON::DecUInt32 Failurereason; // Reason why it's failed
        }; // class StringarrayresultInfo

        class StringresultInfo : public Core::JSON::Container {
        public:
            StringresultInfo()
                : Core::JSON::Container()
            {
                Add(_T("success"), &Success);
                Add(_T("value"), &Value);
                Add(_T("failurereason"), &Failurereason);
            }

            StringresultInfo(const StringresultInfo&) = delete;
            StringresultInfo& operator=(const StringresultInfo&) = delete;

        public:
            Core::JSON::Boolean Success; // Returning whether this method failed or succeed
            Core::JSON::String Value; // The returned string value
            Core::JSON::DecUInt32 Failurereason; // Reason why it's failed
        }; // class StringresultInfo

        class StringsessionvalueInfo : public Core::JSON::Container {
        public:
            StringsessionvalueInfo()
                : Core::JSON::Container()
            {
                Add(_T("value"), &Value);
                Add(_T("session"), &Session);
            }

            StringsessionvalueInfo(const StringsessionvalueInfo&) = delete;
            StringsessionvalueInfo& operator=(const StringsessionvalueInfo&) = delete;

        public:
            Core::JSON::String Value; // Generic string value
            Core::JSON::DecUInt32 Session; // ID of created session, used to identify sessions to control
        }; // class StringsessionvalueInfo

        class WarningerroreventInfo : public Core::JSON::Container {
        public:
            WarningerroreventInfo()
                : Core::JSON::Container()
            {
                Add(_T("sessionid"), &Sessionid);
                Add(_T("code"), &Code);
                Add(_T("description"), &Description);
            }

            WarningerroreventInfo(const WarningerroreventInfo&) = delete;
            WarningerroreventInfo& operator=(const WarningerroreventInfo&) = delete;

        public:
            Core::JSON::DecUInt32 Sessionid; // ID of created session, used to identify sessions to control
            Core::JSON::DecUInt32 Code;
            Core::JSON::String Description;
        }; // class WarningerroreventInfo

        // Method params/result classes
        //

        class FloatarrayresultData : public Core::JSON::Container {
        public:
            FloatarrayresultData()
                : Core::JSON::Container()
            {
                Add(_T("success"), &Success);
                Add(_T("value"), &Value);
                Add(_T("failurereason"), &Failurereason);
            }

            FloatarrayresultData(const FloatarrayresultData&) = delete;
            FloatarrayresultData& operator=(const FloatarrayresultData&) = delete;

        public:
            Core::JSON::Boolean Success; // Returning whether this method failed or succeed
            Core::JSON::ArrayType<Core::JSON::Float> Value; // The returned float array value
            Core::JSON::DecUInt32 Failurereason; // Reason why it's failed
        }; // class FloatarrayresultData

        class GetmuteResultData : public Core::JSON::Container {
        public:
            GetmuteResultData()
                : Core::JSON::Container()
            {
                Add(_T("success"), &Success);
                Add(_T("video"), &Video);
                Add(_T("audio"), &Audio);
                Add(_T("failurereason"), &Failurereason);
            }

            GetmuteResultData(const GetmuteResultData&) = delete;
            GetmuteResultData& operator=(const GetmuteResultData&) = delete;

        public:
            Core::JSON::Boolean Success; // Returning whether this method failed or succeed
            Core::JSON::Boolean Video; // Muted [true] or unmuted [false] video.
            Core::JSON::Boolean Audio; // Mute [true] or unmuted [false] audio.
            Core::JSON::DecUInt32 Failurereason; // Reason why it's failed
        }; // class GetmuteResultData

        class BitratechangeeventData : public Core::JSON::Container {
        public:
            BitratechangeeventData()
                : Core::JSON::Container()
            {
                Add(_T("sessionid"), &Sessionid);
                Add(_T("bitrate"), &Bitrate);
                Add(_T("reason"), &Reason);
            }

            BitratechangeeventData(const BitratechangeeventData&) = delete;
            BitratechangeeventData& operator=(const BitratechangeeventData&) = delete;

        public:
            Core::JSON::DecUInt32 Sessionid; // ID of created session, used to identify sessions to control
            Core::JSON::DecUInt32 Bitrate;
            Core::JSON::String Reason;
        }; // class BitratechangeeventData

        class MediaopenedeventData : public Core::JSON::Container {
        public:
            MediaopenedeventData()
                : Core::JSON::Container()
            {
                Add(_T("sessionid"), &Sessionid);
                Add(_T("mediatype"), &Mediatype);
                Add(_T("duration"), &Duration);
                Add(_T("width"), &Width);
                Add(_T("height"), &Height);
                Add(_T("availablespeeds"), &Availablespeeds);
                Add(_T("availableaudiolanguages"), &Availableaudiolanguages);
                Add(_T("availablesubtitleslanguages"), &Availablesubtitleslanguages);
            }

            MediaopenedeventData(const MediaopenedeventData&) = delete;
            MediaopenedeventData& operator=(const MediaopenedeventData&) = delete;

        public:
            Core::JSON::DecUInt32 Sessionid; // ID of created session, used to identify sessions to control
            Core::JSON::String Mediatype; // The type of media
            Core::JSON::DecUInt32 Duration; // The duration in seconds the media lasts, if known
            Core::JSON::DecUInt32 Width; // The horizontal size of the image
            Core::JSON::DecUInt32 Height; // The vertical size of the image
            Core::JSON::ArrayType<Core::JSON::Float> Availablespeeds;
            Core::JSON::ArrayType<Core::JSON::String> Availableaudiolanguages;
            Core::JSON::ArrayType<Core::JSON::String> Availablesubtitleslanguages;
        }; // class MediaopenedeventData

        class ProgresseventData : public Core::JSON::Container {
        public:
            ProgresseventData()
                : Core::JSON::Container()
            {
                Add(_T("sessionid"), &Sessionid);
                Add(_T("position"), &Position);
                Add(_T("duration"), &Duration);
                Add(_T("speed"), &Speed);
                Add(_T("start"), &Start);
                Add(_T("end"), &End);
            }

            ProgresseventData(const ProgresseventData&) = delete;
            ProgresseventData& operator=(const ProgresseventData&) = delete;

        public:
            Core::JSON::DecUInt32 Sessionid; // ID of created session, used to identify sessions to control
            Core::JSON::Float Position;
            Core::JSON::Float Duration;
            Core::JSON::Float Speed;
            Core::JSON::Float Start;
            Core::JSON::Float End;
        }; // class ProgresseventData

        class StatuseventData : public Core::JSON::Container {
        public:
            StatuseventData()
                : Core::JSON::Container()
            {
                Add(_T("sessionid"), &Sessionid);
                Add(_T("position"), &Position);
                Add(_T("duration"), &Duration);
            }

            StatuseventData(const StatuseventData&) = delete;
            StatuseventData& operator=(const StatuseventData&) = delete;

        public:
            Core::JSON::DecUInt32 Sessionid; // ID of created session, used to identify sessions to control
            Core::JSON::Float Position;
            Core::JSON::Float Duration;
        }; // class StatuseventData

        class MutecontrolsessionvalueData : public Core::JSON::Container {
        public:
            MutecontrolsessionvalueData()
                : Core::JSON::Container()
            {
                Add(_T("session"), &Session);
                Add(_T("video"), &Video);
                Add(_T("audio"), &Audio);
            }

            MutecontrolsessionvalueData(const MutecontrolsessionvalueData&) = delete;
            MutecontrolsessionvalueData& operator=(const MutecontrolsessionvalueData&) = delete;

        public:
            Core::JSON::DecUInt32 Session; // ID of created session, used to identify sessions to control
            Core::JSON::Boolean Video;
            Core::JSON::Boolean Audio;
        }; // class MutecontrolsessionvalueData

        class RectanglesessionvalueData : public Core::JSON::Container {
        public:
            RectanglesessionvalueData()
                : Core::JSON::Container()
            {
                Add(_T("x"), &X);
                Add(_T("y"), &Y);
                Add(_T("w"), &W);
                Add(_T("h"), &H);
                Add(_T("session"), &Session);
            }

            RectanglesessionvalueData(const RectanglesessionvalueData&) = delete;
            RectanglesessionvalueData& operator=(const RectanglesessionvalueData&) = delete;

        public:
            Core::JSON::DecUInt32 X; // Rectangle X Position
            Core::JSON::DecUInt32 Y; // Rectangle Y Position
            Core::JSON::DecUInt32 W; // Rectangle Width
            Core::JSON::DecUInt32 H; // Rectangle Height
            Core::JSON::DecUInt32 Session; // ID of created session, used to identify sessions to control
        }; // class RectanglesessionvalueData

    } // namespace UnifiedPlayer

} // namespace JsonData

// Enum conversion handlers
ENUM_CONVERSION_HANDLER(JsonData::UnifiedPlayer::ModeType);
ENUM_CONVERSION_HANDLER(JsonData::UnifiedPlayer::ManageType);

}

