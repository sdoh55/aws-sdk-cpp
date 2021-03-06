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
#include <aws/s3/model/BucketVersioningStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Enabled_HASH = HashingUtils::HashString("Enabled");
static const int Suspended_HASH = HashingUtils::HashString("Suspended");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace BucketVersioningStatusMapper
{
BucketVersioningStatus GetBucketVersioningStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Enabled_HASH)
  {
    return BucketVersioningStatus::Enabled;
  }
  else if (hashCode == Suspended_HASH)
  {
    return BucketVersioningStatus::Suspended;
  }

  return BucketVersioningStatus::NOT_SET;
}

Aws::String GetNameForBucketVersioningStatus(BucketVersioningStatus value)
{
  switch(value)
  {
  case BucketVersioningStatus::Enabled:
    return "Enabled";
  case BucketVersioningStatus::Suspended:
    return "Suspended";
  default:
    return "";
  }
}

} // namespace BucketVersioningStatusMapper
} // namespace Model
} // namespace S3
} // namespace Aws
