#include<stdio.h>

typedef struct Distance
{
    int feet;
    int inch;
}Distance;
void store(Distance *d);
void displayByValue(Distance d);
void displayByAddress(Distance *d);

void storeArray(Distance arr[], int size);
void displayArray(Distance arr[], int size);

int main()
{
    Distance d1;
    Distance arr[3];

    printf("========== Single Distance ==========\n");

    store(&d1);

    printf("\n----- Pass By Value -----\n");
    displayByValue(d1);

    printf("\n----- Pass By Address -----\n");
    displayByAddress(&d1);

    printf("\n========== Array of Distances ==========\n");

    storeArray(arr,3);

    printf("\n----- Display Array -----\n");
    displayArray(arr,3);

    return 0;
}

void store(Distance *d)
{
    printf("Enter Feet : ");
    scanf("%d",&d->feet);

    printf("Enter Inch : ");
    scanf("%d",&d->inch);
}

void displayByValue(Distance d)
{
    printf("Distance = %d Feet %d Inch\n",d.feet,d.inch);
}

void displayByAddress(Distance *d)
{
    printf("Distance = %d Feet %d Inch\n",d->feet,d->inch);
}

void storeArray(Distance arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Distance %d\n",i+1);

        printf("Feet : ");
        scanf("%d",&arr[i].feet);

        printf("Inch : ");
        scanf("%d",&arr[i].inch);
    }
}

void displayArray(Distance arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nDistance %d = %d Feet %d Inch\n",
               i+1,
               arr[i].feet,
               arr[i].inch);
    }
}