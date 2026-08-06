#include<stdio.h>

int mystrncmp(char str1[], char str2[], int n);

int main()
{
    char str1[20], str2[20];
    int n, result;

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    printf("Enter Number of Characters: ");
    scanf("%d",&n);

    result = mystrncmp(str1,str2,n);

    if(result==0)
        printf("First %d Characters are Equal",n);
    else
        printf("First %d Characters are Not Equal",n);

    return 0;
}

int mystrncmp(char str1[], char str2[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(str1[i]!=str2[i])
            return str1[i]-str2[i];

        if(str1[i]=='\0' || str2[i]=='\0')
            break;
    }

    return 0;
}