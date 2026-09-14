// C++ classes for AVInput API JSON-RPC API.
// Generated automatically from 'AVInput.json'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>

namespace WPEFramework {

namespace JsonData {

    namespace AVInput {

        // Common classes
        //

        class DevicesInfo : public Core::JSON::Container {
        public:
            DevicesInfo()
                : Core::JSON::Container()
            {
                _Init();
            }

            DevicesInfo(const DevicesInfo& _other)
                : Core::JSON::Container()
                , Id(_other.Id)
                , Locator(_other.Locator)
                , Connected(_other.Connected)
            {
                _Init();
            }

            DevicesInfo& operator=(const DevicesInfo& _rhs)
            {
                Id = _rhs.Id;
                Locator = _rhs.Locator;
                Connected = _rhs.Connected;
                return (*this);
            }

        private:
            void _Init()
            {
                Add(_T("id"), &Id);
                Add(_T("locator"), &Locator);
                Add(_T("connected"), &Connected);
            }

        public:
            Core::JSON::DecUInt32 Id;
            Core::JSON::String Locator;
            Core::JSON::Boolean Connected;
        }; // class DevicesInfo

        class GetEdidVersionParamsInfo : public Core::JSON::Container {
        public:
            GetEdidVersionParamsInfo()
                : Core::JSON::Container()
            {
                Add(_T("portId"), &PortId);
            }

            GetEdidVersionParamsInfo(const GetEdidVersionParamsInfo&) = delete;
            GetEdidVersionParamsInfo& operator=(const GetEdidVersionParamsInfo&) = delete;

        public:
            Core::JSON::DecUInt32 PortId;
        }; // class GetEdidVersionParamsInfo

        class GetInputDevicesParamsInfo : public Core::JSON::Container {
        public:
            GetInputDevicesParamsInfo()
                : Core::JSON::Container()
            {
                Add(_T("typeOfInput"), &TypeOfInput);
            }

            GetInputDevicesParamsInfo(const GetInputDevicesParamsInfo&) = delete;
            GetInputDevicesParamsInfo& operator=(const GetInputDevicesParamsInfo&) = delete;

        public:
            Core::JSON::String TypeOfInput;
        }; // class GetInputDevicesParamsInfo

        class GetInputDevicesResultInfo : public Core::JSON::Container {
        public:
            GetInputDevicesResultInfo()
                : Core::JSON::Container()
            {
                Add(_T("devices"), &Devices);
            }

            GetInputDevicesResultInfo(const GetInputDevicesResultInfo&) = delete;
            GetInputDevicesResultInfo& operator=(const GetInputDevicesResultInfo&) = delete;

        public:
            Core::JSON::ArrayType<DevicesInfo> Devices;
        }; // class GetInputDevicesResultInfo

        class GetSPDResultInfo : public Core::JSON::Container {
        public:
            GetSPDResultInfo()
                : Core::JSON::Container()
            {
                Add(_T("HDMISPD"), &HDMISPD);
            }

            GetSPDResultInfo(const GetSPDResultInfo&) = delete;
            GetSPDResultInfo& operator=(const GetSPDResultInfo&) = delete;

        public:
            Core::JSON::String HDMISPD;
        }; // class GetSPDResultInfo

        // Method params/result classes
        //

        class ContentProtectedResultData : public Core::JSON::Container {
        public:
            ContentProtectedResultData()
                : Core::JSON::Container()
            {
                Add(_T("isContentProtected"), &IsContentProtected);
                Add(_T("success"), &Success);
            }

            ContentProtectedResultData(const ContentProtectedResultData&) = delete;
            ContentProtectedResultData& operator=(const ContentProtectedResultData&) = delete;

        public:
            Core::JSON::Boolean IsContentProtected;
            Core::JSON::Boolean Success;
        }; // class ContentProtectedResultData

        class CurrentVideoModeResultData : public Core::JSON::Container {
        public:
            CurrentVideoModeResultData()
                : Core::JSON::Container()
            {
                Add(_T("currentVideoMode"), &CurrentVideoMode);
                Add(_T("message"), &Message);
                Add(_T("success"), &Success);
            }

            CurrentVideoModeResultData(const CurrentVideoModeResultData&) = delete;
            CurrentVideoModeResultData& operator=(const CurrentVideoModeResultData&) = delete;

        public:
            Core::JSON::String CurrentVideoMode;
            Core::JSON::String Message;
            Core::JSON::Boolean Success;
        }; // class CurrentVideoModeResultData

        class GameFeatureStatusUpdateParamsData : public Core::JSON::Container {
        public:
            GameFeatureStatusUpdateParamsData()
                : Core::JSON::Container()
            {
                Add(_T("id"), &Id);
                Add(_T("gameFeature"), &GameFeature);
                Add(_T("mode"), &Mode);
            }

            GameFeatureStatusUpdateParamsData(const GameFeatureStatusUpdateParamsData&) = delete;
            GameFeatureStatusUpdateParamsData& operator=(const GameFeatureStatusUpdateParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 Id;
            Core::JSON::String GameFeature;
            Core::JSON::Boolean Mode;
        }; // class GameFeatureStatusUpdateParamsData

        class GetEdidVersionResultData : public Core::JSON::Container {
        public:
            GetEdidVersionResultData()
                : Core::JSON::Container()
            {
                Add(_T("edidVersion"), &EdidVersion);
            }

            GetEdidVersionResultData(const GetEdidVersionResultData&) = delete;
            GetEdidVersionResultData& operator=(const GetEdidVersionResultData&) = delete;

        public:
            Core::JSON::String EdidVersion;
        }; // class GetEdidVersionResultData

        class GetGameFeatureStatusParamsData : public Core::JSON::Container {
        public:
            GetGameFeatureStatusParamsData()
                : Core::JSON::Container()
            {
                Add(_T("portId"), &PortId);
                Add(_T("gameFeature"), &GameFeature);
            }

            GetGameFeatureStatusParamsData(const GetGameFeatureStatusParamsData&) = delete;
            GetGameFeatureStatusParamsData& operator=(const GetGameFeatureStatusParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 PortId;
            Core::JSON::String GameFeature;
        }; // class GetGameFeatureStatusParamsData

        class GetGameFeatureStatusResultData : public Core::JSON::Container {
        public:
            GetGameFeatureStatusResultData()
                : Core::JSON::Container()
            {
                Add(_T("mode"), &Mode);
            }

            GetGameFeatureStatusResultData(const GetGameFeatureStatusResultData&) = delete;
            GetGameFeatureStatusResultData& operator=(const GetGameFeatureStatusResultData&) = delete;

        public:
            Core::JSON::Boolean Mode;
        }; // class GetGameFeatureStatusResultData

        class GetSupportedGameFeaturesResultData : public Core::JSON::Container {
        public:
            GetSupportedGameFeaturesResultData()
                : Core::JSON::Container()
            {
                Add(_T("supportedGameFeatures"), &SupportedGameFeatures);
            }

            GetSupportedGameFeaturesResultData(const GetSupportedGameFeaturesResultData&) = delete;
            GetSupportedGameFeaturesResultData& operator=(const GetSupportedGameFeaturesResultData&) = delete;

        public:
            Core::JSON::ArrayType<Core::JSON::String> SupportedGameFeatures;
        }; // class GetSupportedGameFeaturesResultData

        class NumberOfInputsResultData : public Core::JSON::Container {
        public:
            NumberOfInputsResultData()
                : Core::JSON::Container()
            {
                Add(_T("numberOfInputs"), &NumberOfInputs);
                Add(_T("message"), &Message);
                Add(_T("success"), &Success);
            }

            NumberOfInputsResultData(const NumberOfInputsResultData&) = delete;
            NumberOfInputsResultData& operator=(const NumberOfInputsResultData&) = delete;

        public:
            Core::JSON::DecUInt32 NumberOfInputs;
            Core::JSON::String Message;
            Core::JSON::Boolean Success;
        }; // class NumberOfInputsResultData

        class OnInputStatusChangedParamsData : public Core::JSON::Container {
        public:
            OnInputStatusChangedParamsData()
                : Core::JSON::Container()
            {
                Add(_T("id"), &Id);
                Add(_T("locator"), &Locator);
                Add(_T("status"), &Status);
            }

            OnInputStatusChangedParamsData(const OnInputStatusChangedParamsData&) = delete;
            OnInputStatusChangedParamsData& operator=(const OnInputStatusChangedParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 Id;
            Core::JSON::String Locator;
            Core::JSON::String Status;
        }; // class OnInputStatusChangedParamsData

        class OnSignalChangedParamsData : public Core::JSON::Container {
        public:
            OnSignalChangedParamsData()
                : Core::JSON::Container()
            {
                Add(_T("id"), &Id);
                Add(_T("locator"), &Locator);
                Add(_T("signalStatus"), &SignalStatus);
            }

            OnSignalChangedParamsData(const OnSignalChangedParamsData&) = delete;
            OnSignalChangedParamsData& operator=(const OnSignalChangedParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 Id;
            Core::JSON::String Locator;
            Core::JSON::String SignalStatus;
        }; // class OnSignalChangedParamsData

        class ReadEDIDResultData : public Core::JSON::Container {
        public:
            ReadEDIDResultData()
                : Core::JSON::Container()
            {
                Add(_T("EDID"), &EDID);
            }

            ReadEDIDResultData(const ReadEDIDResultData&) = delete;
            ReadEDIDResultData& operator=(const ReadEDIDResultData&) = delete;

        public:
            Core::JSON::String EDID;
        }; // class ReadEDIDResultData

        class SetEdidVersionParamsData : public Core::JSON::Container {
        public:
            SetEdidVersionParamsData()
                : Core::JSON::Container()
            {
                Add(_T("portId"), &PortId);
                Add(_T("edidVersion"), &EdidVersion);
            }

            SetEdidVersionParamsData(const SetEdidVersionParamsData&) = delete;
            SetEdidVersionParamsData& operator=(const SetEdidVersionParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 PortId;
            Core::JSON::String EdidVersion;
        }; // class SetEdidVersionParamsData

        class SetVideoRectangleParamsData : public Core::JSON::Container {
        public:
            SetVideoRectangleParamsData()
                : Core::JSON::Container()
            {
                Add(_T("x"), &X);
                Add(_T("y"), &Y);
                Add(_T("w"), &W);
                Add(_T("h"), &H);
                Add(_T("typeOfInput"), &TypeOfInput);
            }

            SetVideoRectangleParamsData(const SetVideoRectangleParamsData&) = delete;
            SetVideoRectangleParamsData& operator=(const SetVideoRectangleParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 X;
            Core::JSON::DecUInt32 Y;
            Core::JSON::DecUInt32 W;
            Core::JSON::DecUInt32 H;
            Core::JSON::String TypeOfInput;
        }; // class SetVideoRectangleParamsData

        class StartInputParamsData : public Core::JSON::Container {
        public:
            StartInputParamsData()
                : Core::JSON::Container()
            {
                Add(_T("portId"), &PortId);
                Add(_T("typeOfInput"), &TypeOfInput);
            }

            StartInputParamsData(const StartInputParamsData&) = delete;
            StartInputParamsData& operator=(const StartInputParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 PortId;
            Core::JSON::String TypeOfInput;
        }; // class StartInputParamsData

        class VideoStreamInfoUpdateParamsData : public Core::JSON::Container {
        public:
            VideoStreamInfoUpdateParamsData()
                : Core::JSON::Container()
            {
                Add(_T("id"), &Id);
                Add(_T("locator"), &Locator);
                Add(_T("width"), &Width);
                Add(_T("height"), &Height);
                Add(_T("progressive"), &Progressive);
                Add(_T("frameRateN"), &FrameRateN);
                Add(_T("frameRateD"), &FrameRateD);
            }

            VideoStreamInfoUpdateParamsData(const VideoStreamInfoUpdateParamsData&) = delete;
            VideoStreamInfoUpdateParamsData& operator=(const VideoStreamInfoUpdateParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 Id;
            Core::JSON::String Locator;
            Core::JSON::DecUInt32 Width;
            Core::JSON::DecUInt32 Height;
            Core::JSON::Boolean Progressive;
            Core::JSON::DecUInt32 FrameRateN;
            Core::JSON::DecUInt32 FrameRateD;
        }; // class VideoStreamInfoUpdateParamsData

        class WriteEDIDParamsData : public Core::JSON::Container {
        public:
            WriteEDIDParamsData()
                : Core::JSON::Container()
            {
                Add(_T("portId"), &PortId);
                Add(_T("message"), &Message);
            }

            WriteEDIDParamsData(const WriteEDIDParamsData&) = delete;
            WriteEDIDParamsData& operator=(const WriteEDIDParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 PortId;
            Core::JSON::String Message;
        }; // class WriteEDIDParamsData

    } // namespace AVInput

} // namespace JsonData

}

