#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void addStudent(struct Student s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void displayStudents(struct Student s[], int n)
{
    int i;

    printf("\n------ Student Details ------\n");
    printf("Roll\tName\t\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }
}

void searchStudent(struct Student s[], int n)
{
    int roll, i, found = 0;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Roll : %d\n", s[i].roll);
            printf("Name : %s\n", s[i].name);
            printf("Marks : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student Not Found.\n");
}

int main()
{
    struct Student s[100];
    int n, choice;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    addStudent(s, n);

    do
    {
        printf("\n===== STUDENT MANAGEMENT =====\n");
        printf("1. Display Students\n");
        printf("2. Search Student\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayStudents(s, n);
                break;

            case 2:
                searchStudent(s, n);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}
