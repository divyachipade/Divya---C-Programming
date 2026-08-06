#include<stdio.h>

void main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;
    int search = 10;
    int found = 0;

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == search)
        {
            printf("Number Found %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Number Not Found");
    }
}