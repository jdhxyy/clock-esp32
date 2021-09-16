// Copyright 2021-2021 The jdh99 Authors. All rights reserved.
// ʱ��ģ��
// Authors: jdh99 <jdh821@163.com>

#ifndef CLOCK_H
#define CLOCK_H

#include <stdint.h>

// GetLocalTimeUs ��õ�ǰʱ��.����:us
uint64_t GetLocalTimeUs(void);

// GetLocalTimeSecond ��ȡ��ǰʱ��.����:s
uint32_t GetLocalTimeSecond(void);

#endif
