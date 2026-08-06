#include<stdio.h>

void evenOdd();

void main()
{
    evenOdd();
}

void evenOdd()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
}