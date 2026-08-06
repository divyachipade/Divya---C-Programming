#include<stdio.h>

void sumRange();

void main()
{
    sumRange();
}

void sumRange()
{
    int start,end,i,sum=0;

    printf("Enter Start and End: ");
    scanf("%d%d",&start,&end);

    for(i=start;i<=end;i++)
    {
        sum=sum+i;
    }

    printf("Sum = %d",sum);
}