#include<stdio.h>

char *mystrnstr(char str[], char sub[], int n);

int main()
{
    char str[50], sub[20];
    char *p;
    int n;

    printf("Enter Main String: ");
    gets(str);

    printf("Enter Sub String: ");
    gets(sub);

    printf("Enter Limit: ");
    scanf("%d",&n);

    p = mystrnstr(str,sub,n);

    if(p!=NULL)
        printf("Substring Found : %s",p);
    else
        printf("Substring Not Found");

    return 0;
}

char *mystrnstr(char str[], char sub[], int n)
{
    int i,j;

    for(i=0;i<n && str[i]!='\0';i++)
    {
        j=0;

        while(sub[j]!='\0' && str[i+j]==sub[j] && (i+j)<n)
        {
            j++;
        }

        if(sub[j]=='\0')
            return &str[i];
    }

    return NULL;
}