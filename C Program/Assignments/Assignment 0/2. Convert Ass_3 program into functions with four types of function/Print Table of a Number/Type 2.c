#include<stdio.h>

void printTable(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    printTable(n);
}

void printTable(int n)
{
    int i;

    for(i=1;i<=10;i++)
    {
        printf("%d ",n*i);
    }
}