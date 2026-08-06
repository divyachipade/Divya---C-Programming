#include<stdio.h>

void storeArray(int arr[], int size);
void displayArray(int arr[], int size);
void sortArray(int arr[], int size);

void main()
{
    int arr[5];

    printf("Enter Array Elements:\n");
    storeArray(arr,5);

    printf("\nOriginal Array:\n");
    displayArray(arr,5);

    sortArray(arr,5);

    printf("\nSorted Array:\n");
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

void sortArray(int arr[], int size)
{
    int i,j,temp;

    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}