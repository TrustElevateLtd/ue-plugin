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

class OPENAPI_API OpenAPIVPRApi
{
public:
	OpenAPIVPRApi();
	~OpenAPIVPRApi();

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

	class VPRGetVPRRequest;
	class VPRGetVPRResponse;
	class VPRGetVPRZeroRequest;
	class VPRGetVPRZeroResponse;
	
    DECLARE_DELEGATE_OneParam(FVPRGetVPRDelegate, const VPRGetVPRResponse&);
    DECLARE_DELEGATE_OneParam(FVPRGetVPRZeroDelegate, const VPRGetVPRZeroResponse&);
    
    FHttpRequestPtr VPRGetVPR(const VPRGetVPRRequest& Request, const FVPRGetVPRDelegate& Delegate = FVPRGetVPRDelegate()) const;
    FHttpRequestPtr VPRGetVPRZero(const VPRGetVPRZeroRequest& Request, const FVPRGetVPRZeroDelegate& Delegate = FVPRGetVPRZeroDelegate()) const;
    
private:
    void OnVPRGetVPRResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FVPRGetVPRDelegate Delegate) const;
    void OnVPRGetVPRZeroResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FVPRGetVPRZeroDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}