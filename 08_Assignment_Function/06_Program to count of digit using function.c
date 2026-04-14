#include<stdio.h>
#include<conio.h>

int count_digit(int);
int main()
{
   int Num  = 0, Dcount = 0;

    printf("\n\n ========================= ***** ========================= \n");
    printf("\n\n Enter the Digit =>");
    scanf("%d",&Num);

    Dcount = count_digit(Num);

    printf("\n The count of all digit =>%d",Dcount);
    printf("\n\n ========================= ***** ========================= \n");

    getch();
    return 0;
}
int count_digit(int No)
{
    int count = 0;

     while(No != 0)
   {
    count ++;
    No = No / 10;
   }
     return count ;

}


