#include<stdio.h>

int evenOdd(int);

void main()
{
    int n,ans;

    printf("Enter Number: ");
    scanf("%d",&n);

    ans = evenOdd(n);

    if(ans==1)
        printf("Even");
    else
        printf("Odd");
}

int evenOdd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}