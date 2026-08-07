#include<stdio.h>

typedef struct Admin
{
    int id;
    char name[20];
    double salary;
    double allowance;
}Admin;
void store(Admin *a);
void displayByValue(Admin a);
void displayByAddress(Admin *a);

void storeArray(Admin arr[], int size);
void displayArray(Admin arr[], int size);

int main()
{
    Admin a1;
    Admin arr[3];

    printf("========== Single Admin ==========\n");

    store(&a1);

    printf("\n----- Pass By Value -----\n");
    displayByValue(a1);

    printf("\n----- Pass By Address -----\n");
    displayByAddress(&a1);

    printf("\n========== Array of Admin ==========\n");

    storeArray(arr,3);

    printf("\n----- Display Array -----\n");
    displayArray(arr,3);

    return 0;
}
// Store Single Admin
void store(Admin *a)
{
    printf("Enter ID : ");
    scanf("%d",&a->id);

    printf("Enter Name : ");
    scanf("%s",a->name);

    printf("Enter Salary : ");
    scanf("%lf",&a->salary);

    printf("Enter Allowance : ");
    scanf("%lf",&a->allowance);
}
// Pass By Value
void displayByValue(Admin a)
{
    printf("ID         : %d\n",a.id);
    printf("Name       : %s\n",a.name);
    printf("Salary     : %.2lf\n",a.salary);
    printf("Allowance  : %.2lf\n",a.allowance);
}
// Pass By Address
void displayByAddress(Admin *a)
{
    printf("ID         : %d\n",a->id);
    printf("Name       : %s\n",a->name);
    printf("Salary     : %.2lf\n",a->salary);
    printf("Allowance  : %.2lf\n",a->allowance);
}
// Store Array
void storeArray(Admin arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Details of Admin %d\n",i+1);

        printf("ID : ");
        scanf("%d",&arr[i].id);

        printf("Name : ");
        scanf("%s",arr[i].name);

        printf("Salary : ");
        scanf("%lf",&arr[i].salary);

        printf("Allowance : ");
        scanf("%lf",&arr[i].allowance);
    }
}
// Display Array
void displayArray(Admin arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nAdmin %d Details\n",i+1);

        printf("ID         : %d\n",arr[i].id);
        printf("Name       : %s\n",arr[i].name);
        printf("Salary     : %.2lf\n",arr[i].salary);
        printf("Allowance  : %.2lf\n",arr[i].allowance);
    }
}