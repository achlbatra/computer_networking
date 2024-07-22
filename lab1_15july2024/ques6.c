// create a structure of product with name, qty and price. input 2 products but print the higher one
#include<stdio.h>
struct product{
    char name[25];
    int qty;
    float price;
};
int main()
{
    struct product p1;
    struct product p2;
    printf("enter product 1 details : \n");
    printf("enter name : ");
    gets(p1.name);
    printf("enter quantity : ");
    scanf("%d", &p1.qty);
    printf("enter price : ");
    scanf("%f", &p1.price);
    printf("enter product 2 details : \n");
    printf("enter name : ");
    scanf("%s",&p2.name);
    printf("enter quantity : ");
    scanf("%d", &p2.qty);
    printf("enter price : ");
    scanf("%f", &p2.price);
    if(p1.price>p2.price)
    {
        printf("\nproduct name : %s\n", p1.name);
        printf("product qty : %d\n", p1.qty);
        printf("product price : Rs. %f\n", p1.price);
    }
    else
    {
        printf("product name : %s\n", p1.name);
        printf("product qty : %d\n", p1.qty);
        printf("product price : Rs. %f\n", p1.price);
    }
}