#include<stdio.h>

int main()
{
    char str[100], newStr[100];
    int i = 0, len = 0;
    char temp;

    printf("Enter String: ");
    gets(str);

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = 0; i <= len; i++)
    {
        newStr[i] = str[i];
    }

    temp = newStr[0];
    newStr[0] = newStr[len - 1];
    newStr[len - 1] = temp;

    printf("New String = %s", newStr);

    return 0;
}