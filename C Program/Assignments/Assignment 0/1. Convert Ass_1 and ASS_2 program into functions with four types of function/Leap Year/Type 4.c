#include<stdio.h>

int leapYear(int);

void main()
{
    int year, ans;

    printf("Enter Year: ");
    scanf("%d",&year);

    ans = leapYear(year);

    if(ans == 1)
        printf("Leap Year");
    else
        printf("Not Leap Year");
}

int leapYear(int year)
{
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}