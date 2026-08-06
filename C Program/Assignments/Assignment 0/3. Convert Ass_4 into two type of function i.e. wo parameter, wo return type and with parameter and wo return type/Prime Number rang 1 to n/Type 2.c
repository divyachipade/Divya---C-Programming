#include<stdio.h>

void printPrime(int);

void main()
{
    int n;

    printf("Enter Limit: ");
    scanf("%d",&n);

    printPrime(n);
}

void printPrime(int n)
{
    int i,num,flag;

    printf("Prime Numbers are:\n");

    for(num=2;num<=n;num++)
    {
        flag=1;

        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
            printf("%d ",num);
    }
}