#include<stdio.h>

int checkStrong(int);

void main()
{
    int n,res;

    printf("Enter Number: ");
    scanf("%d",&n);

    res=checkStrong(n);

    if(res==1)
        printf("Strong Number");
    else
        printf("Not Strong Number");
}

int checkStrong(int n)
{
    int temp,rem,sum=0,i,fact;

    temp=n;

    while(n>0)
    {
        rem=n%10;
        fact=1;

        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        n=n/10;
    }

    if(sum==temp)
        return 1;
    else
        return 0;
}