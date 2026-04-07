#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0, oddcount = 0;

    printf("Enter the number ==>");
    scanf("%d",&No);

    while(No > 0)
    {
        if(No % 2 == 1)
        {
            oddcount++;
        }
        No = No /10;
    }

    printf("\n\n Total Number Of  odd Digit is => %d ",oddcount);

    getch();
    return 0;
}
