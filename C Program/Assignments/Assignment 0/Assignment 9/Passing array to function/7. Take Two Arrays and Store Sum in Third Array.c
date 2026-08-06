#include<stdio.h>

void storeArray(int arr[], int size);
void displayArray(int arr[], int size);
void addArray(int arr[], int brr[], int crr[], int size);

void main()
{
    int arr[5], brr[5], crr[5];

    printf("Enter First Array:\n");
    storeArray(arr,5);

    printf("Enter Second Array:\n");
    storeArray(brr,5);

    addArray(arr,brr,crr,5);

    printf("\nThird Array is:\n");
    displayArray(crr,5);
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

void addArray(int arr[], int brr[], int crr[], int size)
{
    int i;

    for(i=0;i<size;i++)
        crr[i]=arr[i]+brr[i];
}