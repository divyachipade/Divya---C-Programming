#include<stdio.h>

char *mystrrchr(char str[], char ch);

int main()
{
    char str[50], ch;
    char *p;

    printf("Enter String: ");
    gets(str);

    printf("Enter Character: ");
    scanf("%c", &ch);

    p = mystrrchr(str, ch);

    if(p != NULL)
        printf("Character Found : %s", p);
    else
        printf("Character Not Found");

    return 0;
}

char *mystrrchr(char str[], char ch)
{
    int i = 0;
    char *p = NULL;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            p = &str[i];

        i++;
    }

    return p;
}