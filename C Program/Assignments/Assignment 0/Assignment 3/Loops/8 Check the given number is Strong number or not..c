#include<stdio.h>

void main()
{
	int n = 145;
	int temp = n;
	int rem;
	int sum = 0;
	
	while(temp > 0)
	{
		rem = temp % 10;
		int fact = 1;  
		int i = rem;
	while(i > 0)
		{
			fact = fact * i;
			i--;
		}

		sum = sum + fact;
		temp = temp / 10;
	}
	if(sum == n)
	{
		printf("Strong");
	}
	else
	{
		printf("Not Strong");
	}	
}
