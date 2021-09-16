// Copyright 2021-2021 The jdh99 Authors. All rights reserved.
// 时钟模块
// Authors: jdh99 <jdh821@163.com>

#ifndef CLOCK_H
#define CLOCK_H

#include <stdint.h>

// GetLocalTimeUs 获得当前时间.精度:us
uint64_t GetLocalTimeUs(void);

// GetLocalTimeSecond 获取当前时间.精度:s
uint32_t GetLocalTimeSecond(void);

#endif
