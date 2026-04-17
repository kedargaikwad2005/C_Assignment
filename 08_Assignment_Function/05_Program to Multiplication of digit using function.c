#include<stdio.h>
#include<conio.h>

int Multi_digit(int);
int main()
{
   int Num  = 0, DMulti = 0;

    printf("\n\n ========================= ***** ========================= \n");
    printf("\n\n Enter the Digit =>");
    scanf("%d",&Num);

    DMulti = Multi_digit(Num);

    printf("\n The Multiplication of all digit =>%d",DMulti);
    printf("\n\n ========================= ***** ========================= \n");

    getch();
    return 0;
}
int Multi_digit(int temp)
{

    int Multi = 1, Digit = 0;

 while (temp != 0 )
     {
         Digit = temp % 10 ;
         Multi = Multi  * Digit ;
         temp  = temp / 10 ;
     }
     return Multi ;

}


