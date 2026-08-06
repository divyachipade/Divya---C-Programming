#include<stdio.h>

int calculator(int,int,char);

void main()
{
    int a,b,result;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Enter Operator (+,-,*,/,%%): ");
    scanf(" %c",&op);

    result=calculator(a,b,op);

    if(op=='/')
        printf("Division = %d",result);
    else
        printf("Result = %d",result);
}

int calculator(int a,int b,char op)
{
    switch(op)
    {
        case '+':
            return a+b;

        case '-':
            return a-b;

        case '*':
            return a*b;

        case '/':
            return a/b;

        case '%':
            return a%b;

        default:
            printf("Invalid Operator");
            return 0;
    }
}