#include <stdio.h>

int main() //  check if set most signi
{
    int num = 128;

    if(num & (1 << 7))
        printf("MSB is SET\n");
    else
        printf("MSB is CLEAR\n");

    return 0;
}
