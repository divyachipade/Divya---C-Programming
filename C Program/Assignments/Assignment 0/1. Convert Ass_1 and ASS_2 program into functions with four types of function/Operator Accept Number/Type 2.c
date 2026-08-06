#include<stdio.h>

int calculator();

void main()
{
    int result;

    result=calculator();

    printf("Result = %d",result);
}

int calculator()
{
    int a,b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Enter Operator (+,-,*,/,%%): ");
    scanf(" %c",&op);

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