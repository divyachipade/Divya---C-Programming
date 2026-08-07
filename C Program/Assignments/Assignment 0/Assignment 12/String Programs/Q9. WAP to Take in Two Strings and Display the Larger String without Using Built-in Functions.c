#include<stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    while(str1[i] != '\0')
    {
        i++;
    }

    while(str2[j] != '\0')
    {
        j++;
    }

    if(i > j)
        printf("Larger String = %s", str1);
    else if(j > i)
        printf("Larger String = %s", str2);
    else
        printf("Both Strings are Equal in Length");

    return 0;
}