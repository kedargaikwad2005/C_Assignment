#include<stdio.h>
#include<conio.h>
int main()
{

    int num = 0, Digit = 0,temp = 0, Multi = 1;
    printf("Enter the number");
    scanf("%d",&num);

     temp = num;

     while (temp != 0 )
     {
         Digit = temp % 10 ;
         Multi = Multi * Digit ;
         temp  = temp / 10 ;
     }
    printf("The sum of all numbers digits %d is %d",num,Multi);

    getch();
    return 0;
}
