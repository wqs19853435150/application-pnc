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
 * @file remote_control_commmand_demo_component.h
 *****************************************************************************/

#pragma once
#include <memory>

#include "cyber/cyber.h"
#include "cyber/component/component.h"
#include "remote_control_commmand_demo/proto/remote_control_commmand_demo.pb.h"

namespace apollo {

class RemoteControlCommmandDemo final
  : public cyber::Component<apollo::RemoteControlCommmandDemoMsg> {
 public:
  bool Init() override;
  bool Proc(const std::shared_ptr<apollo::RemoteControlCommmandDemoMsg>& msg0) override;

 private:
  apollo::RemoteControlCommmandDemoConfig config_;
};

CYBER_REGISTER_COMPONENT(RemoteControlCommmandDemo)

} // namespace apollo
