#include<stdio.h>

void main()
{
    int n = 20;
    int num, i, sum;

    for(num = 2; num <= n; num++)
    {
        sum = 0;

        for(i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }
}