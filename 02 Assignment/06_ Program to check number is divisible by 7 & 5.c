#include<stdio.h>
#include<conio.h>

int main()


{
    int num = 0.0;

    printf("\n Enter the number = ");
    scanf("%d",&num);



    if( num % 7== 0 && num % 5 == 0)

    {
        printf(" \n  %d The number is divisible by both",num);
    }
    else if ( num% 7 == 0)
    {
        printf(" \n %d  The number is divisible by 7",num);
    }
    else
    {
        printf(" \n %d The number is divisible by 5",num);
    }




    getch();
    return 0 ;

}
