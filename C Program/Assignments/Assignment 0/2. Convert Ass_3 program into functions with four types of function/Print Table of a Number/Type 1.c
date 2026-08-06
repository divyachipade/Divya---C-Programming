#include<stdio.h>

void printTable();

void main()
{
    printTable();
}

void printTable()
{
    int n,i;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d ",n*i);
    }
}