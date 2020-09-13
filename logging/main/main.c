#include <stdio.h>
#include "esp_log.h"


void app_main(void)
{
  // printf("Hello world!\n");

  //This prints verbose because it is enabled by default in Menuconfig.
  ESP_LOGE("TAG 1", "This is an error");  
  ESP_LOGW("TAG 1", "This is a warning");
  ESP_LOGI("TAG 1", "This is a Information");
  ESP_LOGD("TAG 1", "This is a debug");
  ESP_LOGV("TAG 1", "This is a verbose");

  //We can enable/disable in code instead of menuconfig. 
  //The code below only prints until "info". "verbose" is not printed as it is disabled by esp_log_level_set() function. 
  esp_log_level_set("TAG 2", ESP_LOG_INFO);
  ESP_LOGE("TAG 2", "This is an error");  
  ESP_LOGW("TAG 2", "This is a warning");
  ESP_LOGI("TAG 2", "This is a Information");
  ESP_LOGD("TAG 2", "This is a debug");
  ESP_LOGV("TAG 2", "This is a verbose");

}
