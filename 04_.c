#include <stdio.h>

int main()
{
    int number = 10; 
    int n = 1;

    number = number ^ (1 << n);

    printf("After toggle: %d\n", number);
    return 0;
}
