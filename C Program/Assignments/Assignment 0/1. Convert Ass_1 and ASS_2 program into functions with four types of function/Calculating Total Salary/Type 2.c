#include<stdio.h>

void salary(float);

void main()
{
    float basic;

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    salary(basic);
}

void salary(float basic)
{
    float da, ta, hra, total;

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

    total = basic + da + ta + hra;

    printf("Total Salary = %.2f", total);
}