#include<stdio.h>

void salary();

void main()
{
    salary();
}

void salary()
{
    float basic, da, ta, hra, total;

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

    total = basic + da + ta + hra;

    printf("Total Salary = %.2f", total);
}