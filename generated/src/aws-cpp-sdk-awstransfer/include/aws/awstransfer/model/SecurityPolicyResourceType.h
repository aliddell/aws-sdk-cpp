﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class SecurityPolicyResourceType
  {
    NOT_SET,
    SERVER,
    CONNECTOR
  };

namespace SecurityPolicyResourceTypeMapper
{
AWS_TRANSFER_API SecurityPolicyResourceType GetSecurityPolicyResourceTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForSecurityPolicyResourceType(SecurityPolicyResourceType value);
} // namespace SecurityPolicyResourceTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
