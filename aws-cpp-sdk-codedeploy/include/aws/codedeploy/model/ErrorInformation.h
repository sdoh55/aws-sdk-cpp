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
#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/ErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{
  /*
    <p>Information about a deployment error.</p>
  */
  class AWS_CODEDEPLOY_API ErrorInformation
  {
  public:
    ErrorInformation();
    ErrorInformation(const Aws::Utils::Json::JsonValue& jsonValue);
    ErrorInformation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The error code:</p> <ul> <li>APPLICATION_MISSING: The application was missing. Note that this error code will most likely be raised if the application is deleted after the deployment is created but before it starts.</li> <li>DEPLOYMENT_GROUP_MISSING: The deployment group was missing. Note that this error code will most likely be raised if the deployment group is deleted after the deployment is created but before it starts.</li> <li>HEALTH_CONSTRAINTS: The deployment failed on too many instances to be able to successfully deploy within the specified instance health constraints.</li> <li>HEALTH_CONSTRAINTS_INVALID: The revision can never successfully deploy within the instance health constraints as specified.</li> <li>IAM_ROLE_MISSING: The service role cannot be accessed.</li> <li>IAM_ROLE_PERMISSIONS: The service role does not have the correct permissions.</li> <li>INTERNAL_ERROR: There was an internal error.</li> <li>NO_EC2_SUBSCRIPTION: The calling account is not subscribed to the Amazon EC2 service.</li> <li>NO_INSTANCES: No instances were specified, or no instances can be found.</li> <li>OVER_MAX_INSTANCES: The maximum number of instances was exceeded.</li> <li>THROTTLED: The operation was throttled because the calling account exceeded the throttling limits of one or more AWS services.</li> <li>TIMEOUT: The deployment has timed out.</li> <li>REVISION_MISSING: The revision ID was missing. Note that this error code will most likely be raised if the revision is deleted after the deployment is created but before it starts.</li> </ul>
    */
    inline const ErrorCode& GetCode() const{ return m_code; }

    /*
     <p>The error code:</p> <ul> <li>APPLICATION_MISSING: The application was missing. Note that this error code will most likely be raised if the application is deleted after the deployment is created but before it starts.</li> <li>DEPLOYMENT_GROUP_MISSING: The deployment group was missing. Note that this error code will most likely be raised if the deployment group is deleted after the deployment is created but before it starts.</li> <li>HEALTH_CONSTRAINTS: The deployment failed on too many instances to be able to successfully deploy within the specified instance health constraints.</li> <li>HEALTH_CONSTRAINTS_INVALID: The revision can never successfully deploy within the instance health constraints as specified.</li> <li>IAM_ROLE_MISSING: The service role cannot be accessed.</li> <li>IAM_ROLE_PERMISSIONS: The service role does not have the correct permissions.</li> <li>INTERNAL_ERROR: There was an internal error.</li> <li>NO_EC2_SUBSCRIPTION: The calling account is not subscribed to the Amazon EC2 service.</li> <li>NO_INSTANCES: No instances were specified, or no instances can be found.</li> <li>OVER_MAX_INSTANCES: The maximum number of instances was exceeded.</li> <li>THROTTLED: The operation was throttled because the calling account exceeded the throttling limits of one or more AWS services.</li> <li>TIMEOUT: The deployment has timed out.</li> <li>REVISION_MISSING: The revision ID was missing. Note that this error code will most likely be raised if the revision is deleted after the deployment is created but before it starts.</li> </ul>
    */
    inline void SetCode(const ErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /*
     <p>The error code:</p> <ul> <li>APPLICATION_MISSING: The application was missing. Note that this error code will most likely be raised if the application is deleted after the deployment is created but before it starts.</li> <li>DEPLOYMENT_GROUP_MISSING: The deployment group was missing. Note that this error code will most likely be raised if the deployment group is deleted after the deployment is created but before it starts.</li> <li>HEALTH_CONSTRAINTS: The deployment failed on too many instances to be able to successfully deploy within the specified instance health constraints.</li> <li>HEALTH_CONSTRAINTS_INVALID: The revision can never successfully deploy within the instance health constraints as specified.</li> <li>IAM_ROLE_MISSING: The service role cannot be accessed.</li> <li>IAM_ROLE_PERMISSIONS: The service role does not have the correct permissions.</li> <li>INTERNAL_ERROR: There was an internal error.</li> <li>NO_EC2_SUBSCRIPTION: The calling account is not subscribed to the Amazon EC2 service.</li> <li>NO_INSTANCES: No instances were specified, or no instances can be found.</li> <li>OVER_MAX_INSTANCES: The maximum number of instances was exceeded.</li> <li>THROTTLED: The operation was throttled because the calling account exceeded the throttling limits of one or more AWS services.</li> <li>TIMEOUT: The deployment has timed out.</li> <li>REVISION_MISSING: The revision ID was missing. Note that this error code will most likely be raised if the revision is deleted after the deployment is created but before it starts.</li> </ul>
    */
    inline void SetCode(ErrorCode&& value) { m_codeHasBeenSet = true; m_code = value; }

    /*
     <p>The error code:</p> <ul> <li>APPLICATION_MISSING: The application was missing. Note that this error code will most likely be raised if the application is deleted after the deployment is created but before it starts.</li> <li>DEPLOYMENT_GROUP_MISSING: The deployment group was missing. Note that this error code will most likely be raised if the deployment group is deleted after the deployment is created but before it starts.</li> <li>HEALTH_CONSTRAINTS: The deployment failed on too many instances to be able to successfully deploy within the specified instance health constraints.</li> <li>HEALTH_CONSTRAINTS_INVALID: The revision can never successfully deploy within the instance health constraints as specified.</li> <li>IAM_ROLE_MISSING: The service role cannot be accessed.</li> <li>IAM_ROLE_PERMISSIONS: The service role does not have the correct permissions.</li> <li>INTERNAL_ERROR: There was an internal error.</li> <li>NO_EC2_SUBSCRIPTION: The calling account is not subscribed to the Amazon EC2 service.</li> <li>NO_INSTANCES: No instances were specified, or no instances can be found.</li> <li>OVER_MAX_INSTANCES: The maximum number of instances was exceeded.</li> <li>THROTTLED: The operation was throttled because the calling account exceeded the throttling limits of one or more AWS services.</li> <li>TIMEOUT: The deployment has timed out.</li> <li>REVISION_MISSING: The revision ID was missing. Note that this error code will most likely be raised if the revision is deleted after the deployment is created but before it starts.</li> </ul>
    */
    inline ErrorInformation& WithCode(const ErrorCode& value) { SetCode(value); return *this;}

    /*
     <p>The error code:</p> <ul> <li>APPLICATION_MISSING: The application was missing. Note that this error code will most likely be raised if the application is deleted after the deployment is created but before it starts.</li> <li>DEPLOYMENT_GROUP_MISSING: The deployment group was missing. Note that this error code will most likely be raised if the deployment group is deleted after the deployment is created but before it starts.</li> <li>HEALTH_CONSTRAINTS: The deployment failed on too many instances to be able to successfully deploy within the specified instance health constraints.</li> <li>HEALTH_CONSTRAINTS_INVALID: The revision can never successfully deploy within the instance health constraints as specified.</li> <li>IAM_ROLE_MISSING: The service role cannot be accessed.</li> <li>IAM_ROLE_PERMISSIONS: The service role does not have the correct permissions.</li> <li>INTERNAL_ERROR: There was an internal error.</li> <li>NO_EC2_SUBSCRIPTION: The calling account is not subscribed to the Amazon EC2 service.</li> <li>NO_INSTANCES: No instances were specified, or no instances can be found.</li> <li>OVER_MAX_INSTANCES: The maximum number of instances was exceeded.</li> <li>THROTTLED: The operation was throttled because the calling account exceeded the throttling limits of one or more AWS services.</li> <li>TIMEOUT: The deployment has timed out.</li> <li>REVISION_MISSING: The revision ID was missing. Note that this error code will most likely be raised if the revision is deleted after the deployment is created but before it starts.</li> </ul>
    */
    inline ErrorInformation& WithCode(ErrorCode&& value) { SetCode(value); return *this;}

    /*
     <p>An accompanying error message.</p>
    */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /*
     <p>An accompanying error message.</p>
    */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /*
     <p>An accompanying error message.</p>
    */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /*
     <p>An accompanying error message.</p>
    */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /*
     <p>An accompanying error message.</p>
    */
    inline ErrorInformation& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /*
     <p>An accompanying error message.</p>
    */
    inline ErrorInformation& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /*
     <p>An accompanying error message.</p>
    */
    inline ErrorInformation& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:
    ErrorCode m_code;
    bool m_codeHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
