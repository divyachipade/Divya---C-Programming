#include<stdio.h>

void main()
{
	int arr[5]={10,20,30,40,50};
	int sum;
	int i;
	
	for(i = 0; i < 5; i++)
	{
		sum = sum + arr[i];
	}

	    printf("Sum Of All Numbers %d", sum);
	}
