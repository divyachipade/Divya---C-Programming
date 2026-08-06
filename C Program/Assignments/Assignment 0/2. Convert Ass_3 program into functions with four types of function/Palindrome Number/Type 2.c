#include<stdio.h>

int checkPalindrome();

void main()
{
    int res;

    res=checkPalindrome();

    if(res==1)
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");
}

int checkPalindrome()
{
    int n,temp,rev=0,rem;

    printf("Enter Number: ");
    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(temp==rev)
        return 1;
    else
        return 0;
}