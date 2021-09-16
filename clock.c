// Copyright 2021-2021 The jdh99 Authors. All rights reserved.
// 时钟模块
// Authors: jdh99 <jdh821@163.com>

#include "clock.h"

#include "esp_timer.h"

// GetLocalTimeUs 获得当前时间.精度:us
uint64_t GetLocalTimeUs(void) {
    return (uint64_t)esp_timer_get_time();
}

// GetLocalTimeSecond 获取当前时间.精度:s
uint32_t GetLocalTimeSecond(void) {
    return (uint32_t)(GetLocalTimeUs() / 1000000);
}
