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
#include "OpenAPIHealthCheckApi.h"

#include "OpenAPIGooglerpcStatus.h"
#include "OpenAPIVeripassPingResponse.h"

namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPIHealthCheckApi::HealthCheckPingRequest : public Request
{
public:
    virtual ~HealthCheckPingRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

};

class OPENAPI_API OpenAPIHealthCheckApi::HealthCheckPingResponse : public Response
{
public:
    virtual ~HealthCheckPingResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIVeripassPingResponse Content;
};

}
