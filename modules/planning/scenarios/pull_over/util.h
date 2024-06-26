/******************************************************************************
 * Copyright 2019 The Apollo Authors. All Rights Reserved.
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

#pragma once

namespace apollo {
namespace common {
namespace math {
class Vec2d;
}  // namespace math
}  // namespace common
}  // namespace apollo

namespace apollo {
namespace common {
class VehicleStateProvider;
class PathPoint;
}  // namespace common
}  // namespace apollo

namespace apollo {
namespace planning {

class ScenarioPullOverConfig;
class PlanningContext;
class ReferenceLineInfo;

enum class PullOverState {
  UNKNOWN = 0,
  APPROACHING = 1,
  PARK_COMPLETE = 2,
  PARK_FAIL = 3,
  PASS_DESTINATION = 4,
};

PullOverState CheckADCPullOver(
    const common::VehicleStateProvider* vehicle_state_provider,
    const ReferenceLineInfo& reference_line_info,
    const ScenarioPullOverConfig& scenario_config,
    const PlanningContext* planning_context);

PullOverState CheckADCPullOverPathPoint(
    const ReferenceLineInfo& reference_line_info,
    const ScenarioPullOverConfig& scenario_config,
    const common::PathPoint& path_point,
    const PlanningContext* planning_context);

bool CheckPullOverPositionBySL(const ReferenceLineInfo& reference_line_info,
                               const ScenarioPullOverConfig& scenario_config,
                               const common::math::Vec2d& adc_position,
                               const double adc_theta,
                               const common::math::Vec2d& target_position,
                               const double target_theta, const bool check_s);

}  // namespace planning
}  // namespace apollo
