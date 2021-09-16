# clock-esp32

## 1. 介绍
esp32下的时钟模块。

## 2. 功能
- 读取本地微秒级时间
- 读取本地秒级时间

## 3. API
```c
// GetLocalTimeUs 获得当前时间.精度:us
uint64_t GetLocalTimeUs(void);

// GetLocalTimeSecond 获取当前时间.精度:s
uint32_t GetLocalTimeSecond(void);
```
