/*#include <stdio.h>

int main() ///rotate bits....
{
    int num = 10
    int n = 1;

    int result = (num >> n) | (num ^ 1);

    printf("After rotate right: %u\n", result);
    return 0;
}
*/


#include <stdio.h>

int main()
{
    unsigned char num = 10;   // 00001010
    int n = 2;

    unsigned char result = (num >> n) | (num << (8 - n));

    printf("After rotate right: %u\n", result);  
    return 0;
}
