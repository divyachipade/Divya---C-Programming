#include<stdio.h>

int checkPalindrome(int);

void main()
{
    int n,res;

    printf("Enter Number: ");
    scanf("%d",&n);

    res=checkPalindrome(n);

    if(res==1)
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");
}

int checkPalindrome(int n)
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
        return 1;
    else
        return 0;
}