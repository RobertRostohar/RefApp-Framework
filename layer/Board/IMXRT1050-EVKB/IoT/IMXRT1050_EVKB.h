/*---------------------------------------------------------------------------
 * Copyright (c) 2023 Arm Limited (or its affiliates).
 * All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#ifndef IMXRT1050_EVKB_H_
#define IMXRT1050_EVKB_H_

#include "Driver_USART.h"

// B-U585I-IOT02A Arduino CMSIS Driver instances
#define ARDUINO_UNO_UART    3

// CMSIS Drivers
extern ARM_DRIVER_USART Driver_USART3;

#endif /* IMXRT1050_EVKB_H_ */
