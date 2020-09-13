#include <stdio.h>
#include "math.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#define TAG "DICE"

int diceRole(){
  int random_number = esp_random();
  int positive_random_number = abs(random_number);
  positive_random_number = positive_random_number % 6;
  positive_random_number = positive_random_number + 1;  //makes this range from 1 to 6 from 0 to 5
  return positive_random_number;
}

void app_main(void)
{

  while (true)
  {
    vTaskDelay(1000 / portTICK_RATE_MS);
    ESP_LOGI(TAG, "in loop %d", diceRole());
  }
  
}
  