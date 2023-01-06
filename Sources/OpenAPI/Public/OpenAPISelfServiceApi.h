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

#include "CoreMinimal.h"
#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

class OPENAPI_API OpenAPISelfServiceApi
{
public:
	OpenAPISelfServiceApi();
	~OpenAPISelfServiceApi();

	/* Sets the URL Endpoint.
	* Note: several fallback endpoints can be configured in request retry policies, see Request::SetShouldRetry */
	void SetURL(const FString& Url);

	/* Adds global header params to all requests */
	void AddHeaderParam(const FString& Key, const FString& Value);
	void ClearHeaderParams();

	/* Sets the retry manager to the user-defined retry manager. User must manage the lifetime of the retry manager.
	* If no retry manager is specified and a request needs retries, a default retry manager will be used.
	* See also: Request::SetShouldRetry */
	void SetHttpRetryManager(FHttpRetrySystem::FManager& RetryManager);
	FHttpRetrySystem::FManager& GetHttpRetryManager();

	class SelfServiceCheckAgeEligibilityRequest;
	class SelfServiceCheckAgeEligibilityResponse;
	class SelfServiceConsentRequest;
	class SelfServiceConsentResponse;
	class SelfServiceVerifyRequest;
	class SelfServiceVerifyResponse;
	
    DECLARE_DELEGATE_OneParam(FSelfServiceCheckAgeEligibilityDelegate, const SelfServiceCheckAgeEligibilityResponse&);
    DECLARE_DELEGATE_OneParam(FSelfServiceConsentDelegate, const SelfServiceConsentResponse&);
    DECLARE_DELEGATE_OneParam(FSelfServiceVerifyDelegate, const SelfServiceVerifyResponse&);
    
    FHttpRequestPtr SelfServiceCheckAgeEligibility(const SelfServiceCheckAgeEligibilityRequest& Request, const FSelfServiceCheckAgeEligibilityDelegate& Delegate = FSelfServiceCheckAgeEligibilityDelegate()) const;
    FHttpRequestPtr SelfServiceConsent(const SelfServiceConsentRequest& Request, const FSelfServiceConsentDelegate& Delegate = FSelfServiceConsentDelegate()) const;
    FHttpRequestPtr SelfServiceVerify(const SelfServiceVerifyRequest& Request, const FSelfServiceVerifyDelegate& Delegate = FSelfServiceVerifyDelegate()) const;
    
private:
    void OnSelfServiceCheckAgeEligibilityResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSelfServiceCheckAgeEligibilityDelegate Delegate) const;
    void OnSelfServiceConsentResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSelfServiceConsentDelegate Delegate) const;
    void OnSelfServiceVerifyResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSelfServiceVerifyDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
