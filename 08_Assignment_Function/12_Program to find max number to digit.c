#include<stdio.h>
#include<conio.h>

int Find_Maximum(int,int);

int main()
{
   int Num  = 0, Maximum = 0 ;

    printf("\n\n ========================= ***** ========================= \n");
    printf("\n\n Enter the Digit =>");
    scanf("%d",&Num);

     Maximum = Find_Maximum(Num,10);

    printf("\n Maximum number =>%d",Maximum);

    printf("\n\n ========================= ***** ========================= \n");

    getch();
    return 0;
}
 int Find_Maximum(int arr[0],int size)
{
    int  i = 0 , size;
     Max = arr[0];

    for (i = 1; i < Size; i ++)
    {
        if(Arr[i] > Max)
        {
            Max = arr[i];
        }
    }

     return Max ;

}

