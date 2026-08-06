#include<stdio.h>

int greatest();

void main()
{
    int ans;

    ans=greatest();

    printf("%d is Greatest",ans);
}

int greatest()
{
    int a,b,c;

    printf("Enter Three Numbers: ");
    scanf("%d%d%d",&a,&b,&c);

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