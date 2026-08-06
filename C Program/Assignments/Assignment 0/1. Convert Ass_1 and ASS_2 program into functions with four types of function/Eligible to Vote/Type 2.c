#include<stdio.h>

void vote(int);

void main()
{
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    vote(age);
}

void vote(int age)
{
    if(age >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");
}