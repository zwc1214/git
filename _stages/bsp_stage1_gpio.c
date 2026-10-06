#include "bsp.h"
#include "main.h"

volatile uint32_t tick = 0U;

void Tasks_Init(void)
{
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
}
