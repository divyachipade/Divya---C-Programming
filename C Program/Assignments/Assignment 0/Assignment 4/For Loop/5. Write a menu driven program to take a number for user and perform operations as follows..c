#include<stdio.h>

void main()
{
    int choice, num, temp, rem, rev = 0, sum = 0;
    int i, count = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("\nMenu\n");
    printf("1. Even or Odd\n");
    printf("2. Prime or Not\n");
    printf("3. Palindrome or Not\n");
    printf("4. Positive, Negative or Zero\n");
    printf("5. Reverse Number\n");
    printf("6. Sum of Digits\n");

    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(num % 2 == 0)
                printf("Even Number");
            else
                printf("Odd Number");
            break;

        case 2:
            count = 0;

            for(i = 2; i < num; i++)
            {
                if(num % i == 0)
                {
                    count++;
                }
            }

            if(count == 0 && num > 1)
                printf("Prime Number");
            else
                printf("Not Prime Number");
            break;

        case 3:
            temp = num;
            rev = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            if(rev == num)
                printf("Palindrome Number");
            else
                printf("Not Palindrome Number");
            break;

        case 4:
            if(num > 0)
                printf("Positive Number");
            else if(num < 0)
                printf("Negative Number");
            else
                printf("Zero");
            break;

        case 5:
            temp = num;
            rev = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            printf("Reverse = %d", rev);
            break;

        case 6:
            temp = num;
            sum = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }

            printf("Sum of Digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }
}