#include<stdio.h>

typedef struct HR
{
    int id;
    char name[20];
    double salary;
    double commission;
}HR;

// Function Declarations
void store(HR *h);
void displayByValue(HR h);
void displayByAddress(HR *h);

void storeArray(HR arr[], int size);
void displayArray(HR arr[], int size);

int main()
{
    HR h1;
    HR arr[3];

    printf("========== Single HR ==========\n");

    store(&h1);

    printf("\n----- Pass By Value -----\n");
    displayByValue(h1);

    printf("\n----- Pass By Address -----\n");
    displayByAddress(&h1);

    printf("\n========== Array of HR ==========\n");

    storeArray(arr,3);

    printf("\n----- Display Array -----\n");
    displayArray(arr,3);

    return 0;
}

// Store Single HR
void store(HR *h)
{
    printf("Enter ID : ");
    scanf("%d",&h->id);

    printf("Enter Name : ");
    scanf("%s",h->name);

    printf("Enter Salary : ");
    scanf("%lf",&h->salary);

    printf("Enter Commission : ");
    scanf("%lf",&h->commission);
}

// Pass By Value
void displayByValue(HR h)
{
    printf("ID          : %d\n",h.id);
    printf("Name        : %s\n",h.name);
    printf("Salary      : %.2lf\n",h.salary);
    printf("Commission  : %.2lf\n",h.commission);
}

// Pass By Address
void displayByAddress(HR *h)
{
    printf("ID          : %d\n",h->id);
    printf("Name        : %s\n",h->name);
    printf("Salary      : %.2lf\n",h->salary);
    printf("Commission  : %.2lf\n",h->commission);
}

// Store Array
void storeArray(HR arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Details of HR %d\n",i+1);

        printf("ID : ");
        scanf("%d",&arr[i].id);

        printf("Name : ");
        scanf("%s",arr[i].name);

        printf("Salary : ");
        scanf("%lf",&arr[i].salary);

        printf("Commission : ");
        scanf("%lf",&arr[i].commission);
    }
}

// Display Array
void displayArray(HR arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nHR %d Details\n",i+1);

        printf("ID          : %d\n",arr[i].id);
        printf("Name        : %s\n",arr[i].name);
        printf("Salary      : %.2lf\n",arr[i].salary);
        printf("Commission  : %.2lf\n",arr[i].commission);
    }
}