/*
 *  Copyright (c) 2016, https://github.com/nebula-im
 *  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// TODO(@benqi): 使用zrpc-code-gen代码生成工具自动生成

#ifndef	MESSENGER_ZRPC_BOTS_SERVICE_H_
#define	MESSENGER_ZRPC_BOTS_SERVICE_H_

#include "base/base_zrpc_service.h"
#include "proto/mtproto/core/mtproto_schema.h"

class ZRpcBotsService : public BaseZRpcService {
public:
  virtual ~ZRpcBotsService() = default;

  // bots.answerWebhookJSONQuery#e6213f4d query_id:long data:DataJSON = Bool;
  virtual int bots_answerWebhookJSONQuery(const mtproto::TL_bots_answerWebhookJSONQuery& request, std::shared_ptr<mtproto::Bool>& response);
  
  // bots.sendCustomRequest#aa2769ed custom_method:string params:DataJSON = DataJSON;
  virtual int bots_sendCustomRequest(const mtproto::TL_bots_sendCustomRequest& request, std::shared_ptr<mtproto::DataJSON>& response);
};

#endif

