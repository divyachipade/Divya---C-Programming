#include<stdio.h>

typedef struct Product
{
    char name[30];
    float price;
    int quantity;
}Product;

// Function Declarations
void accept(Product p[], int size);
void display(Product p[], int size);
float totalBill(Product p[], int size);

int main()
{
    Product p[10];
    int n;
    float total;

    printf("How many products do you want to buy (Max 10): ");
    scanf("%d",&n);

    accept(p,n);

    printf("\n\n========== BILL ==========\n");

    display(p,n);

    total = totalBill(p,n);

    printf("\n----------------------------");
    printf("\nTotal Bill = %.2f",total);
    printf("\n----------------------------");

    return 0;
}

// Accept Product Details
void accept(Product p[], int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Details of Product %d\n",i+1);

        printf("Product Name : ");
        scanf("%s",p[i].name);

        printf("Price : ");
        scanf("%f",&p[i].price);

        printf("Quantity : ");
        scanf("%d",&p[i].quantity);
    }
}

// Display Products
void display(Product p[], int size)
{
    int i;

    printf("\nName\tPrice\tQuantity\tAmount\n");

    for(i=0;i<size;i++)
    {
        printf("%s\t%.2f\t%d\t\t%.2f\n",
               p[i].name,
               p[i].price,
               p[i].quantity,
               p[i].price * p[i].quantity);
    }
}

// Calculate Total Bill
float totalBill(Product p[], int size)
{
    int i;
    float total = 0;

    for(i=0;i<size;i++)
    {
        total = total + (p[i].price * p[i].quantity);
    }

    return total;
}