#include<stdio.h>

char* mystrchr(char str[], char ch);

int main()
{
    char str[50], ch;
    char *p;

    printf("Enter String: ");
    gets(str);

    printf("Enter Character: ");
    scanf("%c", &ch);

    p = mystrchr(str, ch);

    if(p != NULL)
        printf("Character Found : %s", p);
    else
        printf("Character Not Found");

    return 0;
}

char* mystrchr(char str[], char ch)
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            return &str[i];
    }

    return NULL;
}