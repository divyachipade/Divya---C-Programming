#include<stdio.h>

void printPrime();

void main()
{
    printPrime();
}

void printPrime()
{
    int n,i,num,flag;

    printf("Enter Limit: ");
    scanf("%d",&n);

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