#include<stdio.h>
#include<string.h>

typedef struct Movie
{
    char title[30];
    char director[30];
    int year;
    char genre[20];
}Movie;

// Function Declarations
void addMovies(Movie m[], int size);
void displayMovies(Movie m[], int size);
void searchMovie(Movie m[], int size);
void updateMovie(Movie m[], int size);

int main()
{
    Movie m[10];
    int n, choice;

    printf("How many movies do you want to add (Max 10): ");
    scanf("%d",&n);

    addMovies(m,n);

    do
    {
        printf("\n\n===== Movie Database =====");
        printf("\n1. Display All Movies");
        printf("\n2. Search Movie");
        printf("\n3. Update Movie");
        printf("\n0. Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                displayMovies(m,n);
                break;

            case 2:
                searchMovie(m,n);
                break;

            case 3:
                updateMovie(m,n);
                break;

            case 0:
                printf("\nProgram Ended...");
                break;

            default:
                printf("\nInvalid Choice!");
        }

    }while(choice!=0);

    return 0;
}

// Add Movies
void addMovies(Movie m[], int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Details of Movie %d\n",i+1);

        printf("Title : ");
        scanf("%s",m[i].title);

        printf("Director : ");
        scanf("%s",m[i].director);

        printf("Release Year : ");
        scanf("%d",&m[i].year);

        printf("Genre : ");
        scanf("%s",m[i].genre);
    }
}

// Display Movies
void displayMovies(Movie m[], int size)
{
    int i;

    printf("\n------ Movie List ------\n");

    for(i=0;i<size;i++)
    {
        printf("\nMovie %d",i+1);
        printf("\nTitle    : %s",m[i].title);
        printf("\nDirector : %s",m[i].director);
        printf("\nYear     : %d",m[i].year);
        printf("\nGenre    : %s\n",m[i].genre);
    }
}

// Search Movie
void searchMovie(Movie m[], int size)
{
    int i;
    char name[30];

    printf("Enter Movie Title to Search: ");
    scanf("%s",name);

    for(i=0;i<size;i++)
    {
        if(strcmp(m[i].title,name)==0)
        {
            printf("\nMovie Found");
            printf("\nTitle    : %s",m[i].title);
            printf("\nDirector : %s",m[i].director);
            printf("\nYear     : %d",m[i].year);
            printf("\nGenre    : %s\n",m[i].genre);
            return;
        }
    }

    printf("\nMovie Not Found!");
}

// Update Movie
void updateMovie(Movie m[], int size)
{
    int i;
    char name[30];

    printf("Enter Movie Title to Update: ");
    scanf("%s",name);

    for(i=0;i<size;i++)
    {
        if(strcmp(m[i].title,name)==0)
        {
            printf("Enter New Director : ");
            scanf("%s",m[i].director);

            printf("Enter New Release Year : ");
            scanf("%d",&m[i].year);

            printf("Enter New Genre : ");
            scanf("%s",m[i].genre);

            printf("\nMovie Updated Successfully!");
            return;
        }
    }

    printf("\nMovie Not Found!");
}