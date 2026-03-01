#include "freertos/FreeRTOS.h"
#include "freertos/projdefs.h"
#include <stdio.h>
QueueHandle_t q;
uint32_t count = 0;

void producer(void *arg) {
  while (1) {
    xQueueSendToBack(q, &count, 2);
    count++;
    vTaskDelay(1);
  }
}

void consumer(void *arg) {
  while (1) {
    uint32_t data;
    xQueueReceive(q, &data, 20);
  }
}
