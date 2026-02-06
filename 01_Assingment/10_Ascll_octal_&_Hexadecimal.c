#include<stdio.h>
#include<conio.h>

int main()
{

    char ch = '\0';

    if ((ch >= 65 && ch <= 90) || (ch >= 97  && ch <= 122))
    {
        printf("\n  The Ascll value is %C=\t%d \n octal = %0 \n Hexadecimal = %x ",ch,ch,ch,ch);
    }
    else
    {
        printf("\n character is invalid");
    }

     printf("\n\n Thanks of  visiting");

     getch();
     return 0;

}

