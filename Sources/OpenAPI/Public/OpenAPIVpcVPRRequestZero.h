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
#include "OpenAPIVeripassG1Claim.h"

namespace OpenAPI
{

/*
 * OpenAPIVpcVPRRequestZero
 *
 * 
 */
class OPENAPI_API OpenAPIVpcVPRRequestZero : public Model
{
public:
    virtual ~OpenAPIVpcVPRRequestZero() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<OpenAPIVeripassG1Claim> Claim;
};

}
