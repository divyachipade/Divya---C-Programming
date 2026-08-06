#include<stdio.h>

void vote();

void main()
{
    vote();
}

void vote()
{
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    if(age >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");
}