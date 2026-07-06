#include<stdio.h>

int main()
{
	int basic, da, ta, hra, total;
	
	printf("Enter Basic Salary: ");
	scanf("%d",&basic);
	
	if(basic <= 5000)
	{
	da = (basic *10)/100;
    ta=(basic * 20)/100;
	hra = (basic * 25)/100;
	total =(basic + da + ta + hra);
	
	printf("Total Salary = %d", total);
	}
	else
	{
	da = (basic *15)/100;
    ta=(basic * 25)/100;
	hra = (basic * 30)/100;
	total =(basic + da + ta + hra);
	
	printf("Total Salary = %d", total);
		
	}
	
}