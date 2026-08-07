#include<stdio.h>

typedef struct Employee
{
    int id;
    char name[20];
    double salary;
}Employee;
void store(Employee *e);
void displayByValue(Employee e);
void displayByAddress(Employee *e);

void storeArray(Employee arr[], int size);
void displayArray(Employee arr[], int size);

int main()
{
    Employee e1;
    Employee arr[3];

    printf("========== Single Employee ==========\n");

    store(&e1);

    printf("\n----- Pass By Value -----\n");
    displayByValue(e1);

    printf("\n----- Pass By Address -----\n");
    displayByAddress(&e1);

    printf("\n========== Array of Employees ==========\n");

    storeArray(arr,3);

    printf("\n----- Display Array -----\n");
    displayArray(arr,3);

    return 0;
}
// Store Single Employee
void store(Employee *e)
{
    printf("Enter Employee ID : ");
    scanf("%d",&e->id);

    printf("Enter Employee Name : ");
    scanf("%s",e->name);

    printf("Enter Salary : ");
    scanf("%lf",&e->salary);
}
// Display by Value
void displayByValue(Employee e)
{
    printf("Employee ID : %d\n",e.id);
    printf("Name        : %s\n",e.name);
    printf("Salary      : %.2lf\n",e.salary);
}
// Display by Address
void displayByAddress(Employee *e)
{
    printf("Employee ID : %d\n",e->id);
    printf("Name        : %s\n",e->name);
    printf("Salary      : %.2lf\n",e->salary);
}
// Store Array of Employees
void storeArray(Employee arr[], int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Details of Employee %d\n",i+1);

        printf("Employee ID : ");
        scanf("%d",&arr[i].id);

        printf("Name : ");
        scanf("%s",arr[i].name);

        printf("Salary : ");
        scanf("%lf",&arr[i].salary);
    }
}
// Display Array of Employees
void displayArray(Employee arr[], int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEmployee %d Details\n",i+1);

        printf("Employee ID : %d\n",arr[i].id);
        printf("Name        : %s\n",arr[i].name);
        printf("Salary      : %.2lf\n",arr[i].salary);
    }
}