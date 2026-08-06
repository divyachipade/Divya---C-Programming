#include<stdio.h>

int sumFirstLast(int);

void main()
{
    int n,sum;

    printf("Enter Number: ");
    scanf("%d",&n);

    sum=sumFirstLast(n);

    printf("Sum = %d",sum);
}

int sumFirstLast(int n)
{
    int first,last;

    last=n%10;

    while(n>=10)
    {
        n=n/10;
    }

    first=n;

    return first+last;
}