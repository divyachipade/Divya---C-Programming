#include<stdio.h>
#include<stdlib.h>

void accept(int *arr, int size);
void addArrays(int *arr, int *brr, int *crr, int size);
void display(int *arr, int size);

int main()
{
    int *arr, *brr, *crr;
    int size;

    printf("Enter Size of Arrays: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));
    brr = (int *)malloc(size * sizeof(int));
    crr = (int *)malloc(size * sizeof(int));

    if(arr == NULL || brr == NULL || crr == NULL)
    {
        printf("Memory Allocation Failed");
        return 0;
    }

    printf("\nEnter Elements of First Array:\n");
    accept(arr, size);

    printf("\nEnter Elements of Second Array:\n");
    accept(brr, size);

    addArrays(arr, brr, crr, size);

    printf("\nElements of Third Array are:\n");
    display(crr, size);

    free(arr);
    free(brr);
    free(crr);

    return 0;
}

void accept(int *arr, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void addArrays(int *arr, int *brr, int *crr, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        crr[i] = arr[i] + brr[i];
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