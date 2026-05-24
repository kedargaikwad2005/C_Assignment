#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0 , Frequency = 0 , digit = 0 ;

   printf("Enter the number ==>");
   scanf("%d",&num);

     while(num != 0)
    {
        digit = num %10;

       if(digit == 2)

         {
             Frequency ++;
         }
            num = num / 10 ;
    }




    printf("\n\n Frequency 2 in the Digits is => %d ",Frequency);

    getch();
    return 0;
}

