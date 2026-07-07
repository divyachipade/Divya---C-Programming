#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter Three Number: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a > b)
	{
		if(a > c)
		{
			printf("A is Greatest");
		}
		else
		{
			printf("C is Greatest");
		}
	 } 
	 else
	 {
	 	if(b>c)
	 	{
	 		printf("B is Greatest");
		 }
		 else
		 {
		 	printf("C is Greatest");
		 }
	 }
}