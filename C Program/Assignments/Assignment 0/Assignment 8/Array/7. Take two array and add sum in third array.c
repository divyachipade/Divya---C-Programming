#include<stdio.h>

void main()
{
	int arr[5] = {1,2,3,4,5};
	int brr[5] = {11,22,33,44,55};
	int crr[5];
	int i;
	
	for(i = 0; i < 5; i++)
	{
		crr[i] = arr[i] + brr[i];
	}
	printf("Third Array \n");
	
	for(i = 0; i<5; i++)
	{
		printf(" %d ",crr[i]);
	}
}