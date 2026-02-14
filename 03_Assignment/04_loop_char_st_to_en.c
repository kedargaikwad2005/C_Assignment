#include<stdio.h>
#include<conio.h>

int main()
{
    char spt = '\0', ept = '\0';

    printf("\n Enter the start point = ");
    scanf("%c",&spt);

    printf("\n Enter the end point = ");
    ept = getche();

    for(;spt >= ept; spt--)
    {
        printf("\n %c",spt,ept);
    }


    getch();
    return 0;
}
