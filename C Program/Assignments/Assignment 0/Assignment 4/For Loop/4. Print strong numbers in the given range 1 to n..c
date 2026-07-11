#include<stdio.h>

void main()
{
    int n = 500;
    int num, temp, rem, sum, fact, i;

    for(num = 1; num <= n; num++)
    {
        temp = num;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;

            fact = 1;

            for(i = 1; i <= rem; i++)
            {
                fact = fact * i;
            }

            sum = sum + fact;

            temp = temp / 10;
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }
}