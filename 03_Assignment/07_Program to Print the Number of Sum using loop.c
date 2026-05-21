#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0, sum = 0;

    printf("\n Enter the 1 number = ");
    scanf("%d",&num);


    for(;num <= 5; num++)
    {

        printf("\n %d",num);
        scanf("%d",&num);
    }
    sum = num + num;

    getch();
    return 0;
}

