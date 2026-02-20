#include <stdio.h> // pointer 2 array

int main() 
{
    int arr[5] = {10, 20, 30, 40, 50};

    int (*ptr)[5] = &arr;   // pointer to whole array



    printf("First element = %d\n", (*ptr)[0]);
    printf("Third element = %d\n", (*ptr)[2]);

    return 0;
}