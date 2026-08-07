#include<stdio.h>

typedef struct Student
{
    int rollNo;
    char name[20];
    float marks;
}Student;
void store(Student *s);
void displayByValue(Student s);
void displayByAddress(Student *s);

void storeArray(Student arr[], int size);
void displayArray(Student arr[], int size);

int main()
{
    Student s1;
    Student arr[3];

    printf("========== Single Student ==========\n");

    store(&s1);

    printf("\n----- Pass By Value -----\n");
    displayByValue(s1);

    printf("\n----- Pass By Address -----\n");
    displayByAddress(&s1);

    printf("\n========== Array of Students ==========\n");

    storeArray(arr,3);

    printf("\n----- Display Array -----\n");
    displayArray(arr,3);

    return 0;
}

// Store Single Student
void store(Student *s)
{
    printf("Enter Roll No : ");
    scanf("%d",&s->rollNo);

    printf("Enter Name : ");
    scanf("%s",s->name);

    printf("Enter Marks : ");
    scanf("%f",&s->marks);
}

// Pass By Value
void displayByValue(Student s)
{
    printf("Roll No : %d\n",s.rollNo);
    printf("Name    : %s\n",s.name);
    printf("Marks   : %.2f\n",s.marks);
}

// Pass By Address
void displayByAddress(Student *s)
{
    printf("Roll No : %d\n",s->rollNo);
    printf("Name    : %s\n",s->name);
    printf("Marks   : %.2f\n",s->marks);
}

// Store Array of Students
void storeArray(Student arr[], int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Details of Student %d\n",i+1);

        printf("Roll No : ");
        scanf("%d",&arr[i].rollNo);

        printf("Name : ");
        scanf("%s",arr[i].name);

        printf("Marks : ");
        scanf("%f",&arr[i].marks);
    }
}

// Display Array of Students
void displayArray(Student arr[], int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nStudent %d Details\n",i+1);

        printf("Roll No : %d\n",arr[i].rollNo);
        printf("Name    : %s\n",arr[i].name);
        printf("Marks   : %.2f\n",arr[i].marks);
    }
}