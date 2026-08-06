#include<stdio.h>
#include<string.h>

int main()
{
    char dest[20];
    char src[]="Hello";

    strcpy(dest,src);

    printf("Copied String: %s",dest);

    return 0;
}