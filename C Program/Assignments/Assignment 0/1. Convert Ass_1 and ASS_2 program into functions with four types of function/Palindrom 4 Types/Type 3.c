#include<stdio.h>

int palindrome();

void main()
{
    int ans;

    ans = palindrome();

    if(ans == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

int palindrome()
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
        return 1;
    else
        return 0;
}