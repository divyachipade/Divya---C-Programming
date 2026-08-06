#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "abcde123";
    char str2[] = "abcde";

    printf("%d", strspn(str1, str2));

    return 0;
}