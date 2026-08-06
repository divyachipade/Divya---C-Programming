#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "abcdef123";
    char str2[] = "123";

    printf("%d", strcspn(str1, str2));

    return 0;
}