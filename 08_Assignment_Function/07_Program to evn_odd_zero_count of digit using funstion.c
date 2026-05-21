#include<stdio.h>
#include<conio.h>

int Even_count(int);
int Odd_count(int);
int Zero_count(int);
int main()
{
   int Num  = 0, Ecount = 0, Oddcount = 0,Zerocount  = 0;

    printf("\n\n ========================= ***** ========================= \n");
    printf("\n\n Enter the Digit =>");
    scanf("%d",&Num);

    Ecount = Even_count(Num);
    Oddcount = Odd_count(Num);
    Zerocount = Zero_count(Num);

    printf("\n The count of Even digit =>%d",Ecount);
    printf("\n The count of Odd digit =>%d",Oddcount);
    printf("\n The count of Zero digit =>%d",Zerocount);
    printf("\n\n ========================= ***** ========================= \n");

    getch();
    return 0;
}
int Even_count(int No)
{
    int Evcount = 0, Dgt = 0;

    while(No != 0)
    {
        Dgt = No %10;
      if(Dgt % 2 == 0 )
         {
            Evcount ++;
         }
         No =  No /10;
    }

     return Evcount ;

}
int Odd_count(int No)
{
    int Oddcount = 0, Dgt = 0;

    while(No != 0)
    {
        Dgt = No %10;
      if(Dgt % 2 == 1 )
         {
            Oddcount ++;
         }
         No =  No /10;
    }

     return Oddcount ;

}
int Zero_count(int No)
{
    int Zerocount = 0, Dgt = 0;

    while(No != 0)
    {
        Dgt = No %10;

      if(Dgt == 0)
         {
            Zerocount ++;
         }
         No =  No /10;
    }

     return Zerocount ;

}


