#include<stdio.h>

int checkCase(char);

void main()
{
    char ch;
    int ans;

    printf("Enter Character: ");
    scanf(" %c",&ch);

    ans = checkCase(ch);

    if(ans == 1)
        printf("Uppercase");
    else if(ans == 0)
        printf("Lowercase");
    else
        printf("Invalid Character");
}

int checkCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 0;
    else
        return -1;
}