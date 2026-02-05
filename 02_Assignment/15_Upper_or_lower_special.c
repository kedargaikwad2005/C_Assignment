#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter Character Check Upper or Lower Case  ");
    scanf("%c",&Ch);

    if( Ch >= 'A' && Ch <= 'Z' )
    {
        printf("\n Given Character %c is Upper Case",Ch);
    }
    else if( Ch >= 'a' && Ch <= 'z' )
    {
       printf("\n Given Character %c is Lower Case",Ch);
    }
    else
    {
        printf("\n The character %c is special",Ch);
    }
    getch();
    return 0;
}
