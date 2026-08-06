#include<stdio.h>

int checkTriangle(int,int,int);

void main()
{
    int a,b,c,res;

    printf("Enter Three Sides: ");
    scanf("%d%d%d",&a,&b,&c);

    res=checkTriangle(a,b,c);

    if(res==1)
        printf("Equilateral Triangle");
    else if(res==2)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
}

int checkTriangle(int a,int b,int c)
{
    if(a==b && b==c)
        return 1;
    else if(a==b || b==c || a==c)
        return 2;
    else
        return 3;
}