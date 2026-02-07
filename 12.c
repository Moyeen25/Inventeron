#include <stdio.h>

int main() // decimal to binary
{
    int num = 256;


    for( int i = 7; i >= 0; i--)
        printf("%d", (num >> i) & 1 );


    return 0;
}
