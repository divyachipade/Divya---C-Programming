#include<stdio.h>

int main()
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