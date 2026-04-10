#include<stdio.h>
#include<conio.h>

int Swapping1(int,int);
int Swapping2(int, int);
int main()
{
    int Num1 = 0, Num2 = 0, Swp1 = 0,Swp2 = 0;

    printf("\nEnter the the number ==>");
    scanf("%d",&Num1);
    printf("\nEnter the the number ==>");
    scanf("%d",&Num2);

      Swp1 = Swapping1(Num1,Num2);
      Swp2 = Swapping2(Num1, Num2);


      printf("\n After Swap Number1 => %d",Swp1);
      printf("\n After Swap Number2 => %d",Swp2);

    getch();
    return 0;
}
Swapping1(int N1 , int N2 )
{

     int Swpp =0;

     Swpp = N1;
     N1 = N2;
     N2 = Swpp;

     return N1 ;
}
Swapping2(int Number1 , int Number2 )
{
     int Swpnum =0;

     Swpnum = Number2;
     Number1 = Number1;
     Number2 = Swpnum;

     return Number1 ;
}
