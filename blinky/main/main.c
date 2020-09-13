#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#define PIN 2
#define TAG "LOG"


void app_main(void)
{
  // printf("Hello world!\n");
  gpio_pad_select_gpio(PIN);
  gpio_set_direction(PIN, GPIO_MODE_OUTPUT);
  int isOn = 0;
  while (true)
  {
    isOn = !isOn;
    if (isOn)
    {
      ESP_LOGI(TAG, "LED ON");
    } else
    {
      ESP_LOGI(TAG, "LED OFF");
    }   
    gpio_set_level(PIN, isOn);
    vTaskDelay(1000 / portTICK_RATE_MS);
  }
  
}
