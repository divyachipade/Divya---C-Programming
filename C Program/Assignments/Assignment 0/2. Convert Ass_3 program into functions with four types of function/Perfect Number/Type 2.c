#include<stdio.h>

int checkPerfect();

void main()
{
    int res;

    res=checkPerfect();

    if(res==1)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}

int checkPerfect()
{
    int n,i,sum=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}