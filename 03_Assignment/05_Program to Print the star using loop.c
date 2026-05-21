#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0;

    printf("\n Enter the number = ");
    scanf("%d",&i);

    while(i > 0)
    {
        printf("\n * ");
        i--;
    }

    getch();
    return 0;
}
