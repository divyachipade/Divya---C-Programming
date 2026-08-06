#include<stdio.h>

float salary();

void main()
{
    float total;

    total = salary();

    printf("Total Salary = %.2f", total);
}

float salary()
{
    float basic, da, ta, hra;

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    if(basic <= 5000)
    {
        da = basic * 10 / 100;
        ta = basic * 20 / 100;
        hra = basic * 25 / 100;
    }
    else
    {
        da = basic * 15 / 100;
        ta = basic * 25 / 100;
        hra = basic * 30 / 100;
    }

    return basic + da + ta + hra;
}