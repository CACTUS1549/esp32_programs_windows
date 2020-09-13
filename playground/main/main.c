#include <stdio.h>


void app_main(void)
{
    char data = 100;
    printf("The value of data is: %d\n", data);
    printf("Address of the variable data is:%p\n", &data);

    char* pAddress = &data;

    char value = *pAddress;
    printf("The value of data is: %d\n", value);

    *pAddress = 65;
    printf("The value of data is: %d\n", data);

}

