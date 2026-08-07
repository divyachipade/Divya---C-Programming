#include<stdio.h>
#include<stdlib.h>

void accept(int *arr, int size);
void oddEven(int *arr, int size);

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

    oddEven(arr, size);

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

void oddEven(int *arr, int size)
{
    int i;

    printf("\nEven Numbers are:\n");

    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n\nOdd Numbers are:\n");

    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}