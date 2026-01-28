#include<stdio.h>
#include<conio.h>

int main()


{
    int Year = 0.0;
     printf(" \n Enter the year");
     scanf("%d",&Year);

     if (Year > 1000 == 0 && Year > 9999 == 0 )
     {
         printf(" \n %d The given year is invalid",Year);
     }

     else if  (Year % 4 == 0)
     {
         printf("  \n %d Given year is leap year", Year);
     }
     else
     {
         printf(" \n %d Given year is not leap year",Year);
     }



    getch();
    return 0 ;

}
