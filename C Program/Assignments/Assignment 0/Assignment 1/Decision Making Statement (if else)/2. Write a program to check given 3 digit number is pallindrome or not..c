#include<stdio.h>

int main()
{
	int num = 121, first, middle, last, reverse;
	
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
