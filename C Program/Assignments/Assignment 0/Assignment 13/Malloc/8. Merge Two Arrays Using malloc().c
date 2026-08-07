#include<stdio.h>
#include<stdlib.h>

void accept(int *arr, int size);
void mergeArray(int *arr, int size1, int *brr, int size2, int *crr);
void display(int *arr, int size);

int main()
{
    int *arr, *brr, *crr;
    int size1, size2;

    printf("Enter Size of First Array: ");
    scanf("%d", &size1);

    printf("Enter Size of Second Array: ");
    scanf("%d", &size2);

    arr = (int *)malloc(size1 * sizeof(int));
    brr = (int *)malloc(size2 * sizeof(int));
    crr = (int *)malloc((size1 + size2) * sizeof(int));

    if(arr == NULL || brr == NULL || crr == NULL)
    {
        printf("Memory Allocation Failed");
        return 0;
    }

    printf("\nEnter Elements of First Array:\n");
    accept(arr, size1);

    printf("\nEnter Elements of Second Array:\n");
    accept(brr, size2);

    mergeArray(arr, size1, brr, size2, crr);

    printf("\nMerged Array:\n");
    display(crr, size1 + size2);

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

void mergeArray(int *arr, int size1, int *brr, int size2, int *crr)
{
    int i, j;

    for(i = 0; i < size1; i++)
    {
        crr[i] = arr[i];
    }

    for(j = 0; j < size2; j++)
    {
        crr[i] = brr[j];
        i++;
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