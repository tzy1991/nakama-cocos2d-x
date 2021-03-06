/*
 * Copyright 2019 The Nakama Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
// Nakama helper for Cocos2d-x
//

#pragma once

#include "nakama-cpp/Nakama.h"

class NCocosHelper
{
public:
    static void init(Nakama::NLogLevel logLevel = Nakama::NLogLevel::Debug);

    static Nakama::NClientPtr createDefaultClient(const Nakama::NClientParameters& parameters);

    static Nakama::NRtClientPtr createRtClient(const Nakama::NClientPtr& client, int32_t port = Nakama::DEFAULT_PORT);

    static Nakama::NRtClientPtr createRtClient(const Nakama::NClientPtr& client, const Nakama::RtClientParameters& parameters);
};
