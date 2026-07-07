#include<stdio.h>

int main()
{
	int num1, num2;
	char op;
	
	printf("Enter two Numbers: ");
	scanf("%d%d",&num1,&num2);
	
	printf("Enter operator (+,-,/,*,%%): ");
	scanf(" %c",&op);
	
	if(op == '+')
	{
		printf("%d", num1 + num2);
	}
	else if(op == '-')
	{
		printf("%d", num1 - num2);
	}
	else if(op == '/')
	{
		printf("%d", num1 / num2);
	}
	else if(op == '*')
	{
		printf("%d", num1 * num2);
	}
	else if(op == '%')
	{
		printf("%d", num1 % num2);
	}
	else
	{
		printf("Invalid Operator: ");
	}
}