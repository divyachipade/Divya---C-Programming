#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "ABC";
    char str2[] = "ABD";

    printf("%d", memcmp(str1, str2, 3));

    return 0;
}