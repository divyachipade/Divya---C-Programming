#include<stdio.h>

void checkPalindrome(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    checkPalindrome(n);
}

void checkPalindrome(int n)
{
    int temp,rev=0,rem;

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