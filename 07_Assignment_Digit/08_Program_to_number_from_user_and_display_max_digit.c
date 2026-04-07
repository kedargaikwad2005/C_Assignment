#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0 , max = 0 , digit = 0 ;

   printf("Enter the number ==>");
   scanf("%d",&num);

    if (num == 0)
    {
        printf("The number is invalid");
    }
    else
    {
        while (num > 0)
        {
             digit = num %10;

            if (digit > max)
            {
                max = digit;
            }

             num = num /10;
        }
    }



    printf("\n\n max Number Of Digit is => %d ",max);

    getch();
    return 0;
}

