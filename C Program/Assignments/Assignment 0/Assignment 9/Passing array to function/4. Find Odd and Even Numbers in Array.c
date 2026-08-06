#include<stdio.h>

void storeArray(int arr[], int size);
void displayArray(int arr[], int size);
void findOddEven(int arr[], int size);

void main()
{
    int arr[5];

    printf("Enter Array Elements:\n");
    storeArray(arr,5);

    printf("\nArray Elements are:\n");
    displayArray(arr,5);

    findOddEven(arr,5);
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

void findOddEven(int arr[], int size)
{
    int i;

    printf("\nEven Numbers:\n");

    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
    }

    printf("\nOdd Numbers:\n");

    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);
    }
}