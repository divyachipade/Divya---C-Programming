#include<stdio.h>

void main()
{
    int arr[5] = {10, 50, 20, 5, 30};
    int i;
    int min, max;

    min = arr[0];
    max = arr[0];

    for(i = 1; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);
}