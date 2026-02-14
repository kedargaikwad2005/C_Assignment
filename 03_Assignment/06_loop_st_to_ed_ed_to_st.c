#include<stdio.h>
#include<conio.h>

int main()
{
    int spt = 0, ept = 0;

    printf("\n Enter the start point = ");
    scanf("%d",&spt);
    printf("\n Enter the end point = ");
    scanf("%d",&ept);

    if(spt < ept)
    {
        for(; spt <= ept;spt++)
        {
            printf("\n %d",spt);
        }
    }
    else
    {
        for(; spt>= ept; spt--)
        {
            printf("\n %d",spt);
        }
    }

    getch();
    return 0;
}
