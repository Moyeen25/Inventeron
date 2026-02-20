#include <stdio.h> // p2func

int add(int a, int b)
 {
    return a + b;
}

int main() {
    int (*fptr)(int, int);   // function pointer

    fptr = add;              // assign function
    int result = fptr(5, 3);
    printf("Result = %d\n", result);

    return 0;
}