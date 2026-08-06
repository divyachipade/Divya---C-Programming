#include<stdio.h>

void checkPrime(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    checkPrime(n);
}

void checkPrime(int n)
{
    int i,flag=1;

    if(n<=1)
        flag=0;
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
    }

    if(flag==1)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}