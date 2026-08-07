#include<stdio.h>

typedef struct Date
{
    int day;
    int month;
    int year;
}Date;
void store(Date *d);
void displayByValue(Date d);
void displayByAddress(Date *d);

void storeArray(Date arr[], int size);
void displayArray(Date arr[], int size);

int main()
{
    Date d1;
    Date arr[3];

    printf("========== Single Date ==========\n");

    store(&d1);

    printf("\n----- Pass By Value -----\n");
    displayByValue(d1);

    printf("\n----- Pass By Address -----\n");
    displayByAddress(&d1);

    printf("\n========== Array of Dates ==========\n");

    storeArray(arr,3);

    printf("\n----- Display Array -----\n");
    displayArray(arr,3);

    return 0;
}

void store(Date *d)
{
    printf("Enter Day : ");
    scanf("%d",&d->day);

    printf("Enter Month : ");
    scanf("%d",&d->month);

    printf("Enter Year : ");
    scanf("%d",&d->year);
}

void displayByValue(Date d)
{
    printf("Date : %02d/%02d/%04d\n",d.day,d.month,d.year);
}

void displayByAddress(Date *d)
{
    printf("Date : %02d/%02d/%04d\n",d->day,d->month,d->year);
}

void storeArray(Date arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Date %d\n",i+1);

        printf("Day : ");
        scanf("%d",&arr[i].day);

        printf("Month : ");
        scanf("%d",&arr[i].month);

        printf("Year : ");
        scanf("%d",&arr[i].year);
    }
}

void displayArray(Date arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nDate %d : %02d/%02d/%04d\n",
               i+1,
               arr[i].day,
               arr[i].month,
               arr[i].year);
    }
}