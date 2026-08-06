#include<stdio.h>

int mystrcmp(char str1[], char str2[]);

int main()
{
    char str1[20], str2[20];
    int result;

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    result = mystrcmp(str1, str2);

    if(result == 0)
        printf("Strings are Equal");
    else if(result > 0)
        printf("First String is Greater");
    else
        printf("Second String is Greater");

    return 0;
}
int mystrcmp(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
            return str1[i] - str2[i];

        i++;
    }

    return str1[i] - str2[i];
}