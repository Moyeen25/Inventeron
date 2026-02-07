#include <stdio.h>

int main() ////toggle
{
    int num = 10; // 00001010
    int n = 3;

    num = num & ~(1 << n);

    printf("After clearing th 3rd bit the no is  %d\n", num);
    return 0;
}
