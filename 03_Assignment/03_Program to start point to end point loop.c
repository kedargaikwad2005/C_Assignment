#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, spt = 0, ept = 0;

     printf("\n Enter the start point number = ");
     scanf("%d",&spt);
     printf("\n Enter the end point number = ");
     scanf("%d",&ept);

     for(i = spt; spt <= ept; spt ++)
     {
         printf("\n %d",spt,ept);
     }

    getch();
    return 0;
}
