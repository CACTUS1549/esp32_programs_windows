#include <stdio.h>

/*
  1. Create a char type variable and initialize it to value 100;
  2. Print the address of the above variable. 
  3. Create a pointer variable and store the address of the above variable. 
  4. Perform read operation on the pointer variable to fetch 1byte of data from the pointer. 
  5. Print the data obtained from the read operation on the pointer. 
  6. Perform write operation on the pointer to store the value 65.
  7. Print the value of the variable defined in step 1.
*/



void app_main(void)
{
  //1. Create a char type variable and initialize it to value 100;
  char data = 100;

  //2. Print the address of the above variable.
  printf("The value of data is: %d\n", data);

  //3. Create a pointer variable and store the address of the above variable.
  char* pAddress = &data;
  printf("Address of the variable data is:%p\n", &data);

  //4. Perform read operation on the pointer variable to fetch 1byte of data from the pointer.
  char value = *pAddress;

  //5. Print the data obtained from the read operation on the pointer.
  printf("The value of data is: %d\n", value);

  //6. Perform write operation on the pointer to store the value 65.
  *pAddress = 65;

  //7. Print the value of the variable defined in step 1.
  printf("The value of data is: %d\n", data); 

}
