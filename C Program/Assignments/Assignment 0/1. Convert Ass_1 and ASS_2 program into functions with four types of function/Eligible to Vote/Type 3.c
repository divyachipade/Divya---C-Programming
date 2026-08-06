#include<stdio.h>

int vote();

void main()
{
    int ans;

    ans = vote();

    if(ans == 1)
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");
}

int vote()
{
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    if(age >= 18)
        return 1;
    else
        return 0;
}