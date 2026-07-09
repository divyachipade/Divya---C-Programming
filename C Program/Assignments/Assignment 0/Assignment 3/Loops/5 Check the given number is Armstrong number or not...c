#include<stdio.h>

void main()
{
	int n = 153;
	int temp = n;
	int rem;
	int sum = 0;
	
	while(temp > 0)
	{
		rem = temp % 10;
	    sum = sum + rem * rem * rem;
		temp = temp / 10;
	}
	if(sum == n)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not Armstrong");
	}
	
}