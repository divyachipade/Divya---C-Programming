#include<stdio.h>

typedef struct SalesManager
{
    int id;
    char name[20];
    double salary;
    double incentive;
    int target;
}SalesManager;
void store(SalesManager *s);
void displayByValue(SalesManager s);
void displayByAddress(SalesManager *s);

void storeArray(SalesManager arr[], int size);
void displayArray(SalesManager arr[], int size);

int main()
{
    SalesManager s1;
    SalesManager arr[3];

    printf("========== Single Sales Manager ==========\n");

    store(&s1);

    printf("\n----- Pass By Value -----\n");
    displayByValue(s1);

    printf("\n----- Pass By Address -----\n");
    displayByAddress(&s1);

    printf("\n========== Array of Sales Managers ==========\n");

    storeArray(arr,3);

    printf("\n----- Display Array -----\n");
    displayArray(arr,3);

    return 0;
}

// Store Single SalesManager
void store(SalesManager *s)
{
    printf("Enter ID : ");
    scanf("%d",&s->id);

    printf("Enter Name : ");
    scanf("%s",s->name);

    printf("Enter Salary : ");
    scanf("%lf",&s->salary);

    printf("Enter Incentive : ");
    scanf("%lf",&s->incentive);

    printf("Enter Target : ");
    scanf("%d",&s->target);
}

// Pass By Value
void displayByValue(SalesManager s)
{
    printf("ID         : %d\n",s.id);
    printf("Name       : %s\n",s.name);
    printf("Salary     : %.2lf\n",s.salary);
    printf("Incentive  : %.2lf\n",s.incentive);
    printf("Target     : %d\n",s.target);
}

// Pass By Address
void displayByAddress(SalesManager *s)
{
    printf("ID         : %d\n",s->id);
    printf("Name       : %s\n",s->name);
    printf("Salary     : %.2lf\n",s->salary);
    printf("Incentive  : %.2lf\n",s->incentive);
    printf("Target     : %d\n",s->target);
}

// Store Array
void storeArray(SalesManager arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Details of Sales Manager %d\n",i+1);

        printf("ID : ");
        scanf("%d",&arr[i].id);

        printf("Name : ");
        scanf("%s",arr[i].name);

        printf("Salary : ");
        scanf("%lf",&arr[i].salary);

        printf("Incentive : ");
        scanf("%lf",&arr[i].incentive);

        printf("Target : ");
        scanf("%d",&arr[i].target);
    }
}

// Display Array
void displayArray(SalesManager arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nSales Manager %d Details\n",i+1);

        printf("ID         : %d\n",arr[i].id);
        printf("Name       : %s\n",arr[i].name);
        printf("Salary     : %.2lf\n",arr[i].salary);
        printf("Incentive  : %.2lf\n",arr[i].incentive);
        printf("Target     : %d\n",arr[i].target);
    }
}