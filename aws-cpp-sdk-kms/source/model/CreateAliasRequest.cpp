/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/kms/model/CreateAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAliasRequest::CreateAliasRequest()
{
}

Aws::String CreateAliasRequest::SerializePayload() const
{
  JsonValue payload;

  payload.WithString("AliasName", m_aliasName);

  payload.WithString("TargetKeyId", m_targetKeyId);

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAliasRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.CreateAlias"));
  return std::move(headers);

}


