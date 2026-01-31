#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int Roll;
    char Name[20];
    float result;
};

void Name(struct Student *s, int i);
void Roll(struct Student *s, int i);
void Result(struct Student *s, int i);
void Details(struct Student *s, int n);

int main()
{
    int choice;
    int n = 3;

    int name_done = 0;
    int roll_done = 0;
    int result_done = 0;


    struct Student *Stud;
    Stud = (struct Student *)malloc(n * sizeof(struct Student));

    if (Stud == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

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
            for (int i = 0; i < n; i++)
                Name(Stud, i);
            name_done = 1;
            break;

        case 2:
            if (!name_done)
            {
                printf("Enter names first\n");
                break;
            }
            for (int i = 0; i < n; i++)
                Roll(Stud, i);
            roll_done = 1;
            break;

        case 3:
            if (!name_done || !roll_done)
            {
                printf("Enter names and roll first\n");
                break;
            }
            for (int i = 0; i < n; i++)
                Result(Stud, i);
            result_done = 1;
            break;

        case 4:
            if (!name_done || !roll_done || !result_done)
            {
                printf("Enter all data first\n");
                break;
            }
            Details(Stud, n);
            break;

        default:
            printf("Invalid choice\n");
        }
    }


    free(Stud);

    return 0;
}

void Name(struct Student *s, int i)
{
    printf("Enter name of student %d: ", i + 1);
    scanf("%s", s[i].Name);
}

void Roll(struct Student *s, int i)
{
    printf("Enter roll of student %d: ", i + 1);
    scanf("%d", &s[i].Roll);
}

void Result(struct Student *s, int i)
{
    printf("Enter result of student %d: ", i + 1);
    scanf("%f", &s[i].result);
}

void Details(struct Student *s, int n)
{
    printf("\nSTUDENT DETAILS\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].Name);
        printf("Roll: %d\n", s[i].Roll);
        printf("Result: %.2f%%\n", s[i].result);
    }
}