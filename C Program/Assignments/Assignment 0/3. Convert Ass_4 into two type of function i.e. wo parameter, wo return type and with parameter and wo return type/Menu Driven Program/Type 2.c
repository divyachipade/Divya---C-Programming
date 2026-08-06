#include<stdio.h>

void menu(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    menu(n);
}

void menu(int n)
{
    int choice,temp,rev=0,rem,sum=0,i,flag=1;

    printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome or Not");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse Number");
    printf("\n6. Sum of Digits");

    printf("\n\nEnter Choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            if(n%2==0)
                printf("Even Number");
            else
                printf("Odd Number");
            break;

        case 2:
            if(n<=1)
                flag=0;
            else
            {
                for(i=2;i<n;i++)
                {
                    if(n%i==0)
                    {
                        flag=0;
                        break;
                    }
                }
            }

            if(flag==1)
                printf("Prime Number");
            else
                printf("Not Prime Number");
            break;

        case 3:
            temp=n;

            while(temp>0)
            {
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }

            if(rev==n)
                printf("Palindrome Number");
            else
                printf("Not Palindrome Number");
            break;

        case 4:
            if(n>0)
                printf("Positive Number");
            else if(n<0)
                printf("Negative Number");
            else
                printf("Zero");
            break;

        case 5:
            temp=n;

            while(temp>0)
            {
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }

            printf("Reverse = %d",rev);
            break;

        case 6:
            temp=n;

            while(temp>0)
            {
                rem=temp%10;
                sum=sum+rem;
                temp=temp/10;
            }

            printf("Sum of Digits = %d",sum);
            break;

        default:
            printf("Invalid Choice");
    }
}