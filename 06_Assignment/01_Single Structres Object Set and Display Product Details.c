#include<stdio.h>
#include<conio.h>

struct Product
{
    int P_ID;
    char P_Name[20];
    float P_Price;
    float P_S_Price;
};
int main()
{
    struct Product Prod;

    Prod.P_ID = 2247;
    strcpy(Prod.P_Name,"ASUA_Laptop");
    Prod.P_Price = 750000;
    Prod.P_S_Price = 800000;

    printf("\n Display product Detail => \n ");

    printf("\n  Product Name  = %s;",Prod.P_Name);
    printf("\n  Product ID  = %d;",Prod.P_ID);
    printf("\n  Product Price  = %4.2f;",Prod.P_Price);
    printf("\n  Product Selling Price  = %4.2f;",Prod.P_S_Price);

    getch();
    return 0;
}




