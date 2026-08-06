#include<stdio.h>

int checkStrong();

void main()
{
    int res;

    res=checkStrong();

    if(res==1)
        printf("Strong Number");
    else
        printf("Not Strong Number");
}

int checkStrong()
{
    int n,temp,rem,sum=0,i,fact;

    printf("Enter Number: ");
    scanf("%d",&n);

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