#include<stdio.h>

void main()
{
    int arr[5] = {3,45,41,65,11};
    int i, j, count;

    printf("Prime Numbers: ");

    for(i = 0; i < 5; i++)
    {
        count = 0;
        for(j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                count++;
            }
        }
        if(count == 0 && arr[i] > 1)
        {
            printf("%d ", arr[i]);
        }
    }
}