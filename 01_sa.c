#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int Roll;
    char Name[20];
    float result;
};

struct Student Stud[3];
int i;

void Name();
void Roll();
void Result();
void Details();

int main()
{
    int choice;
    int name_done = 0;
    int roll_done = 0;
    int result_done = 0;

    while (1)
    {
        printf("\nChoose option\n");
        printf("1. Enter Names\n2. Enter Roll Numbers\n3. Enter Results\n4. Display Details\n5. Exit\n");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("Exiting program\n");
            break;
        }

        switch (choice)
        {
        case 1:
            for (i = 0; i < 3; i++)
                Name();
            name_done = 1;
            break;

        case 2:
            if (name_done== 0)
            {
                printf("\nEnter names first\n");
                break;
            }
            for (i = 0; i < 3; i++)
                Roll();
            roll_done = 1;
            break;

        case 3:
            if (name_done==0 || roll_done==0)
            {
                printf("\nEnter names and roll No first\n");
                break;
            }
            for (i = 0; i < 3; i++)
                Result();
            result_done = 1;
            break;

        case 4:
            if (name_done==0 || roll_done==0 || result_done==0)
            {
                printf("\nEnter all data first\n");
                break;
            }
            Details();
            break;

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}

void Name()
{
    printf("Enter name of student %d: ", i + 1);
    scanf("%s", Stud[i].Name);
}
void Roll()
{
    printf("Enter roll of student %d: ", i + 1);
    scanf("%d", &Stud[i].Roll);
}
void Result()
{
    printf("Enter result of student %d: ", i + 1);
    scanf("%f", &Stud[i].result);
}
void Details()
{
    printf("\nSTUDENT DETAILS\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", Stud[i].Name);
        printf("Roll: %d\n", Stud[i].Roll);
        printf("Result: %.2f%%\n", Stud[i].result);
    }
}
