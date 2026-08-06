#include<stdio.h>

int greatest(int,int,int);

void main()
{
    int a,b,c,ans;

    printf("Enter Three Numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    ans=greatest(a,b,c);

    printf("%d is Greatest",ans);
}

int greatest(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
            return a;
        else
            return c;
    }
    else
    {
        if(b>c)
            return b;
        else
            return c;
    }
}