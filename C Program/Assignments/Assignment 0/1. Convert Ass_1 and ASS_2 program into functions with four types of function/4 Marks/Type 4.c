#include<stdio.h>

int checkResult(int);

void main()
{
    int marks,res;

    printf("Enter Marks: ");
    scanf("%d",&marks);

    res=checkResult(marks);

    if(res==1)
        printf("Distinction");
    else if(res==2)
        printf("First Class");
    else if(res==3)
        printf("Second Class");
    else if(res==4)
        printf("Pass Class");
    else
        printf("Fail");
}

int checkResult(int marks)
{
    if(marks>75)
        return 1;
    else if(marks>65)
        return 2;
    else if(marks>55)
        return 3;
    else if(marks>=40)
        return 4;
    else
        return 5;
}