﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshiftserverless/model/GetCredentialsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCredentialsResult::GetCredentialsResult()
{
}

GetCredentialsResult::GetCredentialsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCredentialsResult& GetCredentialsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dbPassword"))
  {
    m_dbPassword = jsonValue.GetString("dbPassword");

  }

  if(jsonValue.ValueExists("dbUser"))
  {
    m_dbUser = jsonValue.GetString("dbUser");

  }

  if(jsonValue.ValueExists("expiration"))
  {
    m_expiration = jsonValue.GetDouble("expiration");

  }

  if(jsonValue.ValueExists("nextRefreshTime"))
  {
    m_nextRefreshTime = jsonValue.GetDouble("nextRefreshTime");

  }



  return *this;
}
