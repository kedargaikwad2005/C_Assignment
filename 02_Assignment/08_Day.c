#include<stdio.h>
#include<conio.h>

int main()


{
    int Day;

    printf("\n Enter the Day = ");
    scanf("%d",&Day);

    if(Day == 1)
    {
        printf("\n %d  number is Monday",Day);
    }
    else if(Day == 2)
    {
        printf("\n %d  number is Tuesday",Day);
    }
    else if(Day == 3)
    {
        printf("\n %d  number is Wednesday",Day);
    }
    else if(Day == 4)
    {
        printf("\n %d  number is Thursday",Day);
    }
    else if(Day == 5)
    {
        printf("\n %d number is Friday",Day);
    }
    else if(Day == 6)
    {
        printf("\n %d  number is Saturday",Day);
    }
    else if(Day == 7)
    {
        printf("\n %d number is Sunday",Day);
    }
    else
    {
        printf(" \n  invalid Day ");
    }

    getch();
    return 0 ;

}
