// Copyright 2023 RT Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef PARAMETER_H_
#define PARAMETER_H_

#define TIRE_DIAMETER_INIT (24.890)
#define TREAD_WIDTH_INIT (29.870)

#define REF_SEN_R_INIT 460
#define REF_SEN_L_INIT 360

#define TH_SEN_R_INIT 160
#define TH_SEN_L_INIT 180
#define TH_SEN_FR_INIT 220
#define TH_SEN_FL_INIT 200

#define GOAL_X_INIT 12
#define GOAL_Y_INIT 10

#define WAITLOOP_SLED 10

#define CON_WALL_KP_INIT 0.100
#define SEARCH_ACCEL_LOW_INIT 1.0
#define SEARCH_ACCEL_INIT 1.300
#define SEARCH_ACCEL_HIGH_INIT 1.300
#define TURN_ACCEL_INIT 0.5

#define SEARCH_SPEED_LOW_INIT 100
#define SEARCH_SPEED_INIT 200
#define SEARCH_SPEED_HIGH_INIT 280
#define MAX_SPEED_INIT 380
#define MIN_SPEED 10

#define RL90_BEFORE_LOW_INIT 0
#define RL90_BEFORE_INIT 0
#define RL90_BEFORE_HIGH_INIT -2
#define RL90H_BEFORE_LOW_INIT 0
#define RL90H_BEFORE_INIT 0
#define RL90H_BEFORE_HIGH_INIT 0

#define RL90_OMEGA_LOW_INIT 0
#define RL90_OMEGA_INIT 0
#define RL90_OMEGA_HIGH_INIT -50
#define RL180_OMEGA_LOW_INIT 0
#define RL180_OMEGA_INIT -30
#define RL180_OMEGA_HIGH_INIT -100
#define RL90H_OMEGA_LOW_INIT 0
#define RL90H_OMEGA_INIT -100
#define RL90H_OMEGA_HIGH_INIT -100

#define RL90_AFTER_LOW_INIT 0
#define RL90_AFTER_INIT 0
#define RL90_AFTER_HIGH_INIT 4
#define RL180_AFTER_LOW_INIT 0
#define RL180_AFTER_INIT -5
#define RL180_AFTER_HIGH_INIT -5
#define RL90H_AFTER_LOW_INIT 0
#define RL90H_AFTER_INIT 0
#define RL90H_AFTER_HIGH_INIT 0

#define INC_FREQ 3000
#define DEC_FREQ 2000

#define BATT_MAX 4000
#define BATT_MIN 3250

#define HALF_SECTION 45
#define SECTION 90

#endif  // PARAMETER_H_