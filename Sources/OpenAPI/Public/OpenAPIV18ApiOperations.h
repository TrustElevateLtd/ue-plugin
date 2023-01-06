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
#include "OpenAPIV18Api.h"

#include "OpenAPIGooglerpcStatus.h"
#include "OpenAPIVeripassConsentReceipt.h"

namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPIV18Api::V18CheckAdultDOBRequest : public Request
{
public:
    virtual ~V18CheckAdultDOBRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

};

class OPENAPI_API OpenAPIV18Api::V18CheckAdultDOBResponse : public Response
{
public:
    virtual ~V18CheckAdultDOBResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIVeripassConsentReceipt Content;
};

}
