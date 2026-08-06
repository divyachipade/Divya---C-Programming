#include<stdio.h>

void main()
{
	int arr[5] = { 1,2,3,4,5};
	int brr[5] = {22,33,44,55,66};
	int i;
	int crr[10];
	
	for(i = 0; i < 5; i++)
	{
		crr[i] = arr[i];
	}
	for(i = 0; i < 5; i++)
	{
		crr[i + 5] = brr[i];
	}
	 printf("Merged Array: ");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", crr[i]);
    }
}