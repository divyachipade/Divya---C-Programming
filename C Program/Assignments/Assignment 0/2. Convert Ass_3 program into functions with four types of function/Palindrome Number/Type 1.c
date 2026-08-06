#include<stdio.h>

void checkPalindrome();

void main()
{
    checkPalindrome();
}

void checkPalindrome()
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
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");
}