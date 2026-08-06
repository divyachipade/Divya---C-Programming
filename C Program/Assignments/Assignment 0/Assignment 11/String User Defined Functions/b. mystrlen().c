#include<stdio.h>

int mystrlen(char str[]);

int main()
{
    char str[20];
    int len;

    printf("Enter String: ");
    gets(str);

    len = mystrlen(str);

    printf("Length = %d", len);

    return 0;
}

int mystrlen(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}