#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


struct Product
{
    int P_Id;
    char P_Name[20];
    float P_P_Price;
    float P_S_Price;
};

int main()
{

    struct Product Prod1,Prod2, Prod3;

    Prod1.P_Id = 17;
    strcpy(Prod1.P_Name,"Laptop");
    Prod1.P_P_Price = 77000.00;
    Prod1.P_S_Price = 80000.00;

    Prod2.P_Id = 55;
    strcpy(Prod2.P_Name,"Phone");
    Prod2.P_P_Price = 5500.00;
    Prod2.P_S_Price = 6000.00;

    Prod3.P_Id = 27;
    strcpy(Prod3.P_Name,"Router");
    Prod3.P_P_Price = 2000.00;
    Prod3.P_S_Price = 2500.00;

    printf("\n Product Details =>\n");
    getch();
    printf("\n Product Id  => %d",Prod1.P_Id);
    printf("\n Product Name => %s",Prod1.P_Name);
    printf("\n Product Purchase Price => %f",Prod1.P_P_Price);
    printf("\n Produce Sales Price => %f ",Prod1.P_S_Price);

    printf("\n\n ====================******==================== \n");

    getch();
    printf("\n Product Id => %d",Prod2.P_Id);
    printf("\n Product Name => %s",Prod2.P_Name);
    printf("\n Product Purchase Price => %f",Prod2.P_P_Price);
    printf("\n Produce Sales Price => %f ",Prod2.P_S_Price);

    printf("\n\n ====================******==================== \n");

    getch();
    printf("\n Product Id => %d",Prod3.P_Id);
    printf("\n Product Name => %s",Prod3.P_Name);
    printf("\n Product Purchase Price => %f",Prod3.P_P_Price);
    printf("\n Produce Sales Price => %f ",Prod3.P_S_Price);

    printf("\n\n ====================******==================== \n");

    getch();
    return 0;
}
