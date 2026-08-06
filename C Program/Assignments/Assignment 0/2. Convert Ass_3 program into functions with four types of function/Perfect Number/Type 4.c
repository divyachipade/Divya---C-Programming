#include<stdio.h>

int checkPerfect(int);

void main()
{
    int n,res;

    printf("Enter Number: ");
    scanf("%d",&n);

    res=checkPerfect(n);

    if(res==1)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}

int checkPerfect(int n)
{
    int i,sum=0;

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