#include<stdio.h>
#include<conio.h>

   int main()
{
    char division = '\0';

    printf("\n Enter the division = ");
    scanf("%c",&division);

    switch(division)
    {

        case 'A':
            printf("\n Exam of division A at 10 AM ");
        case 'a':
            printf("\n Exam of division a at 10 AM ");
            break;

        case 'B':
            printf("\n Exam of division B at 10:30 AM  ");
        case 'b':
            printf("\n Exam of division b at 10:30 AM ");
            break;

        case 'c':
            printf("\n Exam of division C at 1 PM ");
        case 'C':
            printf("\n Exam of division c at 1:30 PM");
            break;

        case 'D' :
            printf("\n Exam of division D at 1:30 PM");
        case 'd' :
            printf("\n Exam of division d at 1:30 PM");
            break;

            default:
            printf("\n  Be the man and use A to D number");
            break;

    }
       getch();
       return 0;
}
