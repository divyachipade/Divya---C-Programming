#include<stdio.h>

void printArmstrong(int);

void main()
{
    int n;

    printf("Enter Limit: ");
    scanf("%d",&n);

    printArmstrong(n);
}

void printArmstrong(int n)
{
    int num,temp,rem,sum;

    printf("Armstrong Numbers are:\n");

    for(num=1; num<=n; num++)
    {
        temp=num;
        sum=0;

        while(temp>0)
        {
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;
        }

        if(sum==num)
            printf("%d ",num);
    }
}