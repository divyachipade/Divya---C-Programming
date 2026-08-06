#include<stdio.h>

int checkArmstrong(int);

void main()
{
    int n,res;

    printf("Enter Number: ");
    scanf("%d",&n);

    res=checkArmstrong(n);

    if(res==1)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
}

int checkArmstrong(int n)
{
    int temp,rem,sum=0;

    temp=n;

    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }

    if(temp==sum)
        return 1;
    else
        return 0;
}