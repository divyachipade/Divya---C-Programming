#include<stdio.h>

typedef struct Time
{
    int hrs;
    int min;
    int sec;
}Time;
void accept(Time *t);
void display(Time t);
Time addTime(Time t1, Time t2);
int convertToSeconds(Time t);

int main()
{
    Time t1, t2, result;

    printf("Enter First Time\n");
    accept(&t1);

    printf("\nEnter Second Time\n");
    accept(&t2);

    printf("\nFirst Time : ");
    display(t1);

    printf("\nSecond Time : ");
    display(t2);

    result = addTime(t1, t2);

    printf("\nAddition of Two Times : ");
    display(result);

    printf("\nFirst Time in Seconds = %d", convertToSeconds(t1));
    printf("\nSecond Time in Seconds = %d", convertToSeconds(t2));

    return 0;
}

// Accept Time
void accept(Time *t)
{
    printf("Enter Hours : ");
    scanf("%d",&t->hrs);

    printf("Enter Minutes : ");
    scanf("%d",&t->min);

    printf("Enter Seconds : ");
    scanf("%d",&t->sec);
}

void display(Time t)
{
    printf("%02d:%02d:%02d\n",t.hrs,t.min,t.sec);
}

Time addTime(Time t1, Time t2)
{
    Time temp;

    temp.sec = t1.sec + t2.sec;
    temp.min = t1.min + t2.min;
    temp.hrs = t1.hrs + t2.hrs;

    if(temp.sec >= 60)
    {
        temp.min = temp.min + temp.sec / 60;
        temp.sec = temp.sec % 60;
    }

    if(temp.min >= 60)
    {
        temp.hrs = temp.hrs + temp.min / 60;
        temp.min = temp.min % 60;
    }

    return temp;
}
int convertToSeconds(Time t)
{
    return (t.hrs * 3600) + (t.min * 60) + t.sec;
}