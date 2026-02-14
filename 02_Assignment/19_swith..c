#include<stdio.h>
#include<conio.h>

int main()
{
   int num1 =0,num2 =0,res =0;

   printf("\n Enter the 1st number  =");
   scanf("%d",&num1);
   printf("\n Enter the 2st number =");
   scanf("%d",&num2);
   up:
   printf("\n\n 1Addition \n 2 Subtract\n 3 Multiply\n 4Divide ");
   printf("\n\n Enter above options =>");
   scanf("%d",&res);

    switch(res)
    {
    case 1:
        printf("Addition = %d", num1 + num2);
        break;
    case 2:
        printf("Subtract = %d",num1 - num2);
        break;
    case 3:
        printf("Multiply = %d",num1 * num2);
        break;
    case 4:
        printf("Divide = %d",num1 / num2);
        break;
    default :
        printf("Invalid number");
        goto up;
    }
    printf("\n\n thanks ");
   getch();
    return 0;
}

