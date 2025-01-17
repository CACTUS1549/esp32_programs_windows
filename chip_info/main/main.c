#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_spi_flash.h"



void app_main(void)
{
  printf("Hello world!\n");

  /*  Print chip information  */
  esp_chip_info_t chip_info;
  esp_chip_info(&chip_info);
  printf("This is ESP32 chip with %d CPU cores, WiFi%s%s, ",
  chip_info.cores,
  (chip_info.features & CHIP_FEATURE_BT) ? "/BT" : "",
  (chip_info.features & CHIP_FEATURE_BLE) ? "/BLE" : "");

  printf("Silicon revision %d, ", chip_info.revision);

  printf("%dMB %s flash\n", spi_flash_get_chip_size() / (1024 * 1024),
  (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embedded" : "external");

  printf("idf version is %s\n", esp_get_idf_version());

  uint8_t chipId[6];
  esp_efuse_mac_get_default(chipId);
  printf("MAC ID: %02x%02x%02x%02x%02x%02x\n", chipId[0], chipId[1], chipId[2], chipId[3], chipId[4], chipId[5]);

  for (int i = 10; i >= 0; i--)  
  {
    printf("Restarting in %d seconds...\n", i);
    vTaskDelay(1000 / portTICK_RATE_MS);
  }

  printf("Restarting now. \n");
  fflush(stdout);
  esp_restart();
  
}
