#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "FirstBit";

    memset(str, '*', 5);

    printf("%s", str);

    return 0;
}