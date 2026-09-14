//
// generated automatically from "IStateControl.h"
//
// implements COM-RPC proxy stubs for:
//   - class PluginHost::IStateControl
//   - class PluginHost::IStateControl::INotification
//

#include "Module.h"
#include "IStateControl.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    using namespace PluginHost;

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // PluginHost::IStateControl interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Configure(PluginHost::IShell*) = 0
    //  (1) virtual PluginHost::IStateControl::state State() const = 0
    //  (2) virtual uint32_t Request(const PluginHost::IStateControl::command) = 0
    //  (3) virtual void Register(PluginHost::IStateControl::INotification*) = 0
    //  (4) virtual void Unregister(PluginHost::IStateControl::INotification*) = 0
    //

    ProxyStub::MethodHandler PluginHostStateControlStubMethods[] = {
        // (0) virtual uint32_t Configure(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IStateControl* implementation = reinterpret_cast<PluginHost::IStateControl*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id frameworkImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _framework = nullptr;
            ProxyStub::UnknownProxy* frameworkProxy = nullptr;
            if (frameworkImplementation != 0) {
                frameworkProxy = RPC::Administrator::Instance().ProxyInstance(channel, frameworkImplementation, false, _framework);
                ASSERT((_framework != nullptr) && (frameworkProxy != nullptr));
            }

            uint32_t result = implementation->Configure(_framework);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (frameworkProxy != nullptr) {
                RPC::Administrator::Instance().Release(frameworkProxy, message->Response());
            }
        },

        // (1) virtual PluginHost::IStateControl::state State() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IStateControl* implementation = reinterpret_cast<const PluginHost::IStateControl*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            PluginHost::IStateControl::state result = implementation->State();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<PluginHost::IStateControl::state>(result);
        },

        // (2) virtual uint32_t Request(const PluginHost::IStateControl::command) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IStateControl* implementation = reinterpret_cast<PluginHost::IStateControl*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const PluginHost::IStateControl::command _state = reader.Number<PluginHost::IStateControl::command>();

            uint32_t result = implementation->Request(_state);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (3) virtual void Register(PluginHost::IStateControl::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IStateControl* implementation = reinterpret_cast<PluginHost::IStateControl*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id notificationImplementation = reader.Number<Core::instance_id>();

            PluginHost::IStateControl::INotification* _notification = nullptr;
            ProxyStub::UnknownProxy* notificationProxy = nullptr;
            if (notificationImplementation != 0) {
                notificationProxy = RPC::Administrator::Instance().ProxyInstance(channel, notificationImplementation, false, _notification);
                ASSERT((_notification != nullptr) && (notificationProxy != nullptr));
            }

            implementation->Register(_notification);

            if (notificationProxy != nullptr) {
                RPC::Administrator::Instance().Release(notificationProxy, message->Response());
            }
        },

        // (4) virtual void Unregister(PluginHost::IStateControl::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IStateControl* implementation = reinterpret_cast<PluginHost::IStateControl*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id notificationImplementation = reader.Number<Core::instance_id>();

            PluginHost::IStateControl::INotification* _notification = nullptr;
            ProxyStub::UnknownProxy* notificationProxy = nullptr;
            if (notificationImplementation != 0) {
                notificationProxy = RPC::Administrator::Instance().ProxyInstance(channel, notificationImplementation, false, _notification);
                ASSERT((_notification != nullptr) && (notificationProxy != nullptr));
            }

            implementation->Unregister(_notification);

            if (notificationProxy != nullptr) {
                RPC::Administrator::Instance().Release(notificationProxy, message->Response());
            }
        }
    }; // PluginHostStateControlStubMethods

    //
    // PluginHost::IStateControl::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void StateChange(const PluginHost::IStateControl::state) = 0
    //

    ProxyStub::MethodHandler PluginHostStateControlNotificationStubMethods[] = {
        // (0) virtual void StateChange(const PluginHost::IStateControl::state) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IStateControl::INotification* implementation = reinterpret_cast<PluginHost::IStateControl::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const PluginHost::IStateControl::state _state = reader.Number<PluginHost::IStateControl::state>();

            implementation->StateChange(_state);
        }
    }; // PluginHostStateControlNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // PluginHost::IStateControl interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Configure(PluginHost::IShell*) = 0
    //  (1) virtual PluginHost::IStateControl::state State() const = 0
    //  (2) virtual uint32_t Request(const PluginHost::IStateControl::command) = 0
    //  (3) virtual void Register(PluginHost::IStateControl::INotification*) = 0
    //  (4) virtual void Unregister(PluginHost::IStateControl::INotification*) = 0
    //

    class PluginHostStateControlProxy final : public ProxyStub::UnknownProxyType<PluginHost::IStateControl> {
    public:
        PluginHostStateControlProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Configure(PluginHost::IShell* _framework) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_framework));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IStateControl>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
                Complete(reader);
            }

            return (result);
        }

        PluginHost::IStateControl::state State() const override
        {
            IPCMessage message(BaseClass::Message(1));

            PluginHost::IStateControl::state result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IStateControl>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<PluginHost::IStateControl::state>();
            }

            return (result);
        }

        uint32_t Request(const PluginHost::IStateControl::command _state) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<PluginHost::IStateControl::command>(_state);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IStateControl>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        void Register(PluginHost::IStateControl::INotification* _notification) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_notification));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IStateControl>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void Unregister(PluginHost::IStateControl::INotification* _notification) override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_notification));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<PluginHost::IStateControl>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

    }; // class PluginHostStateControlProxy

    //
    // PluginHost::IStateControl::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void StateChange(const PluginHost::IStateControl::state) = 0
    //

    class PluginHostStateControlNotificationProxy final : public ProxyStub::UnknownProxyType<PluginHost::IStateControl::INotification> {
    public:
        PluginHostStateControlNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void StateChange(const PluginHost::IStateControl::state _state) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<PluginHost::IStateControl::state>(_state);

            ProxyStub::UnknownProxyType<PluginHost::IStateControl::INotification>::Invoke(message);
        }

    }; // class PluginHostStateControlNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<PluginHost::IStateControl, PluginHostStateControlStubMethods> PluginHostStateControlStub;
        typedef ProxyStub::UnknownStubType<PluginHost::IStateControl::INotification, PluginHostStateControlNotificationStubMethods> PluginHostStateControlNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<PluginHost::IStateControl, PluginHostStateControlProxy, PluginHostStateControlStub>();
                RPC::Administrator::Instance().Announce<PluginHost::IStateControl::INotification, PluginHostStateControlNotificationProxy, PluginHostStateControlNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<PluginHost::IStateControl>();
                RPC::Administrator::Instance().Recall<PluginHost::IStateControl::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
