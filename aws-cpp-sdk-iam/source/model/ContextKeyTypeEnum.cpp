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
#include <aws/iam/model/ContextKeyTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int string_HASH = HashingUtils::HashString("string");
static const int stringList_HASH = HashingUtils::HashString("stringList");
static const int numeric_HASH = HashingUtils::HashString("numeric");
static const int numericList_HASH = HashingUtils::HashString("numericList");
static const int boolean_HASH = HashingUtils::HashString("boolean");
static const int booleanList_HASH = HashingUtils::HashString("booleanList");
static const int ip_HASH = HashingUtils::HashString("ip");
static const int ipList_HASH = HashingUtils::HashString("ipList");
static const int binary_HASH = HashingUtils::HashString("binary");
static const int binaryList_HASH = HashingUtils::HashString("binaryList");

namespace Aws
{
namespace IAM
{
namespace Model
{
namespace ContextKeyTypeEnumMapper
{
ContextKeyTypeEnum GetContextKeyTypeEnumForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == string_HASH)
  {
    return ContextKeyTypeEnum::string;
  }
  else if (hashCode == stringList_HASH)
  {
    return ContextKeyTypeEnum::stringList;
  }
  else if (hashCode == numeric_HASH)
  {
    return ContextKeyTypeEnum::numeric;
  }
  else if (hashCode == numericList_HASH)
  {
    return ContextKeyTypeEnum::numericList;
  }
  else if (hashCode == boolean_HASH)
  {
    return ContextKeyTypeEnum::boolean;
  }
  else if (hashCode == booleanList_HASH)
  {
    return ContextKeyTypeEnum::booleanList;
  }
  else if (hashCode == ip_HASH)
  {
    return ContextKeyTypeEnum::ip;
  }
  else if (hashCode == ipList_HASH)
  {
    return ContextKeyTypeEnum::ipList;
  }
  else if (hashCode == binary_HASH)
  {
    return ContextKeyTypeEnum::binary;
  }
  else if (hashCode == binaryList_HASH)
  {
    return ContextKeyTypeEnum::binaryList;
  }

  return ContextKeyTypeEnum::NOT_SET;
}

Aws::String GetNameForContextKeyTypeEnum(ContextKeyTypeEnum value)
{
  switch(value)
  {
  case ContextKeyTypeEnum::string:
    return "string";
  case ContextKeyTypeEnum::stringList:
    return "stringList";
  case ContextKeyTypeEnum::numeric:
    return "numeric";
  case ContextKeyTypeEnum::numericList:
    return "numericList";
  case ContextKeyTypeEnum::boolean:
    return "boolean";
  case ContextKeyTypeEnum::booleanList:
    return "booleanList";
  case ContextKeyTypeEnum::ip:
    return "ip";
  case ContextKeyTypeEnum::ipList:
    return "ipList";
  case ContextKeyTypeEnum::binary:
    return "binary";
  case ContextKeyTypeEnum::binaryList:
    return "binaryList";
  default:
    return "";
  }
}

} // namespace ContextKeyTypeEnumMapper
} // namespace Model
} // namespace IAM
} // namespace Aws
