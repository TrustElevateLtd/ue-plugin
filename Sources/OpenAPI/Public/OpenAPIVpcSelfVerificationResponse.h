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

namespace OpenAPI
{

/*
 * OpenAPIVpcSelfVerificationResponse
 *
 * 
 */
class OPENAPI_API OpenAPIVpcSelfVerificationResponse : public Model
{
public:
    virtual ~OpenAPIVpcSelfVerificationResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<bool> ActivationRequired;
	TOptional<bool> ActivationFailed;
	TOptional<FString> Token;
	TOptional<FString> Uid;
};

}
