#include<stdio.h>

void main()
{
    int n = 20;
    int num, i, count;

    for(num = 2; num <= n; num++)
    {
        count = 0;

        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }
        if(count == 0)
        {
            printf("%d ", num);
        }
    }
}