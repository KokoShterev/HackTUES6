#include "app_touchgfx.h"

void touchgfx_init(void);
void touchgfx_taskEntry(void);

void MX_TouchGFX_Init(void)
{
  touchgfx_init();
}

void MX_TouchGFX_Process(void)
{
  touchgfx_taskEntry();
}

void TouchGFX_Task(void *argument)
{
  touchgfx_taskEntry();
}
