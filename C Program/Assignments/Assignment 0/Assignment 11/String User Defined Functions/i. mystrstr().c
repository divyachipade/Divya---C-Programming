#include<stdio.h>

char* mystrstr(char str[], char sub[]);

int main()
{
    char str[50], sub[20];
    char *p;

    printf("Enter Main String: ");
    gets(str);

    printf("Enter Sub String: ");
    gets(sub);

    p = mystrstr(str, sub);

    if(p != NULL)
        printf("Substring Found : %s", p);
    else
        printf("Substring Not Found");

    return 0;
}

char* mystrstr(char str[], char sub[])
{
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i+j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0')
            return &str[i];
    }

    return NULL;
}