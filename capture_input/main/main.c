#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"



void app_main(void)
{
  char c = 0;
  char str[100];
  memset(str, 0, sizeof(str));  //clear the garbage in the string
  while (c != '\n') //wait until user hits enter
  {
    c = getchar();  //this will keep capturing char input. so if no character is found (user did not type anything) then it is going to be 0xff
    if (c != 0xff) //if a key was pressed, then it is going to be that particular character. 
    {
      str[strlen(str)] = c;   //concatinate to the string.
      printf("%c", c);  //print the character. no new line to see that we can see in one line. 
    } 
    vTaskDelay(10 / portTICK_RATE_MS);  //give a small delay for smooth typing. 
  }
  printf("You typed: %s\n", str); //if enter is pressed, then we got a completed string. 
  
}
