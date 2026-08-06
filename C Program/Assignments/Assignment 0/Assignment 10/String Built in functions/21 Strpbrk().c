#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "FirstBit";
    char str2[] = "xyzBi";

    printf("%s", strpbrk(str1, str2));

    return 0;
}