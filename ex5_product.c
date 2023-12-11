#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 10

struct Product 
{
    char name[50];
    float price;
};

void displayProducts(struct Product products[], int size) {
    printf("\nList of Products:\n");
    printf("%-20s%-10s\n", "Product Name", "Price");
    printf("----------------------------\n");
    int i;
    for ( i = 0; i < size; ++i) {
        printf("%-20s$%-10.2f\n", products[i].name, products[i].price);
    }
}

int main()
{
    struct Product productList[MAX_PRODUCTS];
    
    strcpy(productList[0].name, "Laptop");
    productList[0].price = 799.99;
    
    strcpy(productList[1].name, "Smartphone");
    productList[1].price = 599.99;
    
    strcpy(productList[2].name, "Headphones");
    productList[2].price = 99.99;

    displayProducts(productList, 3);  

    return 0;
}
