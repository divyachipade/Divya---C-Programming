#include<stdio.h>

void printNumbers();

void main()
{
    printNumbers();
}

void printNumbers()
{
    int i;

    for(i=1;i<=10;i++)
    {
        printf("%d ",i);
    }
}