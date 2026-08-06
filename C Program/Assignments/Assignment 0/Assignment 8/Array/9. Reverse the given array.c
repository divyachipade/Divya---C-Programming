#include<stdio.h>

void main()
{
	int arr[5] = {1,2,3,4,5};
	int i;
	
	printf("Reverse Array ");
	
	for(i= 4; i >= 0; i--)
	{
		printf(" %d", arr[i]);
	}
	
}