#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, evcount = 0, Dgt = 0, odcunt = 0, zerocont = 0;

    printf("Enter the number ==>");
    scanf("%d",&No);


    while(No > 0)
    {
        Dgt = No %10;

        if(Dgt % 2 == 0 && Dgt != 0)
         {
            evcount ++;
         }
        else if (Dgt != 0)
         {

             odcunt ++;
         }
         else
         {
             zerocont ++;
         }
            No = No / 10 ;
    }

    printf("\n\n Total Number Of  even Digit is => %d ",evcount);
    printf("\n\n Total Number Of  odd Digit is => %d ",odcunt);
    printf("\n\n Total Number Of  zero Digit is => %d ",zerocont);

    getch();
    return 0;
}
