#include<stdio.h>

void storeArray(int arr[], int size);
void displayArray(int arr[], int size);
void mergeArray(int arr[], int size1, int brr[], int size2, int mrr[]);

void main()
{
    int arr[5], brr[5], mrr[10];

    printf("Enter First Array:\n");
    storeArray(arr,5);

    printf("Enter Second Array:\n");
    storeArray(brr,5);

    mergeArray(arr,5,brr,5,mrr);

    printf("\nMerged Array:\n");
    displayArray(mrr,10);
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

void mergeArray(int arr[], int size1, int brr[], int size2, int mrr[])
{
    int i;

    for(i=0;i<size1;i++)
        mrr[i]=arr[i];

    for(i=0;i<size2;i++)
        mrr[size1+i]=brr[i];
}