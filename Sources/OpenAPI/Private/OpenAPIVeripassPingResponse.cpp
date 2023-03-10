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

#include "OpenAPIVeripassPingResponse.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIVeripassPingResponse::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Timestamp.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("timestamp")); WriteJsonValue(Writer, Timestamp.GetValue());
	}
	if (Version.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("version")); WriteJsonValue(Writer, Version.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIVeripassPingResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("timestamp"), Timestamp);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("version"), Version);

	return ParseSuccess;
}

}
