#include<stdio.h>

void mystrcat(char dest[], char src[]);

int main()
{
    char str1[50], str2[20];

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    mystrcat(str1, str2);

    printf("Concatenated String = %s", str1);

    return 0;
}
void mystrcat(char dest[], char src[])
{
    int i = 0, j = 0;

    while(dest[i] != '\0')
    {
        i++;
    }

    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}