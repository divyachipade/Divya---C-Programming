#include<stdio.h>

int evenOdd();

void main()
{
    int ans;

    ans = evenOdd();

    if(ans==1)
        printf("Even");
    else
        printf("Odd");
}

int evenOdd()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    if(n%2==0)
        return 1;
    else
        return 0;
}