#include<stdio.h>

void storeArray(int arr[], int size);
void displayArray(int arr[], int size);
void searchElement(int arr[], int size, int key);

void main()
{
    int arr[5];
    int key;

    printf("Enter Array Elements:\n");
    storeArray(arr, 5);

    printf("\nArray Elements are:\n");
    displayArray(arr, 5);

    printf("\n\nEnter Element to Search: ");
    scanf("%d", &key);

    searchElement(arr, 5, key);
}

void storeArray(int arr[], int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void searchElement(int arr[], int size, int key)
{
    int i, found = 0;

    for(i=0; i<size; i++)
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