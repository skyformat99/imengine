/*
 *  Copyright (c) 2016, https://github.com/nebula-im/imengine
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

#ifndef DAL_FILE_PART_DO_H_
#define DAL_FILE_PART_DO_H_

#include "dal/base_dal.h"

// users表
struct FilePartDO {
  // DO成员
};

using FilePartDOPtr = std::shared_ptr<FilePartDO>;
using FilePartDOList = std::list<FilePartDOPtr>;

#endif
