//
// generated automatically from "ITestUtility.h"
//
// implements COM-RPC proxy stubs for:
//   - class Exchange::ITestUtility
//   - class Exchange::ITestUtility::ICommand
//   - class Exchange::ITestUtility::ICommand::IIterator
//

#include "Module.h"
#include "ITestUtility.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // Exchange::ITestUtility interface stub definitions
    //
    // Methods:
    //  (0) virtual Exchange::ITestUtility::ICommand::IIterator* Commands() const = 0
    //  (1) virtual Exchange::ITestUtility::ICommand* Command(const string&) const = 0
    //  (2) virtual uint32_t ShutdownTimeout(const uint32_t) = 0
    //

    ProxyStub::MethodHandler ExchangeTestUtilityStubMethods[] = {
        // (0) virtual Exchange::ITestUtility::ICommand::IIterator* Commands() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::ITestUtility* implementation = reinterpret_cast<const Exchange::ITestUtility*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::ITestUtility::ICommand::IIterator* result = implementation->Commands();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(result));

            RPC::Administrator::Instance().RegisterInterface(channel, result);
        },

        // (1) virtual Exchange::ITestUtility::ICommand* Command(const string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::ITestUtility* implementation = reinterpret_cast<const Exchange::ITestUtility*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _name = reader.Text();

            Exchange::ITestUtility::ICommand* result = implementation->Command(static_cast<const string&>(_name));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(result));

            RPC::Administrator::Instance().RegisterInterface(channel, result);
        },

        // (2) virtual uint32_t ShutdownTimeout(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::ITestUtility* implementation = reinterpret_cast<Exchange::ITestUtility*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _timeout = reader.Number<uint32_t>();

            uint32_t result = implementation->ShutdownTimeout(_timeout);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeTestUtilityStubMethods

    //
    // Exchange::ITestUtility::ICommand interface stub definitions
    //
    // Methods:
    //  (0) virtual string Execute(const string&) = 0
    //  (1) virtual string Description() const = 0
    //  (2) virtual string Signature() const = 0
    //  (3) virtual string Name() const = 0
    //

    ProxyStub::MethodHandler ExchangeTestUtilityCommandStubMethods[] = {
        // (0) virtual string Execute(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::ITestUtility::ICommand* implementation = reinterpret_cast<Exchange::ITestUtility::ICommand*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _params = reader.Text();

            string result = implementation->Execute(static_cast<const string&>(_params));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (1) virtual string Description() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::ITestUtility::ICommand* implementation = reinterpret_cast<const Exchange::ITestUtility::ICommand*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Description();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (2) virtual string Signature() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::ITestUtility::ICommand* implementation = reinterpret_cast<const Exchange::ITestUtility::ICommand*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Signature();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (3) virtual string Name() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::ITestUtility::ICommand* implementation = reinterpret_cast<const Exchange::ITestUtility::ICommand*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Name();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        }
    }; // ExchangeTestUtilityCommandStubMethods

    //
    // Exchange::ITestUtility::ICommand::IIterator interface stub definitions
    //
    // Methods:
    //  (0) virtual void Reset() = 0
    //  (1) virtual bool IsValid() const = 0
    //  (2) virtual bool Next() = 0
    //  (3) virtual Exchange::ITestUtility::ICommand* Command() const = 0
    //

    ProxyStub::MethodHandler ExchangeTestUtilityCommandIteratorStubMethods[] = {
        // (0) virtual void Reset() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::ITestUtility::ICommand::IIterator* implementation = reinterpret_cast<Exchange::ITestUtility::ICommand::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->Reset();
        },

        // (1) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::ITestUtility::ICommand::IIterator* implementation = reinterpret_cast<const Exchange::ITestUtility::ICommand::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (2) virtual bool Next() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::ITestUtility::ICommand::IIterator* implementation = reinterpret_cast<Exchange::ITestUtility::ICommand::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->Next();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (3) virtual Exchange::ITestUtility::ICommand* Command() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::ITestUtility::ICommand::IIterator* implementation = reinterpret_cast<const Exchange::ITestUtility::ICommand::IIterator*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::ITestUtility::ICommand* result = implementation->Command();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(result));

            RPC::Administrator::Instance().RegisterInterface(channel, result);
        }
    }; // ExchangeTestUtilityCommandIteratorStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // Exchange::ITestUtility interface proxy definitions
    //
    // Methods:
    //  (0) virtual Exchange::ITestUtility::ICommand::IIterator* Commands() const = 0
    //  (1) virtual Exchange::ITestUtility::ICommand* Command(const string&) const = 0
    //  (2) virtual uint32_t ShutdownTimeout(const uint32_t) = 0
    //

    class ExchangeTestUtilityProxy final : public ProxyStub::UnknownProxyType<Exchange::ITestUtility> {
    public:
        ExchangeTestUtilityProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        Exchange::ITestUtility::ICommand::IIterator* Commands() const override
        {
            IPCMessage message(BaseClass::Message(0));

            Exchange::ITestUtility::ICommand::IIterator* result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITestUtility>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reinterpret_cast<Exchange::ITestUtility::ICommand::IIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::ITestUtility::ICommand::IIterator::ID));
            }

            return (result);
        }

        Exchange::ITestUtility::ICommand* Command(const string& _name) const override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_name));

            Exchange::ITestUtility::ICommand* result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITestUtility>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reinterpret_cast<Exchange::ITestUtility::ICommand*>(Interface(reader.Number<Core::instance_id>(), Exchange::ITestUtility::ICommand::ID));
            }

            return (result);
        }

        uint32_t ShutdownTimeout(const uint32_t _timeout) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_timeout);

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITestUtility>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

    }; // class ExchangeTestUtilityProxy

    //
    // Exchange::ITestUtility::ICommand interface proxy definitions
    //
    // Methods:
    //  (0) virtual string Execute(const string&) = 0
    //  (1) virtual string Description() const = 0
    //  (2) virtual string Signature() const = 0
    //  (3) virtual string Name() const = 0
    //

    class ExchangeTestUtilityCommandProxy final : public ProxyStub::UnknownProxyType<Exchange::ITestUtility::ICommand> {
    public:
        ExchangeTestUtilityCommandProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        string Execute(const string& _params) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_params));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITestUtility::ICommand>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string Description() const override
        {
            IPCMessage message(BaseClass::Message(1));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITestUtility::ICommand>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string Signature() const override
        {
            IPCMessage message(BaseClass::Message(2));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITestUtility::ICommand>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        string Name() const override
        {
            IPCMessage message(BaseClass::Message(3));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITestUtility::ICommand>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

    }; // class ExchangeTestUtilityCommandProxy

    //
    // Exchange::ITestUtility::ICommand::IIterator interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Reset() = 0
    //  (1) virtual bool IsValid() const = 0
    //  (2) virtual bool Next() = 0
    //  (3) virtual Exchange::ITestUtility::ICommand* Command() const = 0
    //

    class ExchangeTestUtilityCommandIteratorProxy final : public ProxyStub::UnknownProxyType<Exchange::ITestUtility::ICommand::IIterator> {
    public:
        ExchangeTestUtilityCommandIteratorProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Reset() override
        {
            IPCMessage message(BaseClass::Message(0));

            ProxyStub::UnknownProxyType<Exchange::ITestUtility::ICommand::IIterator>::Invoke(message);
        }

        bool IsValid() const override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITestUtility::ICommand::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        bool Next() override
        {
            IPCMessage message(BaseClass::Message(2));

            bool result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITestUtility::ICommand::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Boolean();
            }

            return (result);
        }

        Exchange::ITestUtility::ICommand* Command() const override
        {
            IPCMessage message(BaseClass::Message(3));

            Exchange::ITestUtility::ICommand* result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::ITestUtility::ICommand::IIterator>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reinterpret_cast<Exchange::ITestUtility::ICommand*>(Interface(reader.Number<Core::instance_id>(), Exchange::ITestUtility::ICommand::ID));
            }

            return (result);
        }

    }; // class ExchangeTestUtilityCommandIteratorProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<Exchange::ITestUtility, ExchangeTestUtilityStubMethods> ExchangeTestUtilityStub;
        typedef ProxyStub::UnknownStubType<Exchange::ITestUtility::ICommand, ExchangeTestUtilityCommandStubMethods> ExchangeTestUtilityCommandStub;
        typedef ProxyStub::UnknownStubType<Exchange::ITestUtility::ICommand::IIterator, ExchangeTestUtilityCommandIteratorStubMethods> ExchangeTestUtilityCommandIteratorStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<Exchange::ITestUtility, ExchangeTestUtilityProxy, ExchangeTestUtilityStub>();
                RPC::Administrator::Instance().Announce<Exchange::ITestUtility::ICommand, ExchangeTestUtilityCommandProxy, ExchangeTestUtilityCommandStub>();
                RPC::Administrator::Instance().Announce<Exchange::ITestUtility::ICommand::IIterator, ExchangeTestUtilityCommandIteratorProxy, ExchangeTestUtilityCommandIteratorStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<Exchange::ITestUtility>();
                RPC::Administrator::Instance().Recall<Exchange::ITestUtility::ICommand>();
                RPC::Administrator::Instance().Recall<Exchange::ITestUtility::ICommand::IIterator>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
