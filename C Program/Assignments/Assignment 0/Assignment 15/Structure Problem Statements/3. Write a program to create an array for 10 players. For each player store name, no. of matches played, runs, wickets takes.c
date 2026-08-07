#include<stdio.h>

typedef struct Player
{
    char name[30];
    int matches;
    int runs;
    int wickets;
}Player;

// Function Declarations
void accept(Player p[], int size);
void display(Player p[], int size);
void maximum(Player p[], int size);

int main()
{
    Player p[10];

    accept(p,10);

    printf("\n\n===== Player Information =====\n");
    display(p,10);

    maximum(p,10);

    return 0;
}

// Accept Player Details
void accept(Player p[], int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Details of Player %d\n",i+1);

        printf("Enter Name : ");
        scanf("%s",p[i].name);

        printf("Enter Matches Played : ");
        scanf("%d",&p[i].matches);

        printf("Enter Runs : ");
        scanf("%d",&p[i].runs);

        printf("Enter Wickets : ");
        scanf("%d",&p[i].wickets);
    }
}

// Display All Players
void display(Player p[], int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nPlayer %d",i+1);
        printf("\nName     : %s",p[i].name);
        printf("\nMatches  : %d",p[i].matches);
        printf("\nRuns     : %d",p[i].runs);
        printf("\nWickets  : %d\n",p[i].wickets);
    }
}

// Maximum Runs and Wickets
void maximum(Player p[], int size)
{
    int i;
    int maxRun = 0;
    int maxWicket = 0;

    for(i=1;i<size;i++)
    {
        if(p[i].runs > p[maxRun].runs)
            maxRun = i;

        if(p[i].wickets > p[maxWicket].wickets)
            maxWicket = i;
    }

    printf("\n===== Player with Maximum Runs =====");
    printf("\nName     : %s",p[maxRun].name);
    printf("\nMatches  : %d",p[maxRun].matches);
    printf("\nRuns     : %d",p[maxRun].runs);
    printf("\nWickets  : %d\n",p[maxRun].wickets);

    printf("\n===== Player with Maximum Wickets =====");
    printf("\nName     : %s",p[maxWicket].name);
    printf("\nMatches  : %d",p[maxWicket].matches);
    printf("\nRuns     : %d",p[maxWicket].runs);
    printf("\nWickets  : %d\n",p[maxWicket].wickets);
}