#include<stdio.h>

void calculator();

void main()
{
    calculator();
}

void calculator()
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
            printf("Addition = %d",a+b);
            break;

        case '-':
            printf("Subtraction = %d",a-b);
            break;

        case '*':
            printf("Multiplication = %d",a*b);
            break;

        case '/':
            printf("Division = %.2f",(float)a/b);
            break;

        case '%':
            printf("Modulus = %d",a%b);
            break;

        default:
            printf("Invalid Operator");
    }
}