#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, evcount = 0, Dgt = 0;

    printf("Enter the number ==>");
    scanf("%d",&No);


    while(No > 0)
    {
        Dgt = No %10;

        if(Dgt != 0 && Dgt % 2 == 0)
         {
            evcount ++;
         }
            No = No / 10 ;
    }

    printf("\n\n Total Number Of  even Digit is => %d ",evcount);

    getch();
    return 0;
}
