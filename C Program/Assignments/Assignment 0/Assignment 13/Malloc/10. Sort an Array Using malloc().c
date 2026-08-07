#include<stdio.h>
#include<stdlib.h>

void accept(int *arr, int size);
void sortArray(int *arr, int size);
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

    sortArray(arr, size);

    printf("\nSorted Array (Ascending Order):\n");
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

void sortArray(int *arr, int size)
{
    int i, j, temp;

    for(i = 0; i < size - 1; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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