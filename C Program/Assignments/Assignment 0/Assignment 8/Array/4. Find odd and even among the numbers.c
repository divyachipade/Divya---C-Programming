#include<stdio.h>

void main()
{
    int arr[5] = {2, 3, 4, 57, 67};
    int i;

    printf("Even Numbers: ");

    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd Numbers: ");

    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}