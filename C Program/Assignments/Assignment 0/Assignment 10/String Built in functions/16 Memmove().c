#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "HelloWorld";

    memmove(str+5, str, 5);

    printf("%s", str);

    return 0;
}