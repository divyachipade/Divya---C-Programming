#include<stdio.h>

void storeArray(int arr[], int size);
void displayArray(int arr[], int size);
void findSum(int arr[], int size);

void main()
{
    int arr[5];

    printf("Enter Array Elements:\n");
    storeArray(arr,5);

    printf("\nArray Elements are:\n");
    displayArray(arr,5);

    findSum(arr,5);
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

void findSum(int arr[], int size)
{
    int i,sum=0;

    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }

    printf("\nSum = %d",sum);
}