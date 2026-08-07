#include<stdio.h>

typedef struct Product
{
    int id;
    char name[20];
    int quantity;
    float price;
}Product;
void store(Product *p);
void displayByValue(Product p);
void displayByAddress(Product *p);

void storeArray(Product arr[], int size);
void displayArray(Product arr[], int size);

int main()
{
    Product p1;
    Product arr[3];

    printf("========== Single Product ==========\n");

    store(&p1);

    printf("\n----- Pass By Value -----\n");
    displayByValue(p1);

    printf("\n----- Pass By Address -----\n");
    displayByAddress(&p1);

    printf("\n========== Array of Products ==========\n");

    storeArray(arr,3);

    printf("\n----- Display Array -----\n");
    displayArray(arr,3);

    return 0;
}

void store(Product *p)
{
    printf("Enter Product ID : ");
    scanf("%d",&p->id);

    printf("Enter Product Name : ");
    scanf("%s",p->name);

    printf("Enter Quantity : ");
    scanf("%d",&p->quantity);

    printf("Enter Price : ");
    scanf("%f",&p->price);
}

void displayByValue(Product p)
{
    printf("ID       : %d\n",p.id);
    printf("Name     : %s\n",p.name);
    printf("Quantity : %d\n",p.quantity);
    printf("Price    : %.2f\n",p.price);
}

void displayByAddress(Product *p)
{
    printf("ID       : %d\n",p->id);
    printf("Name     : %s\n",p->name);
    printf("Quantity : %d\n",p->quantity);
    printf("Price    : %.2f\n",p->price);
}

void storeArray(Product arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nEnter Product %d Details\n",i+1);

        printf("ID : ");
        scanf("%d",&arr[i].id);

        printf("Name : ");
        scanf("%s",arr[i].name);

        printf("Quantity : ");
        scanf("%d",&arr[i].quantity);

        printf("Price : ");
        scanf("%f",&arr[i].price);
    }
}

void displayArray(Product arr[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("\nProduct %d Details\n",i+1);

        printf("ID       : %d\n",arr[i].id);
        printf("Name     : %s\n",arr[i].name);
        printf("Quantity : %d\n",arr[i].quantity);
        printf("Price    : %.2f\n",arr[i].price);
    }
}