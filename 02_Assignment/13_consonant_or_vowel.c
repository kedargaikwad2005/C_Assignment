#include<stdio.h>
#include<conio.h>
 int main()
 {
    char ch = '\o';

    printf("\n Enter the charatar = ");
    scanf("%c",&ch);

    if ( ch == 'A' || ch == 'E' || ch ==  'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'o' || ch == 'u')
    {
        printf(" \n %c Givan charatar is vowel");
    }
    else if( ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        print(" \n %c Givan charatar is consonant",ch);
    }
    else
    {
        printf("\n %c Givan charatar is not vowel",ch);
    }

        getch();
             return 0;



 }
