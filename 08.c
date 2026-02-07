#include <stdio.h>

int main()
{
    int num = 10;

    if(num & 1)
        printf("LSB is SET (1)\n");
    else
        printf("LSB is CLEAR (0)\n");

    return 0;
}
