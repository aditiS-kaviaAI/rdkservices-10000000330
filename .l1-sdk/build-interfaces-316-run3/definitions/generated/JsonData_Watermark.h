// C++ classes for Watermark API JSON-RPC API.
// Generated automatically from 'Watermark.json'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>

namespace WPEFramework {

namespace JsonData {

    namespace Watermark {

        // Common classes
        //

        class CreaterequestInfo : public Core::JSON::Container {
        public:
            CreaterequestInfo()
                : Core::JSON::Container()
            {
                Add(_T("id"), &Id);
                Add(_T("zorder"), &Zorder);
            }

            CreaterequestInfo(const CreaterequestInfo&) = delete;
            CreaterequestInfo& operator=(const CreaterequestInfo&) = delete;

        public:
            Core::JSON::DecUInt32 Id;
            Core::JSON::DecUInt32 Zorder;
        }; // class CreaterequestInfo

        class PalettedwatermarkdataInfo : public Core::JSON::Container {
        public:
            PalettedwatermarkdataInfo()
                : Core::JSON::Container()
            {
                Add(_T("imagekey"), &Imagekey);
                Add(_T("imagewidth"), &Imagewidth);
                Add(_T("imageheight"), &Imageheight);
                Add(_T("clutkey"), &Clutkey);
                Add(_T("clutsize"), &Clutsize);
            }

            PalettedwatermarkdataInfo(const PalettedwatermarkdataInfo&) = delete;
            PalettedwatermarkdataInfo& operator=(const PalettedwatermarkdataInfo&) = delete;

        public:
            Core::JSON::DecUInt32 Imagekey; // shared memory key where image data is stored
            Core::JSON::DecUInt32 Imagewidth; // shared memory key where image data is stored
            Core::JSON::DecUInt32 Imageheight; // shared memory key where image data is stored
            Core::JSON::DecUInt32 Clutkey;
            Core::JSON::DecUInt32 Clutsize;
        }; // class PalettedwatermarkdataInfo

        // Method params/result classes
        //

        class InitializerequestData : public Core::JSON::Container {
        public:
            InitializerequestData()
                : Core::JSON::Container()
            {
                Add(_T("waylanddisplay"), &Waylanddisplay);
                Add(_T("synchronized"), &Synchronized);
            }

            InitializerequestData(const InitializerequestData&) = delete;
            InitializerequestData& operator=(const InitializerequestData&) = delete;

        public:
            Core::JSON::String Waylanddisplay;
            Core::JSON::Boolean Synchronized;
        }; // class InitializerequestData

        class OnwatermarkrenderfailedParamsData : public Core::JSON::Container {
        public:
            OnwatermarkrenderfailedParamsData()
                : Core::JSON::Container()
            {
                Add(_T("image"), &Image);
            }

            OnwatermarkrenderfailedParamsData(const OnwatermarkrenderfailedParamsData&) = delete;
            OnwatermarkrenderfailedParamsData& operator=(const OnwatermarkrenderfailedParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 Image; // image id whose draw is failed
        }; // class OnwatermarkrenderfailedParamsData

        class OnwatermarkrequeststatusParamsData : public Core::JSON::Container {
        public:
            OnwatermarkrequeststatusParamsData()
                : Core::JSON::Container()
            {
                Add(_T("id"), &Id);
                Add(_T("request"), &Request);
                Add(_T("status"), &Status);
            }

            OnwatermarkrequeststatusParamsData(const OnwatermarkrequeststatusParamsData&) = delete;
            OnwatermarkrequeststatusParamsData& operator=(const OnwatermarkrequeststatusParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 Id; // request id whose status is returned
            Core::JSON::String Request; // name of the request whose status is returned
            Core::JSON::Boolean Status; // status of request
        }; // class OnwatermarkrequeststatusParamsData

        class SetpalettedwatermarkrequestData : public Core::JSON::Container {
        public:
            SetpalettedwatermarkrequestData()
                : Core::JSON::Container()
            {
                Add(_T("id"), &Id);
                Add(_T("data"), &Data);
            }

            SetpalettedwatermarkrequestData(const SetpalettedwatermarkrequestData&) = delete;
            SetpalettedwatermarkrequestData& operator=(const SetpalettedwatermarkrequestData&) = delete;

        public:
            Core::JSON::DecUInt32 Id;
            PalettedwatermarkdataInfo Data;
        }; // class SetpalettedwatermarkrequestData

        class UpdaterequestData : public Core::JSON::Container {
        public:
            UpdaterequestData()
                : Core::JSON::Container()
            {
                Add(_T("id"), &Id);
                Add(_T("key"), &Key);
                Add(_T("size"), &Size);
            }

            UpdaterequestData(const UpdaterequestData&) = delete;
            UpdaterequestData& operator=(const UpdaterequestData&) = delete;

        public:
            Core::JSON::DecUInt32 Id;
            Core::JSON::DecUInt32 Key;
            Core::JSON::DecUInt32 Size;
        }; // class UpdaterequestData

    } // namespace Watermark

} // namespace JsonData

}

