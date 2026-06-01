#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0 , Frequency = 0 , digit = 0 , Frequnum = 0 ;

   printf("Enter the number ==>");
   scanf("%d",&num);
   printf("Enter the Frequency Digit ==>");
   scanf("%d",&Frequnum);

     while(num != 0)
    {
        digit = num %10;

       if(digit == Frequnum )

         {
             Frequency ++;
         }
            num = num / 10 ;
    }




    printf("\n\n Digit %d Appears is => %d ",Frequnum,Frequency);

    getch();
    return 0;
}

