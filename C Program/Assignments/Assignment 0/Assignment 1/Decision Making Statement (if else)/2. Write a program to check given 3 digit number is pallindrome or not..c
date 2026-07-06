#include<stdio.h>

int main()
{
	int num, first, middle, last, reverse;
	
	printf("Enter 3 digit number: ");
	scanf("%d",&num);
	
	first= num / 100;
	middle=(num / 10) % 10;
	last=num % 10;
	
	reverse = (last * 100) + (middle * 10) + first;
	
	if(num == reverse)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}