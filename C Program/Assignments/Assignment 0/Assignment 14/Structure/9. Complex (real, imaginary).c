#include<stdio.h>

typedef struct Complex
{
    int real;
    int imaginary;
}Complex;
void store(Complex *c);
void displayByValue(Complex c);
void displayByAddress(Complex *c);

void storeArray(Complex arr[], int size);
void displayArray(Complex arr[], int size);

int main()
{
    Complex c1;
    Complex arr[3];

    printf("========== Single Complex ==========\n");

    store(&c1);

    printf("\n----- Pass By Value -----\n");
    displayByValue(c1);

    printf("\n----- Pass By Address -----\n");
    displayByAddress(&c1);

    printf("\n========== Array of Complex Numbers ==========\n");

    storeArray(arr,3);

    printf("\n----- Display Array -----\n");
    displayArray(arr,3);

    return 0;
}

void store(Complex *c)
{
    printf("Enter Real Part : ");
    scanf("%d",&c->real);

    printf("Enter Imaginary Part : ");
    scanf("%d",&c->imaginary);
}

void displayByValue(Complex c)
{
    printf("Complex Number = %d + %di\n",c.real,c.imaginary);
}

void displayByAddress(Complex *c)
{
    printf("Complex Number = %d + %di\n",c->real,c->imaginary);
}

void storeArray(Complex arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Complex Number %d\n",i+1);

        printf("Real : ");
        scanf("%d",&arr[i].real);

        printf("Imaginary : ");
        scanf("%d",&arr[i].imaginary);
    }
}

void displayArray(Complex arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nComplex %d = %d + %di\n",
               i+1,
               arr[i].real,
               arr[i].imaginary);
    }
}