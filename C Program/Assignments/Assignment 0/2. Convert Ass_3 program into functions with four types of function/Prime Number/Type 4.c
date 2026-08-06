#include<stdio.h>

int checkPrime(int);

void main()
{
    int n,res;

    printf("Enter Number: ");
    scanf("%d",&n);

    res=checkPrime(n);

    if(res==1)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}

int checkPrime(int n)
{
    int i;

    if(n<=1)
        return 0;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }

    return 1;
}