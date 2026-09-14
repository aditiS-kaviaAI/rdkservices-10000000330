// C++ classes for Test Controller API JSON-RPC API.
// Generated automatically from 'TestController.json'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>

namespace WPEFramework {

namespace JsonData {

    namespace TestController {

        // Method params/result classes
        //

        class DescriptionData : public Core::JSON::Container {
        public:
            DescriptionData()
                : Core::JSON::Container()
            {
                Add(_T("description"), &Description);
            }

            DescriptionData(const DescriptionData&) = delete;
            DescriptionData& operator=(const DescriptionData&) = delete;

        public:
            Core::JSON::String Description; // Test description
        }; // class DescriptionData

        class RunParamsData : public Core::JSON::Container {
        public:
            RunParamsData()
                : Core::JSON::Container()
            {
                Add(_T("category"), &Category);
                Add(_T("test"), &Test);
                Add(_T("args"), &Args);
            }

            RunParamsData(const RunParamsData&) = delete;
            RunParamsData& operator=(const RunParamsData&) = delete;

        public:
            Core::JSON::String Category; // Test category name, if omitted: all tests are executed
            Core::JSON::String Test; // Test name, if omitted: all tests of category are executed
            Core::JSON::String Args; // The test arguments in JSON format
        }; // class RunParamsData

        class RunResultData : public Core::JSON::Container {
        public:
            RunResultData()
                : Core::JSON::Container()
            {
                _Init();
            }

            RunResultData(const RunResultData& _other)
                : Core::JSON::Container()
                , Test(_other.Test)
                , Status(_other.Status)
            {
                _Init();
            }

            RunResultData& operator=(const RunResultData& _rhs)
            {
                Test = _rhs.Test;
                Status = _rhs.Status;
                return (*this);
            }

        private:
            void _Init()
            {
                Add(_T("test"), &Test);
                Add(_T("status"), &Status);
            }

        public:
            Core::JSON::String Test; // Test name
            Core::JSON::String Status; // Test status
        }; // class RunResultData

    } // namespace TestController

} // namespace JsonData

}

