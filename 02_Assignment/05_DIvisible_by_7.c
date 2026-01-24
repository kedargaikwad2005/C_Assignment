#include<stdio.h>
#include<conio.h>

int main()


{
    int number = 0.0;
    printf("\n Enter the number = ");
    scanf("%d",&number);

    if( number == 0)

       {
          printf("\n %d given number is invalid = ",number);
       }

         else if( number % 7 == 0)

      {
            printf("\n Given number is divisible by 7 = ",number);
      }

    else
      {
            printf("\n Given number is not divisible by 7 = ",number);

      }




    getch();
    return 0 ;

}
