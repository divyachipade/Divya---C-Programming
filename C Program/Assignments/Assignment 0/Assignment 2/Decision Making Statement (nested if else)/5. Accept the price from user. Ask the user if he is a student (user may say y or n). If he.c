#include<stdio.h>

int main()
{
	int price , discount;
	char ch;
	
	printf("Enter Price: ");
	scanf("%d", &price);
	
	printf("Are You Student? (y/n): ");
	scanf(" %c",&ch);
	
	if(ch == 'y' || ch == 'Y')
	{
		if(price > 500)
		{
			printf("20% Discount");
		}
		else
		{
			printf("10% Discount");
		}
	}
	else
	{
		if(price > 600)
		{
			printf("15% Discount");
		}
		else
		{
			printf("No Discount");
		}
	}
}