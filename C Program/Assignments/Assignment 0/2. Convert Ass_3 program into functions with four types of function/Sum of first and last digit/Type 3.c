#include<stdio.h>

void sumFirstLast(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    sumFirstLast(n);
}

void sumFirstLast(int n)
{
    int first,last;

    last=n%10;

    while(n>=10)
    {
        n=n/10;
    }

    first=n;

    printf("Sum = %d",first+last);
}