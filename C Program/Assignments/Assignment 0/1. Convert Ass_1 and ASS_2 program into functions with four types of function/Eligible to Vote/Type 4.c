#include<stdio.h>

int vote(int);

void main()
{
    int age, ans;

    printf("Enter Age: ");
    scanf("%d",&age);

    ans = vote(age);

    if(ans == 1)
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");
}

int vote(int age)
{
    if(age >= 18)
        return 1;
    else
        return 0;
}