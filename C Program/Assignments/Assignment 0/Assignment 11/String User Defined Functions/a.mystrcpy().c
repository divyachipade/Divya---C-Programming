#include<stdio.h>

void mystrcpy(char dest[], char src[]);

int main()
{
    char src[20], dest[20];

    printf("Enter Source String: ");
    gets(src);

    mystrcpy(dest, src);

    printf("Copied String = %s", dest);

    return 0;
}

void mystrcpy(char dest[], char src[])
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}