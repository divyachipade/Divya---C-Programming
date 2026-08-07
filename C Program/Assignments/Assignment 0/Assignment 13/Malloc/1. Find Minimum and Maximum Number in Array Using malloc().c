#include<stdio.h>
#include<stdlib.h>

void accept(int *arr, int size);
void minMax(int *arr, int size);

int main()
{
    int *arr;
    int size;

    printf("Enter Size of Array: ");
    scanf("%d",&size);

    arr = (int *)malloc(size * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory Allocation Failed");
        return 0;
    }

    accept(arr,size);

    minMax(arr,size);

    free(arr);

    return 0;
}

void accept(int *arr,int size)
{
    int i;

    printf("Enter Array Elements:\n");

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void minMax(int *arr,int size)
{
    int i;
    int min,max;

    min = arr[0];
    max = arr[0];

    for(i=1;i<size;i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("\nMinimum Element = %d",min);
    printf("\nMaximum Element = %d",max);
}