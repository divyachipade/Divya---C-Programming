#include<stdio.h>

int main()
{
    char str[100], ch;
    int i, found = 0;

    printf("Enter String: ");
    gets(str);

    printf("Enter Character to Search: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("Character '%c' Found at Index %d", ch, i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Character Not Found");
    }

    return 0;
}