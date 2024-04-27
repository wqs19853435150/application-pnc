/******************************************************************************
 * Copyright 2023 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/******************************************************************************
 * @file remote_control_commmand_demo_component.cc
 *****************************************************************************/

#include "remote_control_commmand_demo/remote_control_commmand_demo_component.h"

namespace apollo {

bool RemoteControlCommmandDemo::Init() {

  ACHECK(ComponentBase::GetProtoConfig(&config_))
      << "failed to load remote_control_commmand_demo config file "
      << ComponentBase::ConfigFilePath();

  AINFO << "Load config succedded.\n" << config_.DebugString();

  AINFO << "Init RemoteControlCommmandDemo succedded.";
  return true;
}

bool RemoteControlCommmandDemo::Proc(const std::shared_ptr<apollo::RemoteControlCommmandDemoMsg>& msg0) {
  AINFO << "message recieved.\n" << msg0->DebugString();
  return true;
}

} // namespace apollo