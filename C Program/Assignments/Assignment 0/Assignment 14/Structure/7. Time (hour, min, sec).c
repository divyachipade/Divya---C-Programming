#include<stdio.h>

typedef struct Time
{
    int hour;
    int min;
    int sec;
}Time;

// Function Declarations
void store(Time *t);
void displayByValue(Time t);
void displayByAddress(Time *t);

void storeArray(Time arr[], int size);
void displayArray(Time arr[], int size);

int main()
{
    Time t1;
    Time arr[3];

    printf("========== Single Time ==========\n");

    store(&t1);

    printf("\n----- Pass By Value -----\n");
    displayByValue(t1);

    printf("\n----- Pass By Address -----\n");
    displayByAddress(&t1);

    printf("\n========== Array of Time ==========\n");

    storeArray(arr,3);

    printf("\n----- Display Array -----\n");
    displayArray(arr,3);

    return 0;
}

void store(Time *t)
{
    printf("Enter Hour : ");
    scanf("%d",&t->hour);

    printf("Enter Minute : ");
    scanf("%d",&t->min);

    printf("Enter Second : ");
    scanf("%d",&t->sec);
}

void displayByValue(Time t)
{
    printf("Time : %02d:%02d:%02d\n",t.hour,t.min,t.sec);
}

void displayByAddress(Time *t)
{
    printf("Time : %02d:%02d:%02d\n",t->hour,t->min,t->sec);
}

void storeArray(Time arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Time %d\n",i+1);

        printf("Hour : ");
        scanf("%d",&arr[i].hour);

        printf("Minute : ");
        scanf("%d",&arr[i].min);

        printf("Second : ");
        scanf("%d",&arr[i].sec);
    }
}

void displayArray(Time arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nTime %d : %02d:%02d:%02d\n",
               i+1,
               arr[i].hour,
               arr[i].min,
               arr[i].sec);
    }
}