#include<conio.h>
#include<stdio.h>

int main()
{
    int No = 0;

    printf("\n\n  Enter Number from Check Hello and World  :");
    scanf("%d",&No);

    if( No <= 10)
    {
        printf("\n  Hello is %d ",No);
    }
    else
    {
       printf("\n  World is %d ",No);
    }
    getch();
    return 0;
}
