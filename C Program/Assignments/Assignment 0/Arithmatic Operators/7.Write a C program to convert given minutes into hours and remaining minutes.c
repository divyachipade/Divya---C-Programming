#include<stdio.h>

int main()
{
	int minutes = 130;
	int hours,rem;
	
	hours = minutes / 60;
	rem = minutes % 60;
	
	printf("Hours = %d\n", hours);
	printf("Remaining Minutes = %d", rem);
}