#include<stdio.h>

int main()
{
    char str[100], newStr[100];
    int i, j = 0;

    printf("Enter String: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(i % 2 == 0)
        {
            newStr[j] = str[i];
            j++;
        }
    }

    newStr[j] = '\0';

    printf("String After Removing Odd Index Characters = %s", newStr);

    return 0;
}