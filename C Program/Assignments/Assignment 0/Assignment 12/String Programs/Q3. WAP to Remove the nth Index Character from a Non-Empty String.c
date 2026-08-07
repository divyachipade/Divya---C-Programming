#include<stdio.h>

int main()
{
    char str[100];
    int i, index;

    printf("Enter String: ");
    gets(str);

    printf("Enter Index to Remove: ");
    scanf("%d", &index);

    for(i = index; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }

    printf("String After Removing Character = %s", str);

    return 0;
}