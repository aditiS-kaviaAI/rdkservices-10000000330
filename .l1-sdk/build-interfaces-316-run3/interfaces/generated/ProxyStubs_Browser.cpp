//
// generated automatically from "IBrowser.h"
//
// implements COM-RPC proxy stubs for:
//   - /* instantiated */ template class RPC::IIteratorType<typename ELEMENT, const uint32_t> [with ELEMENT = string, INTERFACE_ID = RPC::ID_STRINGITERATOR]
//   - class Exchange::IBrowser
//   - class Exchange::IBrowser::INotification
//   - class Exchange::IWebBrowser
//   - class Exchange::IWebBrowser::INotification
//   - class Exchange::IBrowserResources
//   - class Exchange::IBrowserSecurity
//

#include "Module.h"
#include "IBrowser.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // RPC::IIteratorTypeInstanceB0D15B1A interface stub definitions
    //
    // Methods:
    //  (0) virtual bool Next(string&) = 0
    //  (1) virtual bool Previous(string&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual string Current() const = 0
    //

    ProxyStub::MethodHandler RPCIteratorTypeInstanceB0D15B1AStubMethods[] = {
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
    }; // RPCIteratorTypeInstanceB0D15B1AStubMethods

    //
    // Exchange::IBrowser interface stub definitions
    //
    // Methods:
    //  (0) virtual void Register(Exchange::IBrowser::INotification*) = 0
    //  (1) virtual void Unregister(Exchange::IBrowser::INotification*) = 0
    //  (2) virtual void SetURL(const string&) = 0
    //  (3) virtual string GetURL() const = 0
    //  (4) virtual uint32_t GetFPS() const = 0
    //  (5) virtual void Hide(const bool) = 0
    //

    ProxyStub::MethodHandler ExchangeBrowserStubMethods[] = {
        // (0) virtual void Register(Exchange::IBrowser::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowser* implementation = reinterpret_cast<Exchange::IBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id sinkImplementation = reader.Number<Core::instance_id>();

            Exchange::IBrowser::INotification* _sink = nullptr;
            ProxyStub::UnknownProxy* sinkProxy = nullptr;
            if (sinkImplementation != 0) {
                sinkProxy = RPC::Administrator::Instance().ProxyInstance(channel, sinkImplementation, false, _sink);
                ASSERT((_sink != nullptr) && (sinkProxy != nullptr));
            }

            implementation->Register(_sink);

            if (sinkProxy != nullptr) {
                RPC::Administrator::Instance().Release(sinkProxy, message->Response());
            }
        },

        // (1) virtual void Unregister(Exchange::IBrowser::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowser* implementation = reinterpret_cast<Exchange::IBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id sinkImplementation = reader.Number<Core::instance_id>();

            Exchange::IBrowser::INotification* _sink = nullptr;
            ProxyStub::UnknownProxy* sinkProxy = nullptr;
            if (sinkImplementation != 0) {
                sinkProxy = RPC::Administrator::Instance().ProxyInstance(channel, sinkImplementation, false, _sink);
                ASSERT((_sink != nullptr) && (sinkProxy != nullptr));
            }

            implementation->Unregister(_sink);

            if (sinkProxy != nullptr) {
                RPC::Administrator::Instance().Release(sinkProxy, message->Response());
            }
        },

        // (2) virtual void SetURL(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowser* implementation = reinterpret_cast<Exchange::IBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _URL = reader.Text();

            implementation->SetURL(static_cast<const string&>(_URL));
        },

        // (3) virtual string GetURL() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IBrowser* implementation = reinterpret_cast<const Exchange::IBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->GetURL();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (4) virtual uint32_t GetFPS() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IBrowser* implementation = reinterpret_cast<const Exchange::IBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->GetFPS();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual void Hide(const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowser* implementation = reinterpret_cast<Exchange::IBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const bool _hidden = reader.Boolean();

            implementation->Hide(_hidden);
        }
    }; // ExchangeBrowserStubMethods

    //
    // Exchange::IBrowser::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void LoadFinished(const string&) = 0
    //  (1) virtual void URLChanged(const string&) = 0
    //  (2) virtual void Hidden(const bool) = 0
    //  (3) virtual void Closure() = 0
    //

    ProxyStub::MethodHandler ExchangeBrowserNotificationStubMethods[] = {
        // (0) virtual void LoadFinished(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowser::INotification* implementation = reinterpret_cast<Exchange::IBrowser::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _URL = reader.Text();

            implementation->LoadFinished(static_cast<const string&>(_URL));
        },

        // (1) virtual void URLChanged(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowser::INotification* implementation = reinterpret_cast<Exchange::IBrowser::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _URL = reader.Text();

            implementation->URLChanged(static_cast<const string&>(_URL));
        },

        // (2) virtual void Hidden(const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowser::INotification* implementation = reinterpret_cast<Exchange::IBrowser::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const bool _hidden = reader.Boolean();

            implementation->Hidden(_hidden);
        },

        // (3) virtual void Closure() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowser::INotification* implementation = reinterpret_cast<Exchange::IBrowser::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->Closure();
        }
    }; // ExchangeBrowserNotificationStubMethods

    //
    // Exchange::IWebBrowser interface stub definitions
    //
    // Methods:
    //  (0) virtual void Register(Exchange::IWebBrowser::INotification*) = 0
    //  (1) virtual void Unregister(Exchange::IWebBrowser::INotification*) = 0
    //  (2) virtual uint32_t URL(string&) const = 0
    //  (3) virtual uint32_t URL(const string&) = 0
    //  (4) virtual uint32_t Visibility(Exchange::IWebBrowser::VisibilityType&) const = 0
    //  (5) virtual uint32_t Visibility(const Exchange::IWebBrowser::VisibilityType) = 0
    //  (6) virtual uint32_t FPS(uint8_t&) const = 0
    //  (7) virtual uint32_t HeaderList(string&) const = 0
    //  (8) virtual uint32_t HeaderList(const string&) = 0
    //  (9) virtual uint32_t UserAgent(string&) const = 0
    //  (10) virtual uint32_t UserAgent(const string&) = 0
    //  (11) virtual uint32_t LocalStorageEnabled(bool&) const = 0
    //  (12) virtual uint32_t LocalStorageEnabled(const bool) = 0
    //  (13) virtual uint32_t HTTPCookieAcceptPolicy(Exchange::IWebBrowser::HTTPCookieAcceptPolicyType&) const = 0
    //  (14) virtual uint32_t HTTPCookieAcceptPolicy(const Exchange::IWebBrowser::HTTPCookieAcceptPolicyType) = 0
    //  (15) virtual uint32_t BridgeReply(const string&) = 0
    //  (16) virtual uint32_t BridgeEvent(const string&) = 0
    //  (17) virtual uint32_t CollectGarbage() = 0
    //

    ProxyStub::MethodHandler ExchangeWebBrowserStubMethods[] = {
        // (0) virtual void Register(Exchange::IWebBrowser::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser* implementation = reinterpret_cast<Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id sinkImplementation = reader.Number<Core::instance_id>();

            Exchange::IWebBrowser::INotification* _sink = nullptr;
            ProxyStub::UnknownProxy* sinkProxy = nullptr;
            if (sinkImplementation != 0) {
                sinkProxy = RPC::Administrator::Instance().ProxyInstance(channel, sinkImplementation, false, _sink);
                ASSERT((_sink != nullptr) && (sinkProxy != nullptr));
            }

            implementation->Register(_sink);

            if (sinkProxy != nullptr) {
                RPC::Administrator::Instance().Release(sinkProxy, message->Response());
            }
        },

        // (1) virtual void Unregister(Exchange::IWebBrowser::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser* implementation = reinterpret_cast<Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id sinkImplementation = reader.Number<Core::instance_id>();

            Exchange::IWebBrowser::INotification* _sink = nullptr;
            ProxyStub::UnknownProxy* sinkProxy = nullptr;
            if (sinkImplementation != 0) {
                sinkProxy = RPC::Administrator::Instance().ProxyInstance(channel, sinkImplementation, false, _sink);
                ASSERT((_sink != nullptr) && (sinkProxy != nullptr));
            }

            implementation->Unregister(_sink);

            if (sinkProxy != nullptr) {
                RPC::Administrator::Instance().Release(sinkProxy, message->Response());
            }
        },

        // (2) virtual uint32_t URL(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IWebBrowser* implementation = reinterpret_cast<const Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _url{};

            uint32_t result = implementation->URL(_url);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_url);
        },

        // (3) virtual uint32_t URL(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser* implementation = reinterpret_cast<Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _url = reader.Text();

            uint32_t result = implementation->URL(static_cast<const string&>(_url));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (4) virtual uint32_t Visibility(Exchange::IWebBrowser::VisibilityType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IWebBrowser* implementation = reinterpret_cast<const Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IWebBrowser::VisibilityType _visible{};

            uint32_t result = implementation->Visibility(_visible);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IWebBrowser::VisibilityType>(_visible);
        },

        // (5) virtual uint32_t Visibility(const Exchange::IWebBrowser::VisibilityType) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser* implementation = reinterpret_cast<Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::IWebBrowser::VisibilityType _visible = reader.Number<Exchange::IWebBrowser::VisibilityType>();

            uint32_t result = implementation->Visibility(_visible);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (6) virtual uint32_t FPS(uint8_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IWebBrowser* implementation = reinterpret_cast<const Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t _fps{};

            uint32_t result = implementation->FPS(_fps);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<uint8_t>(_fps);
        },

        // (7) virtual uint32_t HeaderList(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IWebBrowser* implementation = reinterpret_cast<const Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _headerlist{};

            uint32_t result = implementation->HeaderList(_headerlist);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_headerlist);
        },

        // (8) virtual uint32_t HeaderList(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser* implementation = reinterpret_cast<Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _headerlist = reader.Text();

            uint32_t result = implementation->HeaderList(static_cast<const string&>(_headerlist));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (9) virtual uint32_t UserAgent(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IWebBrowser* implementation = reinterpret_cast<const Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _useragent{};

            uint32_t result = implementation->UserAgent(_useragent);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_useragent);
        },

        // (10) virtual uint32_t UserAgent(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser* implementation = reinterpret_cast<Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _useragent = reader.Text();

            uint32_t result = implementation->UserAgent(static_cast<const string&>(_useragent));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (11) virtual uint32_t LocalStorageEnabled(bool&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IWebBrowser* implementation = reinterpret_cast<const Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool _enabled{};

            uint32_t result = implementation->LocalStorageEnabled(_enabled);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_enabled);
        },

        // (12) virtual uint32_t LocalStorageEnabled(const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser* implementation = reinterpret_cast<Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const bool _enabled = reader.Boolean();

            uint32_t result = implementation->LocalStorageEnabled(_enabled);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (13) virtual uint32_t HTTPCookieAcceptPolicy(Exchange::IWebBrowser::HTTPCookieAcceptPolicyType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IWebBrowser* implementation = reinterpret_cast<const Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IWebBrowser::HTTPCookieAcceptPolicyType _policy{};

            uint32_t result = implementation->HTTPCookieAcceptPolicy(_policy);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IWebBrowser::HTTPCookieAcceptPolicyType>(_policy);
        },

        // (14) virtual uint32_t HTTPCookieAcceptPolicy(const Exchange::IWebBrowser::HTTPCookieAcceptPolicyType) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser* implementation = reinterpret_cast<Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::IWebBrowser::HTTPCookieAcceptPolicyType _policy = reader.Number<Exchange::IWebBrowser::HTTPCookieAcceptPolicyType>();

            uint32_t result = implementation->HTTPCookieAcceptPolicy(_policy);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (15) virtual uint32_t BridgeReply(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser* implementation = reinterpret_cast<Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _payload = reader.Text();

            uint32_t result = implementation->BridgeReply(static_cast<const string&>(_payload));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (16) virtual uint32_t BridgeEvent(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser* implementation = reinterpret_cast<Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _payload = reader.Text();

            uint32_t result = implementation->BridgeEvent(static_cast<const string&>(_payload));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (17) virtual uint32_t CollectGarbage() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser* implementation = reinterpret_cast<Exchange::IWebBrowser*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->CollectGarbage();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeWebBrowserStubMethods

    //
    // Exchange::IWebBrowser::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void LoadFinished(const string&, const int32_t) = 0
    //  (1) virtual void LoadFailed(const string&) = 0
    //  (2) virtual void URLChange(const string&, const bool) = 0
    //  (3) virtual void VisibilityChange(const bool) = 0
    //  (4) virtual void PageClosure() = 0
    //  (5) virtual void BridgeQuery(const string&) = 0
    //

    ProxyStub::MethodHandler ExchangeWebBrowserNotificationStubMethods[] = {
        // (0) virtual void LoadFinished(const string&, const int32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser::INotification* implementation = reinterpret_cast<Exchange::IWebBrowser::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _URL = reader.Text();
            const int32_t _httpstatus = reader.Number<int32_t>();

            implementation->LoadFinished(static_cast<const string&>(_URL), _httpstatus);
        },

        // (1) virtual void LoadFailed(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser::INotification* implementation = reinterpret_cast<Exchange::IWebBrowser::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _URL = reader.Text();

            implementation->LoadFailed(static_cast<const string&>(_URL));
        },

        // (2) virtual void URLChange(const string&, const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser::INotification* implementation = reinterpret_cast<Exchange::IWebBrowser::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _URL = reader.Text();
            const bool _loaded = reader.Boolean();

            implementation->URLChange(static_cast<const string&>(_URL), _loaded);
        },

        // (3) virtual void VisibilityChange(const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser::INotification* implementation = reinterpret_cast<Exchange::IWebBrowser::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const bool _hidden = reader.Boolean();

            implementation->VisibilityChange(_hidden);
        },

        // (4) virtual void PageClosure() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser::INotification* implementation = reinterpret_cast<Exchange::IWebBrowser::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->PageClosure();
        },

        // (5) virtual void BridgeQuery(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IWebBrowser::INotification* implementation = reinterpret_cast<Exchange::IWebBrowser::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _message = reader.Text();

            implementation->BridgeQuery(static_cast<const string&>(_message));
        }
    }; // ExchangeWebBrowserNotificationStubMethods

    //
    // Exchange::IBrowserResources interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Headers(Exchange::IBrowserResources::IStringIterator*&) const = 0
    //  (1) virtual uint32_t Headers(Exchange::IBrowserResources::IStringIterator* const) = 0
    //  (2) virtual uint32_t UserScripts(Exchange::IBrowserResources::IStringIterator*&) const = 0
    //  (3) virtual uint32_t UserScripts(Exchange::IBrowserResources::IStringIterator* const) = 0
    //  (4) virtual uint32_t UserStyleSheets(Exchange::IBrowserResources::IStringIterator*&) const = 0
    //  (5) virtual uint32_t UserStyleSheets(Exchange::IBrowserResources::IStringIterator* const) = 0
    //

    ProxyStub::MethodHandler ExchangeBrowserResourcesStubMethods[] = {
        // (0) virtual uint32_t Headers(Exchange::IBrowserResources::IStringIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IBrowserResources* implementation = reinterpret_cast<const Exchange::IBrowserResources*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IBrowserResources::IStringIterator* _header{};

            uint32_t result = implementation->Headers(_header);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_header));

            RPC::Administrator::Instance().RegisterInterface(channel, _header);
        },

        // (1) virtual uint32_t Headers(Exchange::IBrowserResources::IStringIterator* const) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowserResources* implementation = reinterpret_cast<Exchange::IBrowserResources*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id headerImplementation = reader.Number<Core::instance_id>();

            Exchange::IBrowserResources::IStringIterator* _header = nullptr;
            ProxyStub::UnknownProxy* headerProxy = nullptr;
            if (headerImplementation != 0) {
                headerProxy = RPC::Administrator::Instance().ProxyInstance(channel, headerImplementation, false, _header);
                ASSERT((_header != nullptr) && (headerProxy != nullptr));
            }

            uint32_t result = implementation->Headers(_header);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (headerProxy != nullptr) {
                RPC::Administrator::Instance().Release(headerProxy, message->Response());
            }
        },

        // (2) virtual uint32_t UserScripts(Exchange::IBrowserResources::IStringIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IBrowserResources* implementation = reinterpret_cast<const Exchange::IBrowserResources*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IBrowserResources::IStringIterator* _uris{};

            uint32_t result = implementation->UserScripts(_uris);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_uris));

            RPC::Administrator::Instance().RegisterInterface(channel, _uris);
        },

        // (3) virtual uint32_t UserScripts(Exchange::IBrowserResources::IStringIterator* const) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowserResources* implementation = reinterpret_cast<Exchange::IBrowserResources*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id urisImplementation = reader.Number<Core::instance_id>();

            Exchange::IBrowserResources::IStringIterator* _uris = nullptr;
            ProxyStub::UnknownProxy* urisProxy = nullptr;
            if (urisImplementation != 0) {
                urisProxy = RPC::Administrator::Instance().ProxyInstance(channel, urisImplementation, false, _uris);
                ASSERT((_uris != nullptr) && (urisProxy != nullptr));
            }

            uint32_t result = implementation->UserScripts(_uris);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (urisProxy != nullptr) {
                RPC::Administrator::Instance().Release(urisProxy, message->Response());
            }
        },

        // (4) virtual uint32_t UserStyleSheets(Exchange::IBrowserResources::IStringIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IBrowserResources* implementation = reinterpret_cast<const Exchange::IBrowserResources*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IBrowserResources::IStringIterator* _uris{};

            uint32_t result = implementation->UserStyleSheets(_uris);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_uris));

            RPC::Administrator::Instance().RegisterInterface(channel, _uris);
        },

        // (5) virtual uint32_t UserStyleSheets(Exchange::IBrowserResources::IStringIterator* const) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowserResources* implementation = reinterpret_cast<Exchange::IBrowserResources*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id urisImplementation = reader.Number<Core::instance_id>();

            Exchange::IBrowserResources::IStringIterator* _uris = nullptr;
            ProxyStub::UnknownProxy* urisProxy = nullptr;
            if (urisImplementation != 0) {
                urisProxy = RPC::Administrator::Instance().ProxyInstance(channel, urisImplementation, false, _uris);
                ASSERT((_uris != nullptr) && (urisProxy != nullptr));
            }

            uint32_t result = implementation->UserStyleSheets(_uris);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (urisProxy != nullptr) {
                RPC::Administrator::Instance().Release(urisProxy, message->Response());
            }
        }
    }; // ExchangeBrowserResourcesStubMethods

    //
    // Exchange::IBrowserSecurity interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t SecurityProfile(string&) const = 0
    //  (1) virtual uint32_t SecurityProfile(const string&) = 0
    //  (2) virtual uint32_t MixedContentPolicy(Exchange::IBrowserSecurity::MixedContentPolicyType&) const = 0
    //  (3) virtual uint32_t MixedContentPolicy(const Exchange::IBrowserSecurity::MixedContentPolicyType) = 0
    //

    ProxyStub::MethodHandler ExchangeBrowserSecurityStubMethods[] = {
        // (0) virtual uint32_t SecurityProfile(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IBrowserSecurity* implementation = reinterpret_cast<const Exchange::IBrowserSecurity*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _profile{};

            uint32_t result = implementation->SecurityProfile(_profile);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_profile);
        },

        // (1) virtual uint32_t SecurityProfile(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowserSecurity* implementation = reinterpret_cast<Exchange::IBrowserSecurity*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _profile = reader.Text();

            uint32_t result = implementation->SecurityProfile(static_cast<const string&>(_profile));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (2) virtual uint32_t MixedContentPolicy(Exchange::IBrowserSecurity::MixedContentPolicyType&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::IBrowserSecurity* implementation = reinterpret_cast<const Exchange::IBrowserSecurity*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::IBrowserSecurity::MixedContentPolicyType _policy{};

            uint32_t result = implementation->MixedContentPolicy(_policy);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::IBrowserSecurity::MixedContentPolicyType>(_policy);
        },

        // (3) virtual uint32_t MixedContentPolicy(const Exchange::IBrowserSecurity::MixedContentPolicyType) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::IBrowserSecurity* implementation = reinterpret_cast<Exchange::IBrowserSecurity*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::IBrowserSecurity::MixedContentPolicyType _policy = reader.Number<Exchange::IBrowserSecurity::MixedContentPolicyType>();

            uint32_t result = implementation->MixedContentPolicy(_policy);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        }
    }; // ExchangeBrowserSecurityStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // RPC::IIteratorTypeInstanceB0D15B1A interface proxy definitions
    //
    // Methods:
    //  (0) virtual bool Next(string&) = 0
    //  (1) virtual bool Previous(string&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual string Current() const = 0
    //

    class RPCIteratorTypeInstanceB0D15B1AProxy final : public ProxyStub::UnknownProxyType<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>> {
    public:
        RPCIteratorTypeInstanceB0D15B1AProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

    }; // class RPCIteratorTypeInstanceB0D15B1AProxy

    //
    // Exchange::IBrowser interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Register(Exchange::IBrowser::INotification*) = 0
    //  (1) virtual void Unregister(Exchange::IBrowser::INotification*) = 0
    //  (2) virtual void SetURL(const string&) = 0
    //  (3) virtual string GetURL() const = 0
    //  (4) virtual uint32_t GetFPS() const = 0
    //  (5) virtual void Hide(const bool) = 0
    //

    class ExchangeBrowserProxy final : public ProxyStub::UnknownProxyType<Exchange::IBrowser> {
    public:
        ExchangeBrowserProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Register(Exchange::IBrowser::INotification* _sink) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_sink));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void Unregister(Exchange::IBrowser::INotification* _sink) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_sink));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void SetURL(const string& _URL) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_URL));

            ProxyStub::UnknownProxyType<Exchange::IBrowser>::Invoke(message);
        }

        string GetURL() const override
        {
            IPCMessage message(BaseClass::Message(3));

            string result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Text();
            }

            return (result);
        }

        uint32_t GetFPS() const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                result = reader.Number<uint32_t>();
            }

            return (result);
        }

        void Hide(const bool _hidden) override
        {
            IPCMessage message(BaseClass::Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Boolean(_hidden);

            ProxyStub::UnknownProxyType<Exchange::IBrowser>::Invoke(message);
        }

    }; // class ExchangeBrowserProxy

    //
    // Exchange::IBrowser::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void LoadFinished(const string&) = 0
    //  (1) virtual void URLChanged(const string&) = 0
    //  (2) virtual void Hidden(const bool) = 0
    //  (3) virtual void Closure() = 0
    //

    class ExchangeBrowserNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::IBrowser::INotification> {
    public:
        ExchangeBrowserNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void LoadFinished(const string& _URL) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_URL));

            ProxyStub::UnknownProxyType<Exchange::IBrowser::INotification>::Invoke(message);
        }

        void URLChanged(const string& _URL) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_URL));

            ProxyStub::UnknownProxyType<Exchange::IBrowser::INotification>::Invoke(message);
        }

        void Hidden(const bool _hidden) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Boolean(_hidden);

            ProxyStub::UnknownProxyType<Exchange::IBrowser::INotification>::Invoke(message);
        }

        void Closure() override
        {
            IPCMessage message(BaseClass::Message(3));

            ProxyStub::UnknownProxyType<Exchange::IBrowser::INotification>::Invoke(message);
        }

    }; // class ExchangeBrowserNotificationProxy

    //
    // Exchange::IWebBrowser interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Register(Exchange::IWebBrowser::INotification*) = 0
    //  (1) virtual void Unregister(Exchange::IWebBrowser::INotification*) = 0
    //  (2) virtual uint32_t URL(string&) const = 0
    //  (3) virtual uint32_t URL(const string&) = 0
    //  (4) virtual uint32_t Visibility(Exchange::IWebBrowser::VisibilityType&) const = 0
    //  (5) virtual uint32_t Visibility(const Exchange::IWebBrowser::VisibilityType) = 0
    //  (6) virtual uint32_t FPS(uint8_t&) const = 0
    //  (7) virtual uint32_t HeaderList(string&) const = 0
    //  (8) virtual uint32_t HeaderList(const string&) = 0
    //  (9) virtual uint32_t UserAgent(string&) const = 0
    //  (10) virtual uint32_t UserAgent(const string&) = 0
    //  (11) virtual uint32_t LocalStorageEnabled(bool&) const = 0
    //  (12) virtual uint32_t LocalStorageEnabled(const bool) = 0
    //  (13) virtual uint32_t HTTPCookieAcceptPolicy(Exchange::IWebBrowser::HTTPCookieAcceptPolicyType&) const = 0
    //  (14) virtual uint32_t HTTPCookieAcceptPolicy(const Exchange::IWebBrowser::HTTPCookieAcceptPolicyType) = 0
    //  (15) virtual uint32_t BridgeReply(const string&) = 0
    //  (16) virtual uint32_t BridgeEvent(const string&) = 0
    //  (17) virtual uint32_t CollectGarbage() = 0
    //

    class ExchangeWebBrowserProxy final : public ProxyStub::UnknownProxyType<Exchange::IWebBrowser> {
    public:
        ExchangeWebBrowserProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void Register(Exchange::IWebBrowser::INotification* _sink) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_sink));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        void Unregister(Exchange::IWebBrowser::INotification* _sink) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_sink));

            const Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                Complete(reader);
            }
        }

        uint32_t URL(string& _url) const override
        {
            IPCMessage message(BaseClass::Message(2));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _url = reader.Text();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t URL(const string& _url) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_url));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t Visibility(Exchange::IWebBrowser::VisibilityType& _visible) const override
        {
            IPCMessage message(BaseClass::Message(4));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _visible = reader.Number<Exchange::IWebBrowser::VisibilityType>();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t Visibility(const Exchange::IWebBrowser::VisibilityType _visible) override
        {
            IPCMessage message(BaseClass::Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::IWebBrowser::VisibilityType>(_visible);

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t FPS(uint8_t& _fps) const override
        {
            IPCMessage message(BaseClass::Message(6));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _fps = reader.Number<uint8_t>();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t HeaderList(string& _headerlist) const override
        {
            IPCMessage message(BaseClass::Message(7));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _headerlist = reader.Text();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t HeaderList(const string& _headerlist) override
        {
            IPCMessage message(BaseClass::Message(8));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_headerlist));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t UserAgent(string& _useragent) const override
        {
            IPCMessage message(BaseClass::Message(9));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _useragent = reader.Text();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t UserAgent(const string& _useragent) override
        {
            IPCMessage message(BaseClass::Message(10));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_useragent));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t LocalStorageEnabled(bool& _enabled) const override
        {
            IPCMessage message(BaseClass::Message(11));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _enabled = reader.Boolean();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t LocalStorageEnabled(const bool _enabled) override
        {
            IPCMessage message(BaseClass::Message(12));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Boolean(_enabled);

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t HTTPCookieAcceptPolicy(Exchange::IWebBrowser::HTTPCookieAcceptPolicyType& _policy) const override
        {
            IPCMessage message(BaseClass::Message(13));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _policy = reader.Number<Exchange::IWebBrowser::HTTPCookieAcceptPolicyType>();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t HTTPCookieAcceptPolicy(const Exchange::IWebBrowser::HTTPCookieAcceptPolicyType _policy) override
        {
            IPCMessage message(BaseClass::Message(14));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::IWebBrowser::HTTPCookieAcceptPolicyType>(_policy);

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t BridgeReply(const string& _payload) override
        {
            IPCMessage message(BaseClass::Message(15));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_payload));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t BridgeEvent(const string& _payload) override
        {
            IPCMessage message(BaseClass::Message(16));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_payload));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t CollectGarbage() override
        {
            IPCMessage message(BaseClass::Message(17));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IWebBrowser>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

    }; // class ExchangeWebBrowserProxy

    //
    // Exchange::IWebBrowser::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void LoadFinished(const string&, const int32_t) = 0
    //  (1) virtual void LoadFailed(const string&) = 0
    //  (2) virtual void URLChange(const string&, const bool) = 0
    //  (3) virtual void VisibilityChange(const bool) = 0
    //  (4) virtual void PageClosure() = 0
    //  (5) virtual void BridgeQuery(const string&) = 0
    //

    class ExchangeWebBrowserNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::IWebBrowser::INotification> {
    public:
        ExchangeWebBrowserNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        void LoadFinished(const string& _URL, const int32_t _httpstatus) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_URL));
            writer.Number<int32_t>(_httpstatus);

            ProxyStub::UnknownProxyType<Exchange::IWebBrowser::INotification>::Invoke(message);
        }

        void LoadFailed(const string& _URL) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_URL));

            ProxyStub::UnknownProxyType<Exchange::IWebBrowser::INotification>::Invoke(message);
        }

        void URLChange(const string& _URL, const bool _loaded) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_URL));
            writer.Boolean(_loaded);

            ProxyStub::UnknownProxyType<Exchange::IWebBrowser::INotification>::Invoke(message);
        }

        void VisibilityChange(const bool _hidden) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Boolean(_hidden);

            ProxyStub::UnknownProxyType<Exchange::IWebBrowser::INotification>::Invoke(message);
        }

        void PageClosure() override
        {
            IPCMessage message(BaseClass::Message(4));

            ProxyStub::UnknownProxyType<Exchange::IWebBrowser::INotification>::Invoke(message);
        }

        void BridgeQuery(const string& _message) override
        {
            IPCMessage message(BaseClass::Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_message));

            ProxyStub::UnknownProxyType<Exchange::IWebBrowser::INotification>::Invoke(message);
        }

    }; // class ExchangeWebBrowserNotificationProxy

    //
    // Exchange::IBrowserResources interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Headers(Exchange::IBrowserResources::IStringIterator*&) const = 0
    //  (1) virtual uint32_t Headers(Exchange::IBrowserResources::IStringIterator* const) = 0
    //  (2) virtual uint32_t UserScripts(Exchange::IBrowserResources::IStringIterator*&) const = 0
    //  (3) virtual uint32_t UserScripts(Exchange::IBrowserResources::IStringIterator* const) = 0
    //  (4) virtual uint32_t UserStyleSheets(Exchange::IBrowserResources::IStringIterator*&) const = 0
    //  (5) virtual uint32_t UserStyleSheets(Exchange::IBrowserResources::IStringIterator* const) = 0
    //

    class ExchangeBrowserResourcesProxy final : public ProxyStub::UnknownProxyType<Exchange::IBrowserResources> {
    public:
        ExchangeBrowserResourcesProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Headers(Exchange::IBrowserResources::IStringIterator*& _header) const override
        {
            IPCMessage message(BaseClass::Message(0));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowserResources>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _header = reinterpret_cast<Exchange::IBrowserResources::IStringIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IBrowserResources::IStringIterator::ID));
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t Headers(Exchange::IBrowserResources::IStringIterator* const _header) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_header));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowserResources>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                Complete(reader);
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t UserScripts(Exchange::IBrowserResources::IStringIterator*& _uris) const override
        {
            IPCMessage message(BaseClass::Message(2));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowserResources>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _uris = reinterpret_cast<Exchange::IBrowserResources::IStringIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IBrowserResources::IStringIterator::ID));
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t UserScripts(Exchange::IBrowserResources::IStringIterator* const _uris) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_uris));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowserResources>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                Complete(reader);
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t UserStyleSheets(Exchange::IBrowserResources::IStringIterator*& _uris) const override
        {
            IPCMessage message(BaseClass::Message(4));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowserResources>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _uris = reinterpret_cast<Exchange::IBrowserResources::IStringIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::IBrowserResources::IStringIterator::ID));
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t UserStyleSheets(Exchange::IBrowserResources::IStringIterator* const _uris) override
        {
            IPCMessage message(BaseClass::Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_uris));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowserResources>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                Complete(reader);
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

    }; // class ExchangeBrowserResourcesProxy

    //
    // Exchange::IBrowserSecurity interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t SecurityProfile(string&) const = 0
    //  (1) virtual uint32_t SecurityProfile(const string&) = 0
    //  (2) virtual uint32_t MixedContentPolicy(Exchange::IBrowserSecurity::MixedContentPolicyType&) const = 0
    //  (3) virtual uint32_t MixedContentPolicy(const Exchange::IBrowserSecurity::MixedContentPolicyType) = 0
    //

    class ExchangeBrowserSecurityProxy final : public ProxyStub::UnknownProxyType<Exchange::IBrowserSecurity> {
    public:
        ExchangeBrowserSecurityProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t SecurityProfile(string& _profile) const override
        {
            IPCMessage message(BaseClass::Message(0));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowserSecurity>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _profile = reader.Text();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t SecurityProfile(const string& _profile) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_profile));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowserSecurity>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t MixedContentPolicy(Exchange::IBrowserSecurity::MixedContentPolicyType& _policy) const override
        {
            IPCMessage message(BaseClass::Message(2));

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowserSecurity>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & 0x80000000) == 0) {
                    _policy = reader.Number<Exchange::IBrowserSecurity::MixedContentPolicyType>();
                }
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

        uint32_t MixedContentPolicy(const Exchange::IBrowserSecurity::MixedContentPolicyType _policy) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::IBrowserSecurity::MixedContentPolicyType>(_policy);

            Core::hresult hresult = ProxyStub::UnknownProxyType<Exchange::IBrowserSecurity>::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= 0x80000000;
            }

            return (hresult);
        }

    }; // class ExchangeBrowserSecurityProxy

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>, RPCIteratorTypeInstanceB0D15B1AStubMethods> RPCIteratorTypeInstanceB0D15B1AStub;
        typedef ProxyStub::UnknownStubType<Exchange::IBrowser, ExchangeBrowserStubMethods> ExchangeBrowserStub;
        typedef ProxyStub::UnknownStubType<Exchange::IBrowser::INotification, ExchangeBrowserNotificationStubMethods> ExchangeBrowserNotificationStub;
        typedef ProxyStub::UnknownStubType<Exchange::IWebBrowser, ExchangeWebBrowserStubMethods> ExchangeWebBrowserStub;
        typedef ProxyStub::UnknownStubType<Exchange::IWebBrowser::INotification, ExchangeWebBrowserNotificationStubMethods> ExchangeWebBrowserNotificationStub;
        typedef ProxyStub::UnknownStubType<Exchange::IBrowserResources, ExchangeBrowserResourcesStubMethods> ExchangeBrowserResourcesStub;
        typedef ProxyStub::UnknownStubType<Exchange::IBrowserSecurity, ExchangeBrowserSecurityStubMethods> ExchangeBrowserSecurityStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>, RPCIteratorTypeInstanceB0D15B1AProxy, RPCIteratorTypeInstanceB0D15B1AStub>();
                RPC::Administrator::Instance().Announce<Exchange::IBrowser, ExchangeBrowserProxy, ExchangeBrowserStub>();
                RPC::Administrator::Instance().Announce<Exchange::IBrowser::INotification, ExchangeBrowserNotificationProxy, ExchangeBrowserNotificationStub>();
                RPC::Administrator::Instance().Announce<Exchange::IWebBrowser, ExchangeWebBrowserProxy, ExchangeWebBrowserStub>();
                RPC::Administrator::Instance().Announce<Exchange::IWebBrowser::INotification, ExchangeWebBrowserNotificationProxy, ExchangeWebBrowserNotificationStub>();
                RPC::Administrator::Instance().Announce<Exchange::IBrowserResources, ExchangeBrowserResourcesProxy, ExchangeBrowserResourcesStub>();
                RPC::Administrator::Instance().Announce<Exchange::IBrowserSecurity, ExchangeBrowserSecurityProxy, ExchangeBrowserSecurityStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>>();
                RPC::Administrator::Instance().Recall<Exchange::IBrowser>();
                RPC::Administrator::Instance().Recall<Exchange::IBrowser::INotification>();
                RPC::Administrator::Instance().Recall<Exchange::IWebBrowser>();
                RPC::Administrator::Instance().Recall<Exchange::IWebBrowser::INotification>();
                RPC::Administrator::Instance().Recall<Exchange::IBrowserResources>();
                RPC::Administrator::Instance().Recall<Exchange::IBrowserSecurity>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
