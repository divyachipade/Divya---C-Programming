#include<stdio.h>

void main()
{
	int age;
	
	printf("Enter Age: ");
	scanf("%d",&age);
	
	if(age >= 18)
	{
		printf("Eligible");
	}
	else
	{
		printf("Not Eligible");
	}
}