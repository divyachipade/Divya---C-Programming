#include<stdio.h>

void storeArray(int arr[], int size);
void displayArray(int arr[], int size);
void printPrime(int arr[], int size);

void main()
{
    int arr[5];

    printf("Enter Array Elements:\n");
    storeArray(arr,5);

    printf("\nArray Elements are:\n");
    displayArray(arr,5);

    printf("\nPrime Numbers are:\n");
    printPrime(arr,5);
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

void printPrime(int arr[], int size)
{
    int i,j,flag;

    for(i=0;i<size;i++)
    {
        if(arr[i]<=1)
            continue;

        flag=1;

        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
            printf("%d ",arr[i]);
    }
}