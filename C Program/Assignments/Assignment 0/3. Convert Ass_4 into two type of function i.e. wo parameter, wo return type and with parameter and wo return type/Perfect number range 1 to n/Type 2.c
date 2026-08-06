#include<stdio.h>

void printPerfect(int);

void main()
{
    int n;

    printf("Enter Limit: ");
    scanf("%d",&n);

    printPerfect(n);
}

void printPerfect(int n)
{
    int num,i,sum;

    printf("Perfect Numbers are:\n");

    for(num=1;num<=n;num++)
    {
        sum=0;

        for(i=1;i<num;i++)
        {
            if(num%i==0)
                sum=sum+i;
        }

        if(sum==num)
            printf("%d ",num);
    }
}