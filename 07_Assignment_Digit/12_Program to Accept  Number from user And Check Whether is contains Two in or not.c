#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0 , digit = 0 ;

   printf("Enter the number ==>");
   scanf("%d",&num);

     while(num != 0)
    {
        digit = num %10;

       if(digit == 2)

         {
             printf("\n\nThe Digit is Contains Two: ");

         }
         else
         {
             printf("\n\nThe Number is Not Contains a Two:");
         }
            num = num / 10 ;
    }




    printf("\n\n =================xxxxxx=================");

    getch();
    return 0;
}

