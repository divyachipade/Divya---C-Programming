#include<stdio.h>

void printNumbers(int);

void main()
{
    int n;

    printf("Enter Limit: ");
    scanf("%d",&n);

    printNumbers(n);
}

void printNumbers(int n)
{
    int i;

    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}