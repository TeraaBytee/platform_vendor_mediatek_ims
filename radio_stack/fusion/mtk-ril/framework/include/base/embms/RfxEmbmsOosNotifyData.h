/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef RFX_EMBMS_OOSNOTIFY_DATA__H
#define RFX_EMBMS_OOSNOTIFY_DATA__H

#include "RfxBaseData.h"
#include <telephony/mtk_ril.h>

class RfxEmbmsOosNotifyData : public RfxBaseData {
    RFX_DECLARE_DATA_CLASS(RfxEmbmsOosNotifyData);

    public:
        RfxEmbmsOosNotifyData(RIL_EMBMS_OosNotify* data, int length);
    private:
        void copyData(RIL_EMBMS_OosNotify *data, int length);
};
#endif /*RFX_EMBMS_OOSNOTIFY_DATA__H*/