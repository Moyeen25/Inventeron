#include <stdio.h>

int number;

void bit_check(int x);

void bit_check(int x){
if(number & (1))
printf("1st bit is high\n");
else
printf("1st bit is low\n");

if(number & (1<<1))
printf("2nd bit is high\n");
else
printf("2nd bit is low\n");

if(number & (1<<2))
printf("3rd bit is high\n");
else
printf("3rd bit is low\n");
if(number & (1<<3))
printf("4th bit is high\n");
else
printf("4th bit is low\n");
if(number & (1<<4))
printf("5th bit is high\n");
else
printf("5th bit is low\n");
if(number & (1<<5))
printf("6th bit is high\n");
else
printf("6th bit is low\n");

if(number & (1<< 6))
printf("7th bit is high\n");
else
printf("7th bit is low\n");

if(number & (1<< 7))
printf("8th bit is high\n");
else
printf("8th bit is low\n\n");

}
int main(){

    while(1)
    {

        printf("\nEnter the number\n");
    scanf("%d", &number);
    

         if(number==9009) // just given as authentication to exit loop
         {
         printf("exiting\n");
            break;

         }
         else if (number > 255)
        { 
         
         printf("Not supported\n");
            continue;
        }
        bit_check(number);
    }

    

   
    return 0;
}

