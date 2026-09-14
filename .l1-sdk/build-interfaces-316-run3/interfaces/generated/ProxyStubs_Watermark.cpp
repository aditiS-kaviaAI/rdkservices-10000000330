//
// generated automatically from "IWatermark.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IWatermark
//   - class Exchange::IWatermark::INotification
//

#include "Module.h"
#include "IWatermark.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IWatermark interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Initialize(string, bool) = 0
    //  (1) virtual uint32_t Deinitialize() = 0
    //  (2) virtual uint32_t Register(Exchange::IWatermark::INotification*) = 0
    //  (3) virtual uint32_t Unregister(Exchange::IWatermark::INotification*) = 0
    //  (4) virtual bool ShowWatermark(const bool) = 0
    //  (5) virtual bool CreateWatermark(uint32_t, uint32_t) = 0
    //  (6) virtual bool UpdateWatermark(uint32_t, uint32_t, uint32_t) = 0
    //  (7) virtual bool AdjustWatermark(uint32_t, uint32_t) = 0
    //  (8) virtual bool DeleteWatermark(uint32_t) = 0
    //  (9) virtual Exchange::PalettedImageData GetPalettedWatermark(uint32_t) = 0
    //  (10) virtual bool ModifyPalettedWatermark(uint32_t, Exchange::PalettedImageData) = 0
    //

    ProxyStub::MethodHandler ExchangeWatermarkStubMethods[] = {
        // (0) virtual uint32_t Initialize(string, bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWatermark* implementation = reinterpret_cast<Exchange::IWatermark*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            string _waylandDisplay = reader.Text();
            bool _synchronized = reader.Boolean();

            uint32_t result = implementation->Initialize(_waylandDisplay, _synchronized);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (1) virtual uint32_t Deinitialize() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWatermark* implementation = reinterpret_cast<Exchange::IWatermark*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Deinitialize();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t Register(Exchange::IWatermark::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWatermark* implementation = reinterpret_cast<Exchange::IWatermark*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id notificationImplementation = reader.Number<Core::instance_id>();

            Exchange::IWatermark::INotification* _notification = nullptr;
            ProxyStub::UnknownProxy* notificationProxy = nullptr;
            if (notificationImplementation != 0) {
                notificationProxy = RPC::Administrator::Instance().ProxyInstance(channel, notificationImplementation, false, _notification);
                ASSERT((_notification != nullptr) && (notificationProxy != nullptr));
            }

            uint32_t result = implementation->Register(_notification);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (notificationProxy != nullptr) {
                RPC::Administrator::Instance().Release(notificationProxy, message->Response());
            }
        },

        // (3) virtual uint32_t Unregister(Exchange::IWatermark::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWatermark* implementation = reinterpret_cast<Exchange::IWatermark*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id notificationImplementation = reader.Number<Core::instance_id>();

            Exchange::IWatermark::INotification* _notification = nullptr;
            ProxyStub::UnknownProxy* notificationProxy = nullptr;
            if (notificationImplementation != 0) {
                notificationProxy = RPC::Administrator::Instance().ProxyInstance(channel, notificationImplementation, false, _notification);
                ASSERT((_notification != nullptr) && (notificationProxy != nullptr));
            }

            uint32_t result = implementation->Unregister(_notification);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (notificationProxy != nullptr) {
                RPC::Administrator::Instance().Release(notificationProxy, message->Response());
            }
        },

        // (4) virtual bool ShowWatermark(const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWatermark* implementation = reinterpret_cast<Exchange::IWatermark*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const bool _show = reader.Boolean();

            bool result = implementation->ShowWatermark(_show);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (5) virtual bool CreateWatermark(uint32_t, uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWatermark* implementation = reinterpret_cast<Exchange::IWatermark*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            uint32_t _id = reader.Number<uint32_t>();
            uint32_t _zorder = reader.Number<uint32_t>();

            bool result = implementation->CreateWatermark(_id, _zorder);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (6) virtual bool UpdateWatermark(uint32_t, uint32_t, uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWatermark* implementation = reinterpret_cast<Exchange::IWatermark*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            uint32_t _id = reader.Number<uint32_t>();
            uint32_t _key = reader.Number<uint32_t>();
            uint32_t _size = reader.Number<uint32_t>();

            bool result = implementation->UpdateWatermark(_id, _key, _size);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (7) virtual bool AdjustWatermark(uint32_t, uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWatermark* implementation = reinterpret_cast<Exchange::IWatermark*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            uint32_t _id = reader.Number<uint32_t>();
            uint32_t _zorder = reader.Number<uint32_t>();

            bool result = implementation->AdjustWatermark(_id, _zorder);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (8) virtual bool DeleteWatermark(uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWatermark* implementation = reinterpret_cast<Exchange::IWatermark*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            uint32_t _id = reader.Number<uint32_t>();

            bool result = implementation->DeleteWatermark(_id);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (9) virtual Exchange::PalettedImageData GetPalettedWatermark(uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWatermark* implementation = reinterpret_cast<Exchange::IWatermark*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            uint32_t _id = reader.Number<uint32_t>();

            Exchange::PalettedImageData result = implementation->GetPalettedWatermark(_id);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result.imageKey);
            writer.Number<uint32_t>(result.imageWidth);
            writer.Number<uint32_t>(result.imageHeight);
            writer.Number<uint32_t>(result.clutKey);
            writer.Number<uint32_t>(result.clutSize);
            writer.Text(result.clutType);
        },

        // (10) virtual bool ModifyPalettedWatermark(uint32_t, Exchange::PalettedImageData) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWatermark* implementation = reinterpret_cast<Exchange::IWatermark*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            uint32_t _id = reader.Number<uint32_t>();
            Exchange::PalettedImageData _data{};
            _data.imageKey = reader.Number<uint32_t>();
            _data.imageWidth = reader.Number<uint32_t>();
            _data.imageHeight = reader.Number<uint32_t>();
            _data.clutKey = reader.Number<uint32_t>();
            _data.clutSize = reader.Number<uint32_t>();
            _data.clutType = reader.Text();

            bool result = implementation->ModifyPalettedWatermark(_id, _data);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        }
    }; // ExchangeWatermarkStubMethods

    //
    // Exchange::IWatermark::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void WatermarkEvent(const string&, const string&) = 0
    //

    ProxyStub::MethodHandler ExchangeWatermarkNotificationStubMethods[] = {
        // (0) virtual void WatermarkEvent(const string&, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWatermark::INotification* implementation = reinterpret_cast<Exchange::IWatermark::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _eventName = reader.Text();
            const string _parametersJson = reader.Text();

            implementation->WatermarkEvent(static_cast<const string&>(_eventName), static_cast<const string&>(_parametersJson));
        }
    }; // ExchangeWatermarkNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IWatermark interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Initialize(string, bool) = 0
    //  (1) virtual uint32_t Deinitialize() = 0
    //  (2) virtual uint32_t Register(Exchange::IWatermark::INotification*) = 0
    //  (3) virtual uint32_t Unregister(Exchange::IWatermark::INotification*) = 0
    //  (4) virtual bool ShowWatermark(const bool) = 0
    //  (5) virtual bool CreateWatermark(uint32_t, uint32_t) = 0
    //  (6) virtual bool UpdateWatermark(uint32_t, uint32_t, uint32_t) = 0
    //  (7) virtual bool AdjustWatermark(uint32_t, uint32_t) = 0
    //  (8) virtual bool DeleteWatermark(uint32_t) = 0
    //  (9) virtual Exchange::PalettedImageData GetPalettedWatermark(uint32_t) = 0
    //  (10) virtual bool ModifyPalettedWatermark(uint32_t, Exchange::PalettedImageData) = 0
    //

    class ExchangeWatermarkProxy final : public ProxyStub::UnknownProxyType<Exchange::IWatermark> {
    public:
        ExchangeWatermarkProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Initialize(string _waylandDisplay, bool _synchronized) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_waylandDisplay);
            writer.Boolean(_synchronized);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWatermark>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Deinitialize() override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWatermark>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Register(Exchange::IWatermark::INotification* _notification) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_notification));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWatermark>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        uint32_t Unregister(Exchange::IWatermark::INotification* _notification) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_notification));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWatermark>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        bool ShowWatermark(const bool _show) override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Boolean(_show);

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWatermark>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        bool CreateWatermark(uint32_t _id, uint32_t _zorder) override
        {
            IPCMessage message(BaseClass::Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_id);
            writer.Number<uint32_t>(_zorder);

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWatermark>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        bool UpdateWatermark(uint32_t _id, uint32_t _key, uint32_t _size) override
        {
            IPCMessage message(BaseClass::Message(6));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_id);
            writer.Number<uint32_t>(_key);
            writer.Number<uint32_t>(_size);

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWatermark>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        bool AdjustWatermark(uint32_t _id, uint32_t _zorder) override
        {
            IPCMessage message(BaseClass::Message(7));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_id);
            writer.Number<uint32_t>(_zorder);

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWatermark>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        bool DeleteWatermark(uint32_t _id) override
        {
            IPCMessage message(BaseClass::Message(8));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_id);

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWatermark>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        Exchange::PalettedImageData GetPalettedWatermark(uint32_t _id) override
        {
            IPCMessage message(BaseClass::Message(9));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_id);

            Exchange::PalettedImageData result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWatermark>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result.imageKey = reader.Number<uint32_t>();
                result.imageWidth = reader.Number<uint32_t>();
                result.imageHeight = reader.Number<uint32_t>();
                result.clutKey = reader.Number<uint32_t>();
                result.clutSize = reader.Number<uint32_t>();
                result.clutType = reader.Text();
            }

            return (result);
        }

        bool ModifyPalettedWatermark(uint32_t _id, Exchange::PalettedImageData _data) override
        {
            IPCMessage message(BaseClass::Message(10));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_id);
            writer.Number<uint32_t>(_data.imageKey);
            writer.Number<uint32_t>(_data.imageWidth);
            writer.Number<uint32_t>(_data.imageHeight);
            writer.Number<uint32_t>(_data.clutKey);
            writer.Number<uint32_t>(_data.clutSize);
            writer.Text(_data.clutType);

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWatermark>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

    }; // class ExchangeWatermarkProxy

    //
    // Exchange::IWatermark::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void WatermarkEvent(const string&, const string&) = 0
    //

    class ExchangeWatermarkNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::IWatermark::INotification> {
    public:
        ExchangeWatermarkNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void WatermarkEvent(const string& _eventName, const string& _parametersJson) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_eventName));
            writer.Text(static_cast<const string&>(_parametersJson));

            ProxyStub::UnknownProxyType<Exchange::IWatermark::INotification>::Invoke(message);
        }

    }; // class ExchangeWatermarkNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IWatermark, ExchangeWatermarkStubMethods> ExchangeWatermarkStub;
        typedef ProxyStub::UnknownStubType<Exchange::IWatermark::INotification, ExchangeWatermarkNotificationStubMethods> ExchangeWatermarkNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IWatermark, ExchangeWatermarkProxy, ExchangeWatermarkStub>();
                RPC::Administrator::Instance().Announce<Exchange::IWatermark::INotification, ExchangeWatermarkNotificationProxy, ExchangeWatermarkNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IWatermark>();
                RPC::Administrator::Instance().Recall<Exchange::IWatermark::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
