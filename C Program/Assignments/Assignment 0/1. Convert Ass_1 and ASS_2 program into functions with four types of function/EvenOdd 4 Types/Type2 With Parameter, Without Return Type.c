#include<stdio.h>

void evenOdd(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    evenOdd(n);
}

void evenOdd(int n)
{
    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
}