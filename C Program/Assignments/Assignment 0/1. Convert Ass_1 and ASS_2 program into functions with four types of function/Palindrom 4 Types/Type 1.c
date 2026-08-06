#include<stdio.h>

void palindrome();

void main()
{
    palindrome();
}

void palindrome()
{
    int n, temp, rem, rev = 0;

    printf("Enter 3 Digit Number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}