/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
// THIS CODE IS AUTOGENERATED, DO NOT MODIFY
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
#pragma once
#include <AzCore/Component/Component.h>
#include <AzCore/Component/Entity.h>
#include <AzCore/Component/ComponentBus.h>
#include <AzCore/EBus/EBus.h>
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/RTTI/BehaviorContext.h>
#include <AzCore/Serialization/EditContext.h>
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/std/smart_ptr/make_shared.h>
#include <AzCore/std/smart_ptr/shared_ptr.h>
#include <AzCore/std/string/conversions.h>

#if defined (PLATFORM_SUPPORTS_AWS_NATIVE_SDK)
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpResponse.h>
#endif // (PLATFORM_SUPPORTS_AWS_NATIVE_SDK)

#include <CloudGemFramework/ServiceRequestJob.h>

#include "CloudGemSpeechRecognition_precompiled.h"

namespace CloudGemLex {
namespace ServiceAPI {
    
    extern const char* LmbrAWS_CodeGen_PostAudioResponse_UUID;
    
    extern const char* LmbrAWS_CodeGen_PostBotDescRequest_UUID;
    
    extern const char* LmbrAWS_CodeGen_BotStatusResponse_UUID;
    
    extern const char* LmbrAWS_CodeGen_GetBotDescResponsePropertyDesc_file_UUID;
    
    extern const char* LmbrAWS_CodeGen_GetListBotsResponse_UUID;
    
    extern const char* LmbrAWS_CodeGen_Component_UUID;
    
    extern const char* LmbrAWS_CodeGen_ResponseHandler_UUID;
    
    extern const char* LmbrAWS_CodeGen_PostTextRequest_UUID;
    
    extern const char* LmbrAWS_CodeGen_NotificationBus1_UUID;
    
    extern const char* LmbrAWS_CodeGen_RequestBus1_UUID;
    
    extern const char* LmbrAWS_CodeGen_ListBotsEntry_UUID;
    
    extern const char* LmbrAWS_CodeGen_ServiceStatus_UUID;
    
    extern const char* LmbrAWS_CodeGen_GetBotDescResponse_UUID;
    
    extern const char* LmbrAWS_CodeGen_PostBotDescRequestPropertyDesc_file_UUID;
    
    extern const char* LmbrAWS_CodeGen_PostAudioRequest_UUID;
    

    // redefs
    

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const int& item);

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const AZStd::string& item);

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const double& item);

    
    
    struct PostTextRequest
    {

        AZ_TYPE_INFO(PostTextRequest, LmbrAWS_CodeGen_PostTextRequest_UUID)
        AZ_CLASS_ALLOCATOR(PostTextRequest, AZ::SystemAllocator, 0)

        
        AZStd::string text;
        
        AZStd::string session_attributes;
        
        AZStd::string bot_alias;
        
        AZStd::string user_id;
        
        AZStd::string name;
        

        bool OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader);

        static void Reflect(AZ::ReflectContext* reflection);
    };

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const PostTextRequest& item);
    
    
    
    struct PostAudioResponse
    {

        AZ_TYPE_INFO(PostAudioResponse, LmbrAWS_CodeGen_PostAudioResponse_UUID)
        AZ_CLASS_ALLOCATOR(PostAudioResponse, AZ::SystemAllocator, 0)

        
        AZStd::string slot_to_elicit;
        
        AZStd::string session_attributes;
        
        AZStd::string intent;
        
        AZStd::string input_transcript;
        
        AZStd::string dialog_state;
        
        AZStd::string slots;
        
        AZStd::string message;
        

        bool OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader);

        static void Reflect(AZ::ReflectContext* reflection);
    };

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const PostAudioResponse& item);
    
    
    
    struct ServiceStatus
    {

        AZ_TYPE_INFO(ServiceStatus, LmbrAWS_CodeGen_ServiceStatus_UUID)
        AZ_CLASS_ALLOCATOR(ServiceStatus, AZ::SystemAllocator, 0)

        
        AZStd::string status;
        

        bool OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader);

        static void Reflect(AZ::ReflectContext* reflection);
    };

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const ServiceStatus& item);
    
    
    
    struct PostBotDescRequestPropertyDesc_file
    {

        AZ_TYPE_INFO(PostBotDescRequestPropertyDesc_file, LmbrAWS_CodeGen_PostBotDescRequestPropertyDesc_file_UUID)
        AZ_CLASS_ALLOCATOR(PostBotDescRequestPropertyDesc_file, AZ::SystemAllocator, 0)

        

        bool OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader);

        static void Reflect(AZ::ReflectContext* reflection);
    };

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const PostBotDescRequestPropertyDesc_file& item);
    
    
    
    struct PostBotDescRequest
    {

        AZ_TYPE_INFO(PostBotDescRequest, LmbrAWS_CodeGen_PostBotDescRequest_UUID)
        AZ_CLASS_ALLOCATOR(PostBotDescRequest, AZ::SystemAllocator, 0)

        
        PostBotDescRequestPropertyDesc_file desc_file;
        

        bool OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader);

        static void Reflect(AZ::ReflectContext* reflection);
    };

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const PostBotDescRequest& item);
    
    
    
    struct BotStatusResponse
    {

        AZ_TYPE_INFO(BotStatusResponse, LmbrAWS_CodeGen_BotStatusResponse_UUID)
        AZ_CLASS_ALLOCATOR(BotStatusResponse, AZ::SystemAllocator, 0)

        
        AZStd::string status;
        

        bool OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader);

        static void Reflect(AZ::ReflectContext* reflection);
    };

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const BotStatusResponse& item);
    
    
    
    struct GetBotDescResponsePropertyDesc_file
    {

        AZ_TYPE_INFO(GetBotDescResponsePropertyDesc_file, LmbrAWS_CodeGen_GetBotDescResponsePropertyDesc_file_UUID)
        AZ_CLASS_ALLOCATOR(GetBotDescResponsePropertyDesc_file, AZ::SystemAllocator, 0)

        

        bool OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader);

        static void Reflect(AZ::ReflectContext* reflection);
    };

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const GetBotDescResponsePropertyDesc_file& item);
    
    
    
    struct GetBotDescResponse
    {

        AZ_TYPE_INFO(GetBotDescResponse, LmbrAWS_CodeGen_GetBotDescResponse_UUID)
        AZ_CLASS_ALLOCATOR(GetBotDescResponse, AZ::SystemAllocator, 0)

        
        GetBotDescResponsePropertyDesc_file desc_file;
        

        bool OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader);

        static void Reflect(AZ::ReflectContext* reflection);
    };

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const GetBotDescResponse& item);
    
    
    
    struct ListBotsEntry
    {

        AZ_TYPE_INFO(ListBotsEntry, LmbrAWS_CodeGen_ListBotsEntry_UUID)
        AZ_CLASS_ALLOCATOR(ListBotsEntry, AZ::SystemAllocator, 0)

        
        AZStd::string status;
        
        AZStd::string version;
        
        AZStd::string updated;
        
        AZStd::string created;
        
        AZStd::string name;
        

        bool OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader);

        static void Reflect(AZ::ReflectContext* reflection);
    };

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const ListBotsEntry& item);
    
    
    
    using GetListBotsResponsePropertyBots = AZStd::vector<ListBotsEntry>;

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const GetListBotsResponsePropertyBots& list);
    
    
    
    struct GetListBotsResponse
    {

        AZ_TYPE_INFO(GetListBotsResponse, LmbrAWS_CodeGen_GetListBotsResponse_UUID)
        AZ_CLASS_ALLOCATOR(GetListBotsResponse, AZ::SystemAllocator, 0)

        
        GetListBotsResponsePropertyBots bots;
        
        AZStd::string nextToken;
        

        bool OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader);

        static void Reflect(AZ::ReflectContext* reflection);
    };

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const GetListBotsResponse& item);
    
    
    
    struct PostAudioRequest
    {

        AZ_TYPE_INFO(PostAudioRequest, LmbrAWS_CodeGen_PostAudioRequest_UUID)
        AZ_CLASS_ALLOCATOR(PostAudioRequest, AZ::SystemAllocator, 0)

        
        AZStd::string audio;
        
        AZStd::string session_attributes;
        
        AZStd::string bot_alias;
        
        AZStd::string user_id;
        
        AZStd::string name;
        

        bool OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader);

        static void Reflect(AZ::ReflectContext* reflection);
    };

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const PostAudioRequest& item);
    
    


    // Service RequestJobs
    CLOUD_GEM_SERVICE(CloudGemLex);


    
    class PostServicePosttextRequest
        : public CloudGemFramework::ServiceRequest
    {
    public:
        SERVICE_REQUEST(CloudGemLex, HttpMethod::HTTP_POST, "/service/posttext");

        struct Parameters
        {
            
            PostTextRequest post_text;
            

            bool BuildRequest(CloudGemFramework::RequestBuilder& request);

            bool WriteJson(CloudGemFramework::JsonWriter& writer) const;
        };

        
        PostAudioResponse result;
        

        Parameters parameters;
    };


    using PostServicePosttextRequestJob = CloudGemFramework::ServiceRequestJob<PostServicePosttextRequest>;
    
    class GetServiceStatusRequest
        : public CloudGemFramework::ServiceRequest
    {
    public:
        SERVICE_REQUEST(CloudGemLex, HttpMethod::HTTP_GET, "/service/status");

        struct Parameters
        {
            

            bool BuildRequest(CloudGemFramework::RequestBuilder& request);

            bool WriteJson(CloudGemFramework::JsonWriter& writer) const;
        };

        
        ServiceStatus result;
        

        Parameters parameters;
    };


    using GetServiceStatusRequestJob = CloudGemFramework::ServiceRequestJob<GetServiceStatusRequest>;
    
    class PutAdminBotdescRequest
        : public CloudGemFramework::ServiceRequest
    {
    public:
        SERVICE_REQUEST(CloudGemLex, HttpMethod::HTTP_PUT, "/admin/botdesc");

        struct Parameters
        {
            
            PostBotDescRequest bot_desc;
            

            bool BuildRequest(CloudGemFramework::RequestBuilder& request);

            bool WriteJson(CloudGemFramework::JsonWriter& writer) const;
        };

        
        BotStatusResponse result;
        

        Parameters parameters;
    };


    using PutAdminBotdescRequestJob = CloudGemFramework::ServiceRequestJob<PutAdminBotdescRequest>;
    
    class GetAdminBotdescRequest
        : public CloudGemFramework::ServiceRequest
    {
    public:
        SERVICE_REQUEST(CloudGemLex, HttpMethod::HTTP_GET, "/admin/botdesc/{name}");

        struct Parameters
        {
            
            AZStd::string name;
            

            bool BuildRequest(CloudGemFramework::RequestBuilder& request);

            bool WriteJson(CloudGemFramework::JsonWriter& writer) const;
        };

        
        GetBotDescResponse result;
        

        Parameters parameters;
    };


    using GetAdminBotdescRequestJob = CloudGemFramework::ServiceRequestJob<GetAdminBotdescRequest>;
    
    class DeleteAdminDeletebotRequest
        : public CloudGemFramework::ServiceRequest
    {
    public:
        SERVICE_REQUEST(CloudGemLex, HttpMethod::HTTP_DELETE, "/admin/deletebot/{name}");

        struct Parameters
        {
            
            AZStd::string name;
            

            bool BuildRequest(CloudGemFramework::RequestBuilder& request);

            bool WriteJson(CloudGemFramework::JsonWriter& writer) const;
        };

        
        BotStatusResponse result;
        

        Parameters parameters;
    };


    using DeleteAdminDeletebotRequestJob = CloudGemFramework::ServiceRequestJob<DeleteAdminDeletebotRequest>;
    
    class GetAdminBotstatusRequest
        : public CloudGemFramework::ServiceRequest
    {
    public:
        SERVICE_REQUEST(CloudGemLex, HttpMethod::HTTP_GET, "/admin/botstatus/{name}");

        struct Parameters
        {
            
            AZStd::string name;
            

            bool BuildRequest(CloudGemFramework::RequestBuilder& request);

            bool WriteJson(CloudGemFramework::JsonWriter& writer) const;
        };

        
        BotStatusResponse result;
        

        Parameters parameters;
    };


    using GetAdminBotstatusRequestJob = CloudGemFramework::ServiceRequestJob<GetAdminBotstatusRequest>;
    
    class GetAdminListbotsRequest
        : public CloudGemFramework::ServiceRequest
    {
    public:
        SERVICE_REQUEST(CloudGemLex, HttpMethod::HTTP_GET, "/admin/listbots/{next_token}");

        struct Parameters
        {
            
            AZStd::string next_token;
            

            bool BuildRequest(CloudGemFramework::RequestBuilder& request);

            bool WriteJson(CloudGemFramework::JsonWriter& writer) const;
        };

        
        GetListBotsResponse result;
        

        Parameters parameters;
    };


    using GetAdminListbotsRequestJob = CloudGemFramework::ServiceRequestJob<GetAdminListbotsRequest>;
    
    class PutAdminPublishbotRequest
        : public CloudGemFramework::ServiceRequest
    {
    public:
        SERVICE_REQUEST(CloudGemLex, HttpMethod::HTTP_PUT, "/admin/publishbot/{name}/{version}");

        struct Parameters
        {
            
            AZStd::string name;
            
            AZStd::string version;
            

            bool BuildRequest(CloudGemFramework::RequestBuilder& request);

            bool WriteJson(CloudGemFramework::JsonWriter& writer) const;
        };

        
        BotStatusResponse result;
        

        Parameters parameters;
    };


    using PutAdminPublishbotRequestJob = CloudGemFramework::ServiceRequestJob<PutAdminPublishbotRequest>;
    
    class PostServicePostaudioRequest
        : public CloudGemFramework::ServiceRequest
    {
    public:
        SERVICE_REQUEST(CloudGemLex, HttpMethod::HTTP_POST, "/service/postaudio");

        struct Parameters
        {
            
            PostAudioRequest post_audio;
            

            bool BuildRequest(CloudGemFramework::RequestBuilder& request);

            bool WriteJson(CloudGemFramework::JsonWriter& writer) const;
        };

        
        PostAudioResponse result;
        

        Parameters parameters;
    };


    using PostServicePostaudioRequestJob = CloudGemFramework::ServiceRequestJob<PostServicePostaudioRequest>;
    


    // Notification bus for this component
    class CloudGemLexNotifications
        : public AZ::ComponentBus
    {
    public:
        
        /**
         * Sent when the request is a success
         *
         * Params:
         *    jsonOutput:       The output receieved from the lambda call
         *    request:          The AWS Lambda request object
         */
        
        virtual void OnPostServicePosttextRequestSuccess(const PostAudioResponse response);
        

        /**
         * Sent when the request fails
         *
         * Params:
         *    error:           The output receieved from the lambda call,
         *                     could be function error or an issue with the request
         *    request:         The AWS Lambda request object
         */
        virtual void OnPostServicePosttextRequestError(const CloudGemFramework::Error error);
        
        /**
         * Sent when the request is a success
         *
         * Params:
         *    jsonOutput:       The output receieved from the lambda call
         *    request:          The AWS Lambda request object
         */
        
        virtual void OnGetServiceStatusRequestSuccess(const ServiceStatus response);
        

        /**
         * Sent when the request fails
         *
         * Params:
         *    error:           The output receieved from the lambda call,
         *                     could be function error or an issue with the request
         *    request:         The AWS Lambda request object
         */
        virtual void OnGetServiceStatusRequestError(const CloudGemFramework::Error error);
        
        /**
         * Sent when the request is a success
         *
         * Params:
         *    jsonOutput:       The output receieved from the lambda call
         *    request:          The AWS Lambda request object
         */
        
        virtual void OnPutAdminBotdescRequestSuccess(const BotStatusResponse response);
        

        /**
         * Sent when the request fails
         *
         * Params:
         *    error:           The output receieved from the lambda call,
         *                     could be function error or an issue with the request
         *    request:         The AWS Lambda request object
         */
        virtual void OnPutAdminBotdescRequestError(const CloudGemFramework::Error error);
        
        /**
         * Sent when the request is a success
         *
         * Params:
         *    jsonOutput:       The output receieved from the lambda call
         *    request:          The AWS Lambda request object
         */
        
        virtual void OnGetAdminBotdescRequestSuccess(const GetBotDescResponse response);
        

        /**
         * Sent when the request fails
         *
         * Params:
         *    error:           The output receieved from the lambda call,
         *                     could be function error or an issue with the request
         *    request:         The AWS Lambda request object
         */
        virtual void OnGetAdminBotdescRequestError(const CloudGemFramework::Error error);
        
        /**
         * Sent when the request is a success
         *
         * Params:
         *    jsonOutput:       The output receieved from the lambda call
         *    request:          The AWS Lambda request object
         */
        
        virtual void OnDeleteAdminDeletebotRequestSuccess(const BotStatusResponse response);
        

        /**
         * Sent when the request fails
         *
         * Params:
         *    error:           The output receieved from the lambda call,
         *                     could be function error or an issue with the request
         *    request:         The AWS Lambda request object
         */
        virtual void OnDeleteAdminDeletebotRequestError(const CloudGemFramework::Error error);
        
        /**
         * Sent when the request is a success
         *
         * Params:
         *    jsonOutput:       The output receieved from the lambda call
         *    request:          The AWS Lambda request object
         */
        
        virtual void OnGetAdminBotstatusRequestSuccess(const BotStatusResponse response);
        

        /**
         * Sent when the request fails
         *
         * Params:
         *    error:           The output receieved from the lambda call,
         *                     could be function error or an issue with the request
         *    request:         The AWS Lambda request object
         */
        virtual void OnGetAdminBotstatusRequestError(const CloudGemFramework::Error error);
        
        /**
         * Sent when the request is a success
         *
         * Params:
         *    jsonOutput:       The output receieved from the lambda call
         *    request:          The AWS Lambda request object
         */
        
        virtual void OnGetAdminListbotsRequestSuccess(const GetListBotsResponse response);
        

        /**
         * Sent when the request fails
         *
         * Params:
         *    error:           The output receieved from the lambda call,
         *                     could be function error or an issue with the request
         *    request:         The AWS Lambda request object
         */
        virtual void OnGetAdminListbotsRequestError(const CloudGemFramework::Error error);
        
        /**
         * Sent when the request is a success
         *
         * Params:
         *    jsonOutput:       The output receieved from the lambda call
         *    request:          The AWS Lambda request object
         */
        
        virtual void OnPutAdminPublishbotRequestSuccess(const BotStatusResponse response);
        

        /**
         * Sent when the request fails
         *
         * Params:
         *    error:           The output receieved from the lambda call,
         *                     could be function error or an issue with the request
         *    request:         The AWS Lambda request object
         */
        virtual void OnPutAdminPublishbotRequestError(const CloudGemFramework::Error error);
        
        /**
         * Sent when the request is a success
         *
         * Params:
         *    jsonOutput:       The output receieved from the lambda call
         *    request:          The AWS Lambda request object
         */
        
        virtual void OnPostServicePostaudioRequestSuccess(const PostAudioResponse response);
        

        /**
         * Sent when the request fails
         *
         * Params:
         *    error:           The output receieved from the lambda call,
         *                     could be function error or an issue with the request
         *    request:         The AWS Lambda request object
         */
        virtual void OnPostServicePostaudioRequestError(const CloudGemFramework::Error error);
        
    };

    using CloudGemLexNotificationBus = AZ::EBus<CloudGemLexNotifications>;

    class BehaviorCloudGemLexNotificationBusHandler
        : public CloudGemLexNotificationBus::Handler, public AZ::BehaviorEBusHandler
    {
    public:
        AZ_EBUS_BEHAVIOR_BINDER(BehaviorCloudGemLexNotificationBusHandler, LmbrAWS_CodeGen_NotificationBus1_UUID, AZ::SystemAllocator
        
        , OnPostServicePosttextRequestSuccess
        , OnPostServicePosttextRequestError
        
        , OnGetServiceStatusRequestSuccess
        , OnGetServiceStatusRequestError
        
        , OnPutAdminBotdescRequestSuccess
        , OnPutAdminBotdescRequestError
        
        , OnGetAdminBotdescRequestSuccess
        , OnGetAdminBotdescRequestError
        
        , OnDeleteAdminDeletebotRequestSuccess
        , OnDeleteAdminDeletebotRequestError
        
        , OnGetAdminBotstatusRequestSuccess
        , OnGetAdminBotstatusRequestError
        
        , OnGetAdminListbotsRequestSuccess
        , OnGetAdminListbotsRequestError
        
        , OnPutAdminPublishbotRequestSuccess
        , OnPutAdminPublishbotRequestError
        
        , OnPostServicePostaudioRequestSuccess
        , OnPostServicePostaudioRequestError
        
        );
        
        
        void OnPostServicePosttextRequestSuccess(const PostAudioResponse response) override;
        
        void OnPostServicePosttextRequestError(const CloudGemFramework::Error error) override;
        
        
        void OnGetServiceStatusRequestSuccess(const ServiceStatus response) override;
        
        void OnGetServiceStatusRequestError(const CloudGemFramework::Error error) override;
        
        
        void OnPutAdminBotdescRequestSuccess(const BotStatusResponse response) override;
        
        void OnPutAdminBotdescRequestError(const CloudGemFramework::Error error) override;
        
        
        void OnGetAdminBotdescRequestSuccess(const GetBotDescResponse response) override;
        
        void OnGetAdminBotdescRequestError(const CloudGemFramework::Error error) override;
        
        
        void OnDeleteAdminDeletebotRequestSuccess(const BotStatusResponse response) override;
        
        void OnDeleteAdminDeletebotRequestError(const CloudGemFramework::Error error) override;
        
        
        void OnGetAdminBotstatusRequestSuccess(const BotStatusResponse response) override;
        
        void OnGetAdminBotstatusRequestError(const CloudGemFramework::Error error) override;
        
        
        void OnGetAdminListbotsRequestSuccess(const GetListBotsResponse response) override;
        
        void OnGetAdminListbotsRequestError(const CloudGemFramework::Error error) override;
        
        
        void OnPutAdminPublishbotRequestSuccess(const BotStatusResponse response) override;
        
        void OnPutAdminPublishbotRequestError(const CloudGemFramework::Error error) override;
        
        
        void OnPostServicePostaudioRequestSuccess(const PostAudioResponse response) override;
        
        void OnPostServicePostaudioRequestError(const CloudGemFramework::Error error) override;
        
    };
    class CloudGemLexResponseHandler;

    // Request bus for this component
    class CloudGemLexRequests
        : public AZ::ComponentBus
    {
    public:
        virtual ~CloudGemLexRequests() {}
        
        
        virtual void PostServicePosttext(const PostTextRequest& post_text, CloudGemLexResponseHandler* responseHandler);
        
        
        
        virtual void GetServiceStatus(CloudGemLexResponseHandler* responseHandler);
        
        
        
        virtual void PutAdminBotdesc(const PostBotDescRequest& bot_desc, CloudGemLexResponseHandler* responseHandler);
        
        
        
        virtual void GetAdminBotdesc(const AZStd::string& name, CloudGemLexResponseHandler* responseHandler);
        
        
        
        virtual void DeleteAdminDeletebot(const AZStd::string& name, CloudGemLexResponseHandler* responseHandler);
        
        
        
        virtual void GetAdminBotstatus(const AZStd::string& name, CloudGemLexResponseHandler* responseHandler);
        
        
        
        virtual void GetAdminListbots(const AZStd::string& next_token, CloudGemLexResponseHandler* responseHandler);
        
        
        
        virtual void PutAdminPublishbot(const AZStd::string& name, const AZStd::string& version, CloudGemLexResponseHandler* responseHandler);
        
        
        
        virtual void PostServicePostaudio(const PostAudioRequest& post_audio, CloudGemLexResponseHandler* responseHandler);
        
        
    };

    using CloudGemLexRequestBus = AZ::EBus<CloudGemLexRequests>;

    // This class is used as a parameter for all requests and throws the response on the CloudGemLexNotificationBus
    // Inherit from this to define custom behavior.
    class CloudGemLexResponseHandler
    {
    public:
        AZ_TYPE_INFO(CloudGemLexResponseHandler, LmbrAWS_CodeGen_ResponseHandler_UUID)
        AZ_CLASS_ALLOCATOR(CloudGemLexResponseHandler, AZ::SystemAllocator, 0)

        virtual ~CloudGemLexResponseHandler() {}
        
        virtual void HandlePostServicePosttextSuccess(PostServicePosttextRequestJob* job, AZ::EntityId entityId);
        virtual void HandlePostServicePosttextError(PostServicePosttextRequestJob* job, AZ::EntityId entityId);
        
        virtual void HandleGetServiceStatusSuccess(GetServiceStatusRequestJob* job, AZ::EntityId entityId);
        virtual void HandleGetServiceStatusError(GetServiceStatusRequestJob* job, AZ::EntityId entityId);
        
        virtual void HandlePutAdminBotdescSuccess(PutAdminBotdescRequestJob* job, AZ::EntityId entityId);
        virtual void HandlePutAdminBotdescError(PutAdminBotdescRequestJob* job, AZ::EntityId entityId);
        
        virtual void HandleGetAdminBotdescSuccess(GetAdminBotdescRequestJob* job, AZ::EntityId entityId);
        virtual void HandleGetAdminBotdescError(GetAdminBotdescRequestJob* job, AZ::EntityId entityId);
        
        virtual void HandleDeleteAdminDeletebotSuccess(DeleteAdminDeletebotRequestJob* job, AZ::EntityId entityId);
        virtual void HandleDeleteAdminDeletebotError(DeleteAdminDeletebotRequestJob* job, AZ::EntityId entityId);
        
        virtual void HandleGetAdminBotstatusSuccess(GetAdminBotstatusRequestJob* job, AZ::EntityId entityId);
        virtual void HandleGetAdminBotstatusError(GetAdminBotstatusRequestJob* job, AZ::EntityId entityId);
        
        virtual void HandleGetAdminListbotsSuccess(GetAdminListbotsRequestJob* job, AZ::EntityId entityId);
        virtual void HandleGetAdminListbotsError(GetAdminListbotsRequestJob* job, AZ::EntityId entityId);
        
        virtual void HandlePutAdminPublishbotSuccess(PutAdminPublishbotRequestJob* job, AZ::EntityId entityId);
        virtual void HandlePutAdminPublishbotError(PutAdminPublishbotRequestJob* job, AZ::EntityId entityId);
        
        virtual void HandlePostServicePostaudioSuccess(PostServicePostaudioRequestJob* job, AZ::EntityId entityId);
        virtual void HandlePostServicePostaudioError(PostServicePostaudioRequestJob* job, AZ::EntityId entityId);
        
    };

    class CloudGemLexClientComponent
        : public AZ::Component
        , public CloudGemLexRequestBus::Handler
    {
    public:
        AZ_COMPONENT(CloudGemLexClientComponent, LmbrAWS_CodeGen_Component_UUID);
        virtual ~CloudGemLexClientComponent() = default;

        AZStd::shared_ptr<CloudGemLexResponseHandler> m_defaultResponseHandler;

        void Init() override;

        void Activate() override;

        void Deactivate() override;

        static void Reflect(AZ::ReflectContext* reflection)
        {
            
            
            PostTextRequest::Reflect(reflection);
            
            
            
            PostAudioResponse::Reflect(reflection);
            
            
            
            ServiceStatus::Reflect(reflection);
            
            
            
            PostBotDescRequestPropertyDesc_file::Reflect(reflection);
            
            
            
            PostBotDescRequest::Reflect(reflection);
            
            
            
            BotStatusResponse::Reflect(reflection);
            
            
            
            GetBotDescResponsePropertyDesc_file::Reflect(reflection);
            
            
            
            GetBotDescResponse::Reflect(reflection);
            
            
            
            ListBotsEntry::Reflect(reflection);
            
            
            
            
            
            GetListBotsResponse::Reflect(reflection);
            
            
            
            PostAudioRequest::Reflect(reflection);
            
            

            AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
            if (serializeContext)
            {
                // we must include any fields we want to expose to the editor or lua in the serialize context
                serializeContext->Class<CloudGemLexClientComponent>()
                    ->Version(1);

                AZ::EditContext* editContext = serializeContext->GetEditContext();
                if (editContext)
                {
                    editContext->Class<CloudGemLexClientComponent>("CloudGemLexClientComponent", "CloudGemLex Component")
                        ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                            ->Attribute(AZ::Edit::Attributes::Category, "Cloud Canvas Gems")
                            ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC("Game"));
                }
            }

            AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
            if (behaviorContext)
            {
                behaviorContext->EBus<CloudGemLexRequestBus>("CloudGemLexRequestBus")
                    // one of these for each function
                    
                    ->Event("PostServicePosttext", &CloudGemLexRequestBus::Events::PostServicePosttext)
                    
                    ->Event("GetServiceStatus", &CloudGemLexRequestBus::Events::GetServiceStatus)
                    
                    ->Event("PutAdminBotdesc", &CloudGemLexRequestBus::Events::PutAdminBotdesc)
                    
                    ->Event("GetAdminBotdesc", &CloudGemLexRequestBus::Events::GetAdminBotdesc)
                    
                    ->Event("DeleteAdminDeletebot", &CloudGemLexRequestBus::Events::DeleteAdminDeletebot)
                    
                    ->Event("GetAdminBotstatus", &CloudGemLexRequestBus::Events::GetAdminBotstatus)
                    
                    ->Event("GetAdminListbots", &CloudGemLexRequestBus::Events::GetAdminListbots)
                    
                    ->Event("PutAdminPublishbot", &CloudGemLexRequestBus::Events::PutAdminPublishbot)
                    
                    ->Event("PostServicePostaudio", &CloudGemLexRequestBus::Events::PostServicePostaudio)
                    
                    ;
                behaviorContext->EBus<CloudGemLexNotificationBus>("CloudGemLexNotificationBus")
                    ->Handler<BehaviorCloudGemLexNotificationBusHandler>()
                ;
            }
        }

        // Functions from the swagger definitions
        
        
        void PostServicePosttext(const PostTextRequest& post_text, CloudGemLexResponseHandler* responseHandler) override;
        
        
        
        void GetServiceStatus(CloudGemLexResponseHandler* responseHandler) override;
        
        
        
        void PutAdminBotdesc(const PostBotDescRequest& bot_desc, CloudGemLexResponseHandler* responseHandler) override;
        
        
        
        void GetAdminBotdesc(const AZStd::string& name, CloudGemLexResponseHandler* responseHandler) override;
        
        
        
        void DeleteAdminDeletebot(const AZStd::string& name, CloudGemLexResponseHandler* responseHandler) override;
        
        
        
        void GetAdminBotstatus(const AZStd::string& name, CloudGemLexResponseHandler* responseHandler) override;
        
        
        
        void GetAdminListbots(const AZStd::string& next_token, CloudGemLexResponseHandler* responseHandler) override;
        
        
        
        void PutAdminPublishbot(const AZStd::string& name, const AZStd::string& version, CloudGemLexResponseHandler* responseHandler) override;
        
        
        
        void PostServicePostaudio(const PostAudioRequest& post_audio, CloudGemLexResponseHandler* responseHandler) override;
        
        
    };
} // ServiceAPI
} // CloudGemLex