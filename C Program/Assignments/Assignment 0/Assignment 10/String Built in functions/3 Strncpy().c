#include<stdio.h>
#include<string.h>

int main()
{
    char dest[20];
    char src[]="HelloWorld";

    strncpy(dest,src,5);
    dest[5]='\0';

    printf("Copied String: %s",dest);

    return 0;
}