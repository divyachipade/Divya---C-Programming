#include<stdio.h>

void checkTriangle(int,int,int);

void main()
{
    int a,b,c;

    printf("Enter Three Sides: ");
    scanf("%d%d%d",&a,&b,&c);

    checkTriangle(a,b,c);
}

void checkTriangle(int a,int b,int c)
{
    if(a==b && b==c)
        printf("Equilateral Triangle");
    else if(a==b || b==c || a==c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
}