#include<stdio.h>

int leapYear();

void main()
{
    int ans;

    ans = leapYear();

    if(ans == 1)
        printf("Leap Year");
    else
        printf("Not Leap Year");
}

int leapYear()
{
    int year;

    printf("Enter Year: ");
    scanf("%d",&year);

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}