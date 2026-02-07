#include <stdio.h>

int main()  // even or Odd
{
    int num;

    printf("Enter number: ");
    scanf("%d",&num);// 0000 0000
    /*
    */

    if(num & 1)
        printf("Odd number");
    else
        printf("Even number");

    return 0;
}
