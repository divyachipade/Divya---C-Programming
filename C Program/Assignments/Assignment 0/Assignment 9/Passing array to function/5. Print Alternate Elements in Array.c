#include<stdio.h>

void storeArray(int arr[], int size);
void displayArray(int arr[], int size);
void alternateElements(int arr[], int size);

void main()
{
    int arr[5];

    printf("Enter Array Elements:\n");
    storeArray(arr,5);

    printf("\nArray Elements are:\n");
    displayArray(arr,5);

    printf("\nAlternate Elements are:\n");
    alternateElements(arr,5);
}

void storeArray(int arr[], int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void displayArray(int arr[], int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

void alternateElements(int arr[], int size)
{
    int i;

    for(i=0;i<size;i=i+2)
    {
        printf("%d ",arr[i]);
    }
}