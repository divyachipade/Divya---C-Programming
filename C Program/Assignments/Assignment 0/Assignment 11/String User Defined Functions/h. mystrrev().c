#include<stdio.h>

void mystrrev(char str[]);

int main()
{
    char str[20];

    printf("Enter String: ");
    gets(str);

    mystrrev(str);

    printf("Reversed String = %s", str);

    return 0;
}

void mystrrev(char str[])
{
    int i, j = 0;
    char temp;

    while(str[j] != '\0')
    {
        j++;
    }

    j--;

    for(i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}