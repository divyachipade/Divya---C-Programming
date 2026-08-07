#include<stdio.h>
#include<stdlib.h>

void accept(int *arr, int size);
void searchElement(int *arr, int size, int key);

int main()
{
    int *arr;
    int size, key;

    printf("Enter Size of Array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory Allocation Failed");
        return 0;
    }

    accept(arr, size);

    printf("Enter Element to Search: ");
    scanf("%d", &key);

    searchElement(arr, size, key);

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

void searchElement(int *arr, int size, int key)
{
    int i, found = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            printf("\nElement Found at Index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nElement Not Found");
    }
}