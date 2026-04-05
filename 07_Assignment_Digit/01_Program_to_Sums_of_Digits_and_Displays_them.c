#include<stdio.h>
#include<conio.h>
int main()
{

    int num = 0, Digit = 0,temp = 0, sum = 0;
    printf("Enter the number");
    scanf("%d",&num);

     temp = num;

     while (temp != 0 )
     {
         Digit = temp % 10 ;
         sum = sum  + Digit ;
         temp  = temp / 10 ;
     }
    printf("The sum of all numbers digits %d is %d",num,sum);

    getch();
    return 0;
}
