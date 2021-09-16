// Copyright 2021-2021 The jdh99 Authors. All rights reserved.
// ʱ��ģ��
// Authors: jdh99 <jdh821@163.com>

#include "clock.h"

#include "esp_timer.h"

// GetLocalTimeUs ��õ�ǰʱ��.����:us
uint64_t GetLocalTimeUs(void) {
    return (uint64_t)esp_timer_get_time();
}

// GetLocalTimeSecond ��ȡ��ǰʱ��.����:s
uint32_t GetLocalTimeSecond(void) {
    return (uint32_t)(GetLocalTimeUs() / 1000000);
}
