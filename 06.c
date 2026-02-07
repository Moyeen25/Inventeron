#include <stdio.h>

int main() //  clear
{
    int num = 10; // 00001010
    int n = 3;

    num = num & ~(1 << n);

    printf("After clearing: %d\n", num);
    return 0;
}
