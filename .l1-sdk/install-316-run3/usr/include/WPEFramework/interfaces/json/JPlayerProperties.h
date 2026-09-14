// Generated automatically from 'IPlayerInfo.h'. DO NOT EDIT.

#pragma once

#include "Module.h"
#include "JsonData_PlayerProperties.h"
#include <interfaces/IPlayerInfo.h>

namespace WPEFramework {

namespace Exchange {

    namespace JPlayerProperties {

        namespace Version {

            constexpr uint8_t Major = 1;
            constexpr uint8_t Minor = 0;
            constexpr uint8_t Patch = 0;

        } // namespace Version

        using JSONRPC = PluginHost::JSONRPC;

        static void Register(JSONRPC& _module_, IPlayerProperties* _impl_)
        {
            ASSERT(_impl_ != nullptr);

            _module_.RegisterVersion(_T("JPlayerProperties"), Version::Major, Version::Minor, Version::Patch);

            // Register methods and properties...

            // Method: audiocodecs
            _module_.Register<void, Core::JSON::ArrayType<Core::JSON::EnumType<Exchange::IPlayerProperties::AudioCodec>>>(_T("audiocodecs"), 
                [_impl_](Core::JSON::ArrayType<Core::JSON::EnumType<Exchange::IPlayerProperties::AudioCodec>>& codec) -> uint32_t {
                    uint32_t _errorCode;

                    RPC::IIteratorType<IPlayerProperties::AudioCodec, ID_PLAYER_PROPERTIES_AUDIO>* _codec{};

                    _errorCode = _impl_->AudioCodecs(_codec);

                    if (_errorCode == Core::ERROR_NONE) {
                        ASSERT(_codec != nullptr);

                        if (_codec != nullptr) {
                            Exchange::IPlayerProperties::AudioCodec _resultItem_{};
                            while (_codec->Next(_resultItem_) == true) { codec.Add() = _resultItem_; }
                            _codec->Release();
                        }
                    }

                    return (_errorCode);
                });

            // Method: videocodecs
            _module_.Register<void, Core::JSON::ArrayType<Core::JSON::EnumType<Exchange::IPlayerProperties::VideoCodec>>>(_T("videocodecs"), 
                [_impl_](Core::JSON::ArrayType<Core::JSON::EnumType<Exchange::IPlayerProperties::VideoCodec>>& codec) -> uint32_t {
                    uint32_t _errorCode;

                    RPC::IIteratorType<IPlayerProperties::VideoCodec, ID_PLAYER_PROPERTIES_VIDEO>* _codec{};

                    _errorCode = _impl_->VideoCodecs(_codec);

                    if (_errorCode == Core::ERROR_NONE) {
                        ASSERT(_codec != nullptr);

                        if (_codec != nullptr) {
                            Exchange::IPlayerProperties::VideoCodec _resultItem_{};
                            while (_codec->Next(_resultItem_) == true) { codec.Add() = _resultItem_; }
                            _codec->Release();
                        }
                    }

                    return (_errorCode);
                });

            // Property: resolution - Current Video playback resolution (r/o)
            _module_.Register<void, Core::JSON::EnumType<Exchange::IPlayerProperties::PlaybackResolution>>(_T("resolution"), 
                [_impl_](Core::JSON::EnumType<Exchange::IPlayerProperties::PlaybackResolution>& result) -> uint32_t {
                    uint32_t _errorCode;

                    // read-only property get
                    Exchange::IPlayerProperties::PlaybackResolution _result{};

                    _errorCode = _impl_->Resolution(_result);

                    if (_errorCode == Core::ERROR_NONE) {
                        result = _result;
                    }

                    return (_errorCode);
                });

            // Property: isaudioequivalenceenabled - Checks Loudness Equivalence in platform (r/o)
            _module_.Register<void, Core::JSON::Boolean>(_T("isaudioequivalenceenabled"), 
                [_impl_](Core::JSON::Boolean& result) -> uint32_t {
                    uint32_t _errorCode;

                    // read-only property get
                    bool _result{};

                    _errorCode = _impl_->IsAudioEquivalenceEnabled(_result);

                    if (_errorCode == Core::ERROR_NONE) {
                        result = _result;
                    }

                    return (_errorCode);
                });

        }

        static void Unregister(JSONRPC& _module_)
        {
            // Unregister methods and properties...
            _module_.Unregister(_T("audiocodecs"));
            _module_.Unregister(_T("videocodecs"));
            _module_.Unregister(_T("resolution"));
            _module_.Unregister(_T("isaudioequivalenceenabled"));
        }

    } // namespace JPlayerProperties

} // namespace Exchange

} // namespace WPEFramework

