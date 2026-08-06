#include<stdio.h>

void storeArray(int arr[], int size);
void displayArray(int arr[], int size);
void findMinMax(int arr[], int size);

void main()
{
    int arr[5];

    printf("Enter Array Elements:\n");
    storeArray(arr, 5);

    printf("\nArray Elements are:\n");
    displayArray(arr, 5);

    findMinMax(arr, 5);
}

void storeArray(int arr[], int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void findMinMax(int arr[], int size)
{
    int i, min, max;

    min = arr[0];
    max = arr[0];

    for(i=1; i<size; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("\nMinimum = %d", min);
    printf("\nMaximum = %d", max);
}