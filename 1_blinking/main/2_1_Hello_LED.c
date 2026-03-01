#include "driver/gpio.h"
#include "esp_sleep.h"

#define LED_PIN 26

void app_main(void) {
  gpio_reset_pin(LED_PIN);
  gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
  bool led_state = false;
  esp_sleep_enable_timer_wakeup(500000);

  while (1) {
    led_state = !led_state;
    gpio_set_level(LED_PIN, led_state);

    esp_light_sleep_start();
  }
}
