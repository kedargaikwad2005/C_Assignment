#include<stdio.h>
#include<conio.h>

int main()
{
char ch = '\0';

    printf("Enter the character  = ");
    scanf("%c",&ch);
      if ( ch >=65 && ch <= 90)
      {
          printf("\n The Ascll value is %c=\t%d",ch,ch);

      }
      else
      {
          printf(" \n Character is invalid");
      }



     getch();

     printf("\n\n Thanks for visiting");

     return 0;


}

