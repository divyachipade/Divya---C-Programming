#include<stdio.h>

int checkPrime();

void main()
{
    int res;

    res=checkPrime();

    if(res==1)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}

int checkPrime()
{
    int n,i;

    printf("Enter Number: ");
    scanf("%d",&n);

    if(n<=1)
        return 0;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }

    return 1;
}