#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0 , min = 0 , digit = 0 ;

   printf("Enter the number ==>");
   scanf("%d",&num);

    if (num == 0)
    {
        printf("The number is invalid");
    }
    else
    {
        while ( num > 0)
        {
             digit = num %10;

            if ( digit != 0 || digit < min)
            {
                min = digit;
            }

             num = num /10;
        }
    }



    printf("\n\n min Number Of Digit is => %d ",min);

    getch();
    return 0;
}

