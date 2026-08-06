#include<stdio.h>

void mystrncpy(char dest[], char src[], int n);

int main()
{
    char src[20], dest[20];
    int n;

    printf("Enter Source String: ");
    gets(src);

    printf("Enter Number of Characters: ");
    scanf("%d", &n);

    mystrncpy(dest, src, n);

    printf("Copied String = %s", dest);

    return 0;
}

void mystrncpy(char dest[], char src[], int n)
{
    int i;

    for(i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0';
}