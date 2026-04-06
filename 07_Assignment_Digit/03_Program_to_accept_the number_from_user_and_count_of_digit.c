#include<stdio.h>
#include<conio.h>

int main()
{
   int No = 0, count = 0 ;

   printf("Enter the number ==>");
   scanf("%d",&No);


   while(No != 0)

   {
    count ++;
    No = No / 10;
   }
    printf("\n\n Total Number Of Digit is => %d ",count);

    getch();
    return 0;
}
