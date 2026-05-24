#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0 , Zerocut = 0 , digit = 0 ;

   printf("Enter the number ==>");
   scanf("%d",&num);

     while(num != 0)
    {
        digit = num %10;

       if(digit == 0)

         {
             Zerocut ++;
         }
            num = num / 10 ;
    }




    printf("\n\n Zero Count Of Digit is => %d ",Zerocut);

    getch();
    return 0;
}

