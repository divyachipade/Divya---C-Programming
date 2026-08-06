#include<stdio.h>

void mystrncat(char dest[], char src[], int n);

int main()
{
    char dest[50], src[20];
    int n;

    printf("Enter First String: ");
    gets(dest);

    printf("Enter Second String: ");
    gets(src);

    printf("Enter Number of Characters: ");
    scanf("%d",&n);

    mystrncat(dest,src,n);

    printf("Concatenated String = %s",dest);

    return 0;
}

void mystrncat(char dest[], char src[], int n)
{
    int i=0,j=0;

    while(dest[i]!='\0')
    {
        i++;
    }

    while(src[j]!='\0' && j<n)
    {
        dest[i]=src[j];
        i++;
        j++;
    }

    dest[i]='\0';
}