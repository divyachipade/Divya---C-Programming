#include<stdio.h>

int checkCase();

void main()
{
    int ans;

    ans = checkCase();

    if(ans == 1)
        printf("Uppercase");
    else if(ans == 0)
        printf("Lowercase");
    else
        printf("Invalid Character");
}

int checkCase()
{
    char ch;

    printf("Enter Character: ");
    scanf(" %c",&ch);

    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 0;
    else
        return -1;
}