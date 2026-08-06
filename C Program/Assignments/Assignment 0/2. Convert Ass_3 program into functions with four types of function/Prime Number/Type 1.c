#include<stdio.h>

void checkPrime();

void main()
{
    checkPrime();
}

void checkPrime()
{
    int n,i,flag=1;

    printf("Enter Number: ");
    scanf("%d",&n);

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