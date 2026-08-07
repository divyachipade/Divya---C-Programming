#include<stdio.h>
#include<stdlib.h>

void accept(int *arr, int size);
void reverseArray(int *arr, int size);
void display(int *arr, int size);

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

    reverseArray(arr, size);

    printf("\nReversed Array:\n");
    display(arr, size);

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

void reverseArray(int *arr, int size)
{
    int i = 0, j = size - 1, temp;

    while(i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

void display(int *arr, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}