//
// generated automatically from "ICOM.h"
//
// implements COM-RPC proxy stubs for:
//   - /* instantiated */ template class RPC::IIteratorType<typename ELEMENT, const uint32_t> [with ELEMENT = string, INTERFACE_ID = ID_STRINGITERATOR]
//   - /* instantiated */ template class RPC::IIteratorType<typename ELEMENT, const uint32_t> [with ELEMENT = uint32_t, INTERFACE_ID = ID_VALUEITERATOR]
//   - class RPC::IRemoteConnection
//   - class RPC::IRemoteConnection::INotification
//

#include "Module.h"
#include "ICOM.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    using namespace RPC;

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // RPC::IIteratorTypeInstance58E8F892 interface stub definitions
    //
    // Methods:
    //  (0) virtual bool Next(string&) = 0
    //  (1) virtual bool Previous(string&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual string Current() const = 0
    //

    ProxyStub::MethodHandler RPCIteratorTypeInstance58E8F892StubMethods[] = {
        // (0) virtual bool Next(string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _info{};

            bool result = implementation->Next(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Text(_info);
        },

        // (1) virtual bool Previous(string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _info{};

            bool result = implementation->Previous(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Text(_info);
        },

        // (2) virtual void Reset(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _position = reader.Number<uint32_t>();

            implementation->Reset(_position);
        },

        // (3) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (4) virtual uint32_t Count() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Count();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual string Current() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Current();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        }
    }; // RPCIteratorTypeInstance58E8F892StubMethods

    //
    // RPC::IIteratorTypeInstance6DC5C25D interface stub definitions
    //
    // Methods:
    //  (0) virtual bool Next(uint32_t&) = 0
    //  (1) virtual bool Previous(uint32_t&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual uint32_t Current() const = 0
    //

    ProxyStub::MethodHandler RPCIteratorTypeInstance6DC5C25DStubMethods[] = {
        // (0) virtual bool Next(uint32_t&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t _info{};

            bool result = implementation->Next(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<uint32_t>(_info);
        },

        // (1) virtual bool Previous(uint32_t&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t _info{};

            bool result = implementation->Previous(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<uint32_t>(_info);
        },

        // (2) virtual void Reset(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _position = reader.Number<uint32_t>();

            implementation->Reset(_position);
        },

        // (3) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (4) virtual uint32_t Count() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Count();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual uint32_t Current() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Current();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // RPCIteratorTypeInstance6DC5C25DStubMethods

    //
    // RPC::IRemoteConnection interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Id() const = 0
    //  (1) virtual uint32_t RemoteId() const = 0
    //  (2) virtual void* Aquire(const uint32_t, const string&, const uint32_t, const uint32_t) = 0
    //  (3) virtual void Terminate() = 0
    //  (4) virtual uint32_t Launch() = 0
    //  (5) virtual void PostMortem() = 0
    //

    ProxyStub::MethodHandler RPCRemoteConnectionStubMethods[] = {
        // (0) virtual uint32_t Id() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const RPC::IRemoteConnection* implementation = reinterpret_cast<const RPC::IRemoteConnection*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Id();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (1) virtual uint32_t RemoteId() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const RPC::IRemoteConnection* implementation = reinterpret_cast<const RPC::IRemoteConnection*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->RemoteId();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual void* Aquire(const uint32_t, const string&, const uint32_t, const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::IRemoteConnection* implementation = reinterpret_cast<RPC::IRemoteConnection*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _waitTime = reader.Number<uint32_t>();
            const string _className = reader.Text();
            const uint32_t _interfaceId = reader.Number<uint32_t>();
            const uint32_t _version = reader.Number<uint32_t>();

            void* result = implementation->Aquire(_waitTime, static_cast<const string&>(_className), _interfaceId, _version);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(result));

            RPC::Administrator::Instance().RegisterInterface(channel, result, _interfaceId);
        },

        // (3) virtual void Terminate() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::IRemoteConnection* implementation = reinterpret_cast<RPC::IRemoteConnection*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->Terminate();
        },

        // (4) virtual uint32_t Launch() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::IRemoteConnection* implementation = reinterpret_cast<RPC::IRemoteConnection*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Launch();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual void PostMortem() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::IRemoteConnection* implementation = reinterpret_cast<RPC::IRemoteConnection*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->PostMortem();
        }
    }; // RPCRemoteConnectionStubMethods

    //
    // RPC::IRemoteConnection::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void Activated(RPC::IRemoteConnection*) = 0
    //  (1) virtual void Deactivated(RPC::IRemoteConnection*) = 0
    //

    ProxyStub::MethodHandler RPCRemoteConnectionNotificationStubMethods[] = {
        // (0) virtual void Activated(RPC::IRemoteConnection*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::IRemoteConnection::INotification* implementation = reinterpret_cast<RPC::IRemoteConnection::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id connectionImplementation = reader.Number<Core::instance_id>();

            RPC::IRemoteConnection* _connection = nullptr;
            ProxyStub::UnknownProxy* connectionProxy = nullptr;
            if (connectionImplementation != 0) {
                connectionProxy = RPC::Administrator::Instance().ProxyInstance(channel, connectionImplementation, false, _connection);
                ASSERT((_connection != nullptr) && (connectionProxy != nullptr));
            }

            implementation->Activated(_connection);

            if (connectionProxy != nullptr) {
                RPC::Administrator::Instance().Release(connectionProxy, message->Response());
            }
        },

        // (1) virtual void Deactivated(RPC::IRemoteConnection*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            RPC::IRemoteConnection::INotification* implementation = reinterpret_cast<RPC::IRemoteConnection::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id connectionImplementation = reader.Number<Core::instance_id>();

            RPC::IRemoteConnection* _connection = nullptr;
            ProxyStub::UnknownProxy* connectionProxy = nullptr;
            if (connectionImplementation != 0) {
                connectionProxy = RPC::Administrator::Instance().ProxyInstance(channel, connectionImplementation, false, _connection);
                ASSERT((_connection != nullptr) && (connectionProxy != nullptr));
            }

            implementation->Deactivated(_connection);

            if (connectionProxy != nullptr) {
                RPC::Administrator::Instance().Release(connectionProxy, message->Response());
            }
        }
    }; // RPCRemoteConnectionNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // RPC::IIteratorTypeInstance58E8F892 interface proxy definitions
    //
    // Methods:
    //  (0) virtual bool Next(string&) = 0
    //  (1) virtual bool Previous(string&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual string Current() const = 0
    //

    class RPCIteratorTypeInstance58E8F892Proxy final : public ProxyStub::UnknownProxyType<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>> {
    public:
        RPCIteratorTypeInstance58E8F892Proxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        bool Next(string& _info) override
        {
            IPCMessage message(BaseClass::Message(0));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Text();
            }

            return (result);
        }

        bool Previous(string& _info) override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Text();
            }

            return (result);
        }

        void Reset(const uint32_t _position) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_position);

            ProxyStub::UnknownProxyType<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>>::Invoke(message);
        }

        bool IsValid() const override
        {
            IPCMessage message(BaseClass::Message(3));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        uint32_t Count() const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        string Current() const override
        {
            IPCMessage message(BaseClass::Message(5));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

    }; // class RPCIteratorTypeInstance58E8F892Proxy

    //
    // RPC::IIteratorTypeInstance6DC5C25D interface proxy definitions
    //
    // Methods:
    //  (0) virtual bool Next(uint32_t&) = 0
    //  (1) virtual bool Previous(uint32_t&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual uint32_t Current() const = 0
    //

    class RPCIteratorTypeInstance6DC5C25DProxy final : public ProxyStub::UnknownProxyType<RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>> {
    public:
        RPCIteratorTypeInstance6DC5C25DProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        bool Next(uint32_t& _info) override
        {
            IPCMessage message(BaseClass::Message(0));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Number<uint32_t>();
            }

            return (result);
        }

        bool Previous(uint32_t& _info) override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
                _info = reader.Number<uint32_t>();
            }

            return (result);
        }

        void Reset(const uint32_t _position) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_position);

            ProxyStub::UnknownProxyType<RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>>::Invoke(message);
        }

        bool IsValid() const override
        {
            IPCMessage message(BaseClass::Message(3));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        uint32_t Count() const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t Current() const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class RPCIteratorTypeInstance6DC5C25DProxy

    //
    // RPC::IRemoteConnection interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Id() const = 0
    //  (1) virtual uint32_t RemoteId() const = 0
    //  (2) virtual void* Aquire(const uint32_t, const string&, const uint32_t, const uint32_t) = 0
    //  (3) virtual void Terminate() = 0
    //  (4) virtual uint32_t Launch() = 0
    //  (5) virtual void PostMortem() = 0
    //

    class RPCRemoteConnectionProxy final : public ProxyStub::UnknownProxyType<RPC::IRemoteConnection> {
    public:
        RPCRemoteConnectionProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Id() const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IRemoteConnection>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        uint32_t RemoteId() const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IRemoteConnection>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        void* Aquire(const uint32_t _waitTime, const string& _className, const uint32_t _interfaceId, const uint32_t _version) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_waitTime);
            writer.Text(static_cast<const string&>(_className));
            writer.Number<uint32_t>(_interfaceId);
            writer.Number<uint32_t>(_version);

            void* result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IRemoteConnection>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reinterpret_cast<void*>(Interface(reader.Number<Core::instance_id>(), _interfaceId));
            }

            return (result);
        }

        void Terminate() override
        {
            IPCMessage message(BaseClass::Message(3));

            ProxyStub::UnknownProxyType<RPC::IRemoteConnection>::Invoke(message);
        }

        uint32_t Launch() override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IRemoteConnection>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        void PostMortem() override
        {
            IPCMessage message(BaseClass::Message(5));

            ProxyStub::UnknownProxyType<RPC::IRemoteConnection>::Invoke(message);
        }

    }; // class RPCRemoteConnectionProxy

    //
    // RPC::IRemoteConnection::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Activated(RPC::IRemoteConnection*) = 0
    //  (1) virtual void Deactivated(RPC::IRemoteConnection*) = 0
    //

    class RPCRemoteConnectionNotificationProxy final : public ProxyStub::UnknownProxyType<RPC::IRemoteConnection::INotification> {
    public:
        RPCRemoteConnectionNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Activated(RPC::IRemoteConnection* _connection) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_connection));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IRemoteConnection::INotification>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void Deactivated(RPC::IRemoteConnection* _connection) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_connection));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<RPC::IRemoteConnection::INotification>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

    }; // class RPCRemoteConnectionNotificationProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>, RPCIteratorTypeInstance58E8F892StubMethods> RPCIteratorTypeInstance58E8F892Stub;
        typedef ProxyStub::UnknownStubType<RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>, RPCIteratorTypeInstance6DC5C25DStubMethods> RPCIteratorTypeInstance6DC5C25DStub;
        typedef ProxyStub::UnknownStubType<RPC::IRemoteConnection, RPCRemoteConnectionStubMethods> RPCRemoteConnectionStub;
        typedef ProxyStub::UnknownStubType<RPC::IRemoteConnection::INotification, RPCRemoteConnectionNotificationStubMethods> RPCRemoteConnectionNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>, RPCIteratorTypeInstance58E8F892Proxy, RPCIteratorTypeInstance58E8F892Stub>();
                RPC::Administrator::Instance().Announce<RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>, RPCIteratorTypeInstance6DC5C25DProxy, RPCIteratorTypeInstance6DC5C25DStub>();
                RPC::Administrator::Instance().Announce<RPC::IRemoteConnection, RPCRemoteConnectionProxy, RPCRemoteConnectionStub>();
                RPC::Administrator::Instance().Announce<RPC::IRemoteConnection::INotification, RPCRemoteConnectionNotificationProxy, RPCRemoteConnectionNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>>();
                RPC::Administrator::Instance().Recall<RPC::IIteratorType<uint32_t, RPC::ID_VALUEITERATOR>>();
                RPC::Administrator::Instance().Recall<RPC::IRemoteConnection>();
                RPC::Administrator::Instance().Recall<RPC::IRemoteConnection::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
