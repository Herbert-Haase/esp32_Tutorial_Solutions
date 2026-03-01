#include "driver/ledc.h"
#include "esp_err.h"
#include <assert.h>

void pwm_init(void)
{
    ledc_timer_config_t timer = {
        .speed_mode       = LEDC_LOW_SPEED_MODE,
        .timer_num        = LEDC_TIMER_0,
        .duty_resolution  = LEDC_TIMER_13_BIT,
        .freq_hz          = 1000,
        .clk_cfg          = LEDC_AUTO_CLK
    };
    esp_err_t err = ledc_timer_config(&timer);
    assert(err == ESP_OK);

    ledc_channel_config_t channel = {
        .gpio_num   = GPIO_NUM_26,
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .channel    = LEDC_CHANNEL_0,
        .timer_sel  = LEDC_TIMER_0,
        .duty       = 0,
        .hpoint     = 0
    };
    err = ledc_channel_config(&channel);
    assert(err == ESP_OK);
}

void fade_init(void)
{
    ledc_fade_func_install(0);
}


