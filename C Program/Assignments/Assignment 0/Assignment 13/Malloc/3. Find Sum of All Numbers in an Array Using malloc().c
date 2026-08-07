#include<stdio.h>
#include<stdlib.h>

void accept(int *arr, int size);
void findSum(int *arr, int size);

int main()
{
    int *arr;
    int size;

    printf("Enter Size of Array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory Allocation Failed");
        return 0;
    }

    accept(arr, size);

    findSum(arr, size);

    free(arr);

    return 0;
}

void accept(int *arr, int size)
{
    int i;

    printf("Enter Array Elements:\n");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void findSum(int *arr, int size)
{
    int i, sum = 0;

    for(i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nSum of Array Elements = %d", sum);
}