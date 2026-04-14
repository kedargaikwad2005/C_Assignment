#include<stdio.h>
#include<conio.h>

int Num[5] = {};

void Accept_elements();
void Display_elements();

int main()
{
    Accept_elements();

    Display_elements();

    getch();
    return 0;
}

void Accept_elements()
{   int i = 0;

    printf("\n\n ========================= ***** ========================= \n");

    for(i = 0; i <= 5; i++)
    {
        printf("\n Enter Number %d : ",i+1);
        scanf("%d",&Num[i]);
    }

    printf("\n\n ========================= ***** ========================= \n");
}

void Display_elements()
{
    int i = 0;

    printf("\n\n ========================= ***** ========================= \n");

    for(i = 0; i <= 5; i++)
    {
        printf("\n Number %d is : %d.",i+1,Num[i]);
    }

    printf("\n\n ========================= ***** ========================= \n");
}
