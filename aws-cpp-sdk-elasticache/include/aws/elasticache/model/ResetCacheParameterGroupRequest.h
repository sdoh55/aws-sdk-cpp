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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ParameterNameValue.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /*
    <p>Represents the input of a <i>ResetCacheParameterGroup</i> action.</p>
  */
  class AWS_ELASTICACHE_API ResetCacheParameterGroupRequest : public ElastiCacheRequest
  {
  public:
    ResetCacheParameterGroupRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name of the cache parameter group to reset.</p>
    */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /*
     <p>The name of the cache parameter group to reset.</p>
    */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /*
     <p>The name of the cache parameter group to reset.</p>
    */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /*
     <p>The name of the cache parameter group to reset.</p>
    */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /*
     <p>The name of the cache parameter group to reset.</p>
    */
    inline ResetCacheParameterGroupRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /*
     <p>The name of the cache parameter group to reset.</p>
    */
    inline ResetCacheParameterGroupRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(value); return *this;}

    /*
     <p>The name of the cache parameter group to reset.</p>
    */
    inline ResetCacheParameterGroupRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}

    /*
     <p>If <i>true</i>, all parameters in the cache parameter group will be reset to default values. If <i>false</i>, no such action occurs.</p> <p>Valid values: <code>true</code> | <code>false</code></p>
    */
    inline bool GetResetAllParameters() const{ return m_resetAllParameters; }

    /*
     <p>If <i>true</i>, all parameters in the cache parameter group will be reset to default values. If <i>false</i>, no such action occurs.</p> <p>Valid values: <code>true</code> | <code>false</code></p>
    */
    inline void SetResetAllParameters(bool value) { m_resetAllParametersHasBeenSet = true; m_resetAllParameters = value; }

    /*
     <p>If <i>true</i>, all parameters in the cache parameter group will be reset to default values. If <i>false</i>, no such action occurs.</p> <p>Valid values: <code>true</code> | <code>false</code></p>
    */
    inline ResetCacheParameterGroupRequest& WithResetAllParameters(bool value) { SetResetAllParameters(value); return *this;}

    /*
     <p>An array of parameter names to be reset. If you are not resetting the entire cache parameter group, you must specify at least one parameter name.</p>
    */
    inline const Aws::Vector<ParameterNameValue>& GetParameterNameValues() const{ return m_parameterNameValues; }

    /*
     <p>An array of parameter names to be reset. If you are not resetting the entire cache parameter group, you must specify at least one parameter name.</p>
    */
    inline void SetParameterNameValues(const Aws::Vector<ParameterNameValue>& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues = value; }

    /*
     <p>An array of parameter names to be reset. If you are not resetting the entire cache parameter group, you must specify at least one parameter name.</p>
    */
    inline void SetParameterNameValues(Aws::Vector<ParameterNameValue>&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues = value; }

    /*
     <p>An array of parameter names to be reset. If you are not resetting the entire cache parameter group, you must specify at least one parameter name.</p>
    */
    inline ResetCacheParameterGroupRequest& WithParameterNameValues(const Aws::Vector<ParameterNameValue>& value) { SetParameterNameValues(value); return *this;}

    /*
     <p>An array of parameter names to be reset. If you are not resetting the entire cache parameter group, you must specify at least one parameter name.</p>
    */
    inline ResetCacheParameterGroupRequest& WithParameterNameValues(Aws::Vector<ParameterNameValue>&& value) { SetParameterNameValues(value); return *this;}

    /*
     <p>An array of parameter names to be reset. If you are not resetting the entire cache parameter group, you must specify at least one parameter name.</p>
    */
    inline ResetCacheParameterGroupRequest& AddParameterNameValues(const ParameterNameValue& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues.push_back(value); return *this; }

    /*
     <p>An array of parameter names to be reset. If you are not resetting the entire cache parameter group, you must specify at least one parameter name.</p>
    */
    inline ResetCacheParameterGroupRequest& AddParameterNameValues(ParameterNameValue&& value) { m_parameterNameValuesHasBeenSet = true; m_parameterNameValues.push_back(value); return *this; }

  private:
    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet;
    bool m_resetAllParameters;
    bool m_resetAllParametersHasBeenSet;
    Aws::Vector<ParameterNameValue> m_parameterNameValues;
    bool m_parameterNameValuesHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
