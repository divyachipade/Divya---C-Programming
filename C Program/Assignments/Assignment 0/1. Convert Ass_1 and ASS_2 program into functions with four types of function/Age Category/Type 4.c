#include<stdio.h>

int checkAge(int);

void main()
{
    int age,res;

    printf("Enter Age: ");
    scanf("%d",&age);

    res=checkAge(age);

    if(res==1)
        printf("Child");
    else if(res==2)
        printf("Teenager");
    else if(res==3)
        printf("Adult");
    else
        printf("Senior");
}

int checkAge(int age)
{
    if(age<12)
        return 1;
    else if(age<=19)
        return 2;
    else if(age<=59)
        return 3;
    else
        return 4;
}