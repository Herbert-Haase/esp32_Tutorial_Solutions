#include "driver/gpio.h"
#include "esp_task_wdt.h"
#include "freertos/FreeRTOS.h"
#include <stdio.h>

static portMUX_TYPE my_spinlock = portMUX_INITIALIZER_UNLOCKED;
static int counter = 0;

void task(void *arg) {
  for (int i = 0; i < 1000; i++) {
    taskENTER_CRITICAL(&my_spinlock);
    counter++;
    taskEXIT_CRITICAL(&my_spinlock);
  }
}

void app_main(void) {

  TaskHandle_t th1;
  xTaskCreatePinnedToCore(task, "task1", 2048, NULL, 0, &th1, 1);
  TaskHandle_t th2;
  xTaskCreatePinnedToCore(task, "task2", 2048, NULL, 0, &th2, 1);
}
