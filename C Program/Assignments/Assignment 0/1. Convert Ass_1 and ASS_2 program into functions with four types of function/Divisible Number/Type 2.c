#include<stdio.h>

int checkDivisible();

void main()
{
    int res;

    res=checkDivisible();

    if(res==1)
        printf("Divisible by both");
    else if(res==2)
        printf("Divisible by 3 but not by 5");
    else if(res==3)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}

int checkDivisible()
{
    int num;

    printf("Enter Number: ");
    scanf("%d",&num);

    if(num%3==0 && num%5==0)
        return 1;
    else if(num%3==0)
        return 2;
    else if(num%5==0)
        return 3;
    else
        return 4;
}