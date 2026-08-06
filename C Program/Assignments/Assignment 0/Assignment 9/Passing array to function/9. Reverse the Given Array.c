#include<stdio.h>

void storeArray(int arr[], int size);
void displayArray(int arr[], int size);
void reverseArray(int arr[], int size);

void main()
{
    int arr[5];

    printf("Enter Array Elements:\n");
    storeArray(arr,5);

    printf("\nOriginal Array:\n");
    displayArray(arr,5);

    reverseArray(arr,5);

    printf("\nReversed Array:\n");
    displayArray(arr,5);
}

void storeArray(int arr[], int size)
{
    int i;

    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
}

void displayArray(int arr[], int size)
{
    int i;

    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}

void reverseArray(int arr[], int size)
{
    int i,temp;

    for(i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}