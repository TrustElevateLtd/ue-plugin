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

#include "OpenAPIVpcAuthResponse.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIVpcAuthResponse::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Token.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("token")); WriteJsonValue(Writer, Token.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIVpcAuthResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("token"), Token);

	return ParseSuccess;
}

}
