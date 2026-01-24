#include<stdio.h>
#include<conio.h>

int main()


{
    int number;
    printf("\n Enter the number");
    scanf("%d",&number);


     if( number == 0 )

    {
         printf("\n %d given number is invalid");
    }

    else if(number % 2 )


    {
        printf("\n %d given number is odd");

    }

    else
    {
        printf("\n %d given number is even");

    }



    getch();
    return 0 ;

}
