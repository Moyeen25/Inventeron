#include <stdio.h>

void add(float a, float b);
void subtract(float a, float b);
void multiply(float a, float b);





void add(float a, float b){
    printf("The sum is: %.2f\n\n", a + b);
}
void subtract(float a, float b)     {

    printf("The difference is: %.2f\n\n", a - b);
}
void multiply(float a, float b){
    printf("The product is: %.2f\n\n", a * b) ;    
}

int main(){
int choice;
float a, b;

 while (1)
    {
    printf("Choose the optins\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Exit\n");
    scanf("%d", &choice);
 
   
    if (choice == 4)
    {
        printf("Exiting program\n");
        break;
    }
    else
    
    switch (choice)
    {
    case 1:
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
        add(a, b);
        break;

    case 2:
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
        subtract(a, b);
        break;
    case 3:
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
        multiply(a, b);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

}
    
    return 0;
}