#include<stdio.h>
#include<conio.h>

void Tnum(int,int);
int main()
{
    int Num1 = 0, Num2 = 0;

    printf("\nEnter the the number ==>");
    scanf("%d",&Num1);
    printf("\nEnter the the number ==>");
    scanf("%d",&Num2);

    printf("\n Result Number 1 ==> %d",Num1);
    printf("\n Result Number 2 ==> %d",Num2);

     Tnum(Num1,Num2);


    getch();
    return 0;
}

void Tnum(int N1 , int N2 )
 {
     int swpp =0;

     swpp = N1;
     N1 = N2;
     N2 = swpp;

     printf("\n Result Number 1 ==> %d",N1);
     printf("\n Result Number 2 ==> %d",N2);

     return 0 ;
 }
