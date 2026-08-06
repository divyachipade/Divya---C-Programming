#include<stdio.h>

float salary(float);

void main()
{
    float basic, total;

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    total = salary(basic);

    printf("Total Salary = %.2f", total);
}

float salary(float basic)
{
    float da, ta, hra;

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