#include <stdio.h>

int main() 
{
    int x = 100;

    const int *ptr = &x;   // pointer to constant int

    printf("Value = %d\n", *ptr);
    printf("New value = %d\n", *ptr);
    return 0;
}