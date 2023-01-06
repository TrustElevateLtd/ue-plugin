/**
 * prodapi.proto
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: version not set
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIVPCApi.h"

#include "OpenAPIGooglerpcStatus.h"
#include "OpenAPIVeripassConsentReceipt.h"
#include "OpenAPIVpcConsentRequest.h"
#include "OpenAPIVpcConsentRequestZero.h"

namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPIVPCApi::VPCCreateConsentRequest : public Request
{
public:
    virtual ~VPCCreateConsentRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	OpenAPIVpcConsentRequest Body;
};

class OPENAPI_API OpenAPIVPCApi::VPCCreateConsentResponse : public Response
{
public:
    virtual ~VPCCreateConsentResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIVeripassConsentReceipt Content;
};

/* Deprecated, use CreateConsent

*/
class OPENAPI_API OpenAPIVPCApi::VPCGetConsentRequest : public Request
{
public:
    virtual ~VPCGetConsentRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	TOptional<FString> Contact;
	TOptional<int32> Ttl;
	TOptional<FString> Dob;
	TOptional<TArray<FString>> Subject;
	TOptional<FString> Name;
	TOptional<FString> VisitUrl;
	TOptional<FString> CallbackUrl;
	TOptional<FString> InfoUrl;
	TOptional<FString> CustomId;
	TOptional<FString> CustomerId;
};

class OPENAPI_API OpenAPIVPCApi::VPCGetConsentResponse : public Response
{
public:
    virtual ~VPCGetConsentResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIVeripassConsentReceipt Content;
};

/* 

*/
class OPENAPI_API OpenAPIVPCApi::VPCGetConsentZeroRequest : public Request
{
public:
    virtual ~VPCGetConsentZeroRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	OpenAPIVpcConsentRequestZero Body;
};

class OPENAPI_API OpenAPIVPCApi::VPCGetConsentZeroResponse : public Response
{
public:
    virtual ~VPCGetConsentZeroResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIVeripassConsentReceipt Content;
};

}