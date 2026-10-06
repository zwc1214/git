# 电控第一次作业：STM32F103C8Tx

基于 STM32CubeMX 和 CMake 的 STM32F103C8Tx 工程。业务代码位于 `Tasks/src/bsp.c`。

## 当前程序

- 上电后将 PC13 拉低，点亮板载低电平有效 LED。
- TIM2 更新中断每 1 ms 增加一次 `tick`。
- 当前 `bsp.c` 保留独立看门狗复位演示，不在定时器回调中喂狗。
- `_stages` 保存任务一、任务二和喂狗/不喂狗阶段的源码版本；实际构建使用 `Tasks/src/bsp.c`。

## 构建

需要安装 ARM GNU Toolchain、CMake 和 Ninja，并确保命令可在终端中使用。用 VS Code 打开仓库后，选择 `Debug` 配置预设并构建 `Debug` 构建预设。

## 工程目录

- `Core`：CubeMX 生成的初始化代码
- `Drivers`：构建所需的 STM32 HAL 和 CMSIS 文件
- `Tasks`：作业业务代码
- `cmake`：CMake 工具链和 CubeMX 构建设置
- `STM32_Homework.ioc`：CubeMX 配置
