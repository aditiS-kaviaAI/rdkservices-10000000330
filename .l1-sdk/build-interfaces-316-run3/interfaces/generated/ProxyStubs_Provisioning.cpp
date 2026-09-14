//
// generated automatically from "IProvisioning.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::IProvisioning
//   - class Exchange::IProvisioning::INotification
//

#include "Module.h"
#include "IProvisioning.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::IProvisioning interface stub definitions
    //
    // Methods:
    //  (0) virtual void Register(Exchange::IProvisioning::INotification*) = 0
    //  (1) virtual void Unregister(Exchange::IProvisioning::INotification*) = 0
    //

    ProxyStub::MethodHandler ExchangeProvisioningStubMethods[] = {
        // (0) virtual void Register(Exchange::IProvisioning::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IProvisioning* implementation = reinterpret_cast<Exchange::IProvisioning*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id provisioningImplementation = reader.Number<Core::instance_id>();

            Exchange::IProvisioning::INotification* _provisioning = nullptr;
            ProxyStub::UnknownProxy* provisioningProxy = nullptr;
            if (provisioningImplementation != 0) {
                provisioningProxy = RPC::Administrator::Instance().ProxyInstance(channel, provisioningImplementation, false, _provisioning);
                ASSERT((_provisioning != nullptr) && (provisioningProxy != nullptr));
            }

            implementation->Register(_provisioning);

            if (provisioningProxy != nullptr) {
                RPC::Administrator::Instance().Release(provisioningProxy, message->Response());
            }
        },

        // (1) virtual void Unregister(Exchange::IProvisioning::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IProvisioning* implementation = reinterpret_cast<Exchange::IProvisioning*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id provisioningImplementation = reader.Number<Core::instance_id>();

            Exchange::IProvisioning::INotification* _provisioning = nullptr;
            ProxyStub::UnknownProxy* provisioningProxy = nullptr;
            if (provisioningImplementation != 0) {
                provisioningProxy = RPC::Administrator::Instance().ProxyInstance(channel, provisioningImplementation, false, _provisioning);
                ASSERT((_provisioning != nullptr) && (provisioningProxy != nullptr));
            }

            implementation->Unregister(_provisioning);

            if (provisioningProxy != nullptr) {
                RPC::Administrator::Instance().Release(provisioningProxy, message->Response());
            }
        }
    }; // ExchangeProvisioningStubMethods

    //
    // Exchange::IProvisioning::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void Provisioned(RPC::IStringIterator*) = 0
    //

    ProxyStub::MethodHandler ExchangeProvisioningNotificationStubMethods[] = {
        // (0) virtual void Provisioned(RPC::IStringIterator*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IProvisioning::INotification* implementation = reinterpret_cast<Exchange::IProvisioning::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id labelsImplementation = reader.Number<Core::instance_id>();

            RPC::IStringIterator* _labels = nullptr;
            ProxyStub::UnknownProxy* labelsProxy = nullptr;
            if (labelsImplementation != 0) {
                labelsProxy = RPC::Administrator::Instance().ProxyInstance(channel, labelsImplementation, false, _labels);
                ASSERT((_labels != nullptr) && (labelsProxy != nullptr));
            }

            implementation->Provisioned(_labels);

            if (labelsProxy != nullptr) {
                RPC::Administrator::Instance().Release(labelsProxy, message->Response());
            }
        }
    }; // ExchangeProvisioningNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::IProvisioning interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Register(Exchange::IProvisioning::INotification*) = 0
    //  (1) virtual void Unregister(Exchange::IProvisioning::INotification*) = 0
    //

    class ExchangeProvisioningProxy final : public ProxyStub::UnknownProxyType<Exchange::IProvisioning> {
    public:
        ExchangeProvisioningProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Register(Exchange::IProvisioning::INotification* _provisioning) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_provisioning));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IProvisioning>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void Unregister(Exchange::IProvisioning::INotification* _provisioning) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_provisioning));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IProvisioning>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

    }; // class ExchangeProvisioningProxy

    //
    // Exchange::IProvisioning::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Provisioned(RPC::IStringIterator*) = 0
    //

    class ExchangeProvisioningNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::IProvisioning::INotification> {
    public:
        ExchangeProvisioningNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Provisioned(RPC::IStringIterator* _labels) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_labels));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IProvisioning::INotification>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

    }; // class ExchangeProvisioningNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::IProvisioning, ExchangeProvisioningStubMethods> ExchangeProvisioningStub;
        typedef ProxyStub::UnknownStubType<Exchange::IProvisioning::INotification, ExchangeProvisioningNotificationStubMethods> ExchangeProvisioningNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::IProvisioning, ExchangeProvisioningProxy, ExchangeProvisioningStub>();
                RPC::Administrator::Instance().Announce<Exchange::IProvisioning::INotification, ExchangeProvisioningNotificationProxy, ExchangeProvisioningNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::IProvisioning>();
                RPC::Administrator::Instance().Recall<Exchange::IProvisioning::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
