#include <stdio.h> // pointers to array.....

struct Student {
    int id;
    float marks;
    char name[50]; 
};

int main() {
    struct Student s[3];      // array of 3 students..
    struct Student *ptr = s;  // pointer to first student
    int i;

    
    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d\n", i + 1);  // to take input for 5 students

        printf("Enter ID: ");
        scanf("%d", &ptr[i].id);

        printf("Enter Marks: ");
        scanf("%f", &ptr[i].marks);

        printf("Enter Name: ");
        scanf(" %49[^\n]", ptr[i].name);  
        // scanf(" %49[^\n]", ptr[i].name);
    }

    
    printf("Student Details.\n");  // to display the result.

    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("ID = %d\n", ptr[i].id);
        printf("Marks = %.2f\n", ptr[i].marks);
        printf("Name = %s\n", ptr[i].name); 

    }

    return 0;
}
