#include<stdio.h>
#include<conio.h>

int main()
{
int ch = '\0';

    printf("\n Alphbate Ascll table");
    scanf("%d",&ch);

    for (ch = 0 ; ch <= 127 ; ch++)
    {
        printf("%d \t %c\n",ch, ch);
    }
     printf("\n\n Thanks of  visiting");

     getch();
     return 0;
