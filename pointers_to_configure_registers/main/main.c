#include <stdio.h>



void app_main(void)
{
  //let us say you want to read and write to this particular address in the memory - 0x3ffb4810

  //the data you want to write into that memory location is 89.
  char some_data = 89;


  //1. define the address with user understandable name
  char* some_memory_register = (char*) 0x3ffb4810;

  //2. Read from that memory location. If char is used only 1 byte is read. If int is used 4 bytes are read. If long is used 8 bytes are read. 
  char value_at_some_memory_register = *some_memory_register;
  printf("The value present in that particular memory address is: %d\n", value_at_some_memory_register);


  //3. write some data to that particular memory address. 
  *some_memory_register = some_data;
  printf("New value at that particular memory location is: %d\n", *some_memory_register);
  
}
