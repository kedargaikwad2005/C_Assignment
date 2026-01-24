#include<stdio.h>
#include<conio.h>

int main()


{
    int Month;

    printf("\n Enter the Month = ");
    scanf("%d",&Month);


    if(Month == 1)
    {
        printf("\n %d  number is Januaray ",Month);
    }
    else if(Month == 2)
    {
        printf("\n %d  number is February",Month);
    }
    else if(Month == 3)
    {
        printf("\n %d  number is March",Month);
    }
    else if(Month == 4)
    {
        printf("\n %d  number is Aprli",Month);
    }
    else if(Month == 5)
    {
        printf("\n %d number is May",Month);
    }
    else if(Month == 6)
    {
        printf("\n %d  number is June",Month);
    }
    else if(Month == 7)
    {
        printf("\n %d number is July",Month);
    }
    else if(Month == 8)
    {
        printf("\n %d  number is  August",Month);
    }
    else if(Month == 9)
    {
        printf("\n %d  number is Septemer",Month);
    }
    else if(Month == 10)
    {
        printf("\n %d  number is October",Month);
    }
    else if(Month == 11)
    {
        printf("\n %d  number is November",Month);
    }
    else if(Month == 12)
    {
        printf("\n %d number is Decembre",Month);
    }
    else
    {
        printf (" \n The month is in valid");
    }

    getch();
    return 0 ;

}
