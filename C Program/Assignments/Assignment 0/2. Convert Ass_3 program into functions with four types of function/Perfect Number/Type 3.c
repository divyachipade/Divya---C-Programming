#include<stdio.h>

void checkPerfect(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    checkPerfect(n);
}

void checkPerfect(int n)
{
    int i,sum=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }

    if(sum==n)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}