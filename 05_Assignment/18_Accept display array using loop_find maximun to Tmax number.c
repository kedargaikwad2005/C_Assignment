#include<stdio.h>
#include<conio.h>
int main()
{

    int Bill [5] = {}, i = 0, Max = 0, Maxtwo = 0,Tmax = 0;

    printf("\n Enter All Bill Number To Check Maximun Number \n");


   for ( i = 0 ; i < 5; i ++)
   {
       printf("Enter The Bill %d is : ",i+1);
       scanf("%d",&Bill[i]);

       if( i == 0 || Bill[i] > Max)
        {
            Max = Bill[i];
        }
   }

    for(i = 0; i < 5; i++)

    {
        if(Bill[i] != Max && Bill[i] > Maxtwo)
        {
            Maxtwo = Bill[i];
        }
    }
    for( i = 0; i < 5; i++)

    {
        if(Bill[i] != Max)
            if(Bill[i] != Maxtwo && Bill[i] > Tmax)
        {
            Tmax = Bill[i];
        }
    }

    printf("\n The Maximun number is %d :",Max);
    printf("\n The  2nd Maximun number is %d :",Maxtwo);
    printf("\n The  3rd Maximun number is %d :",Tmax);


    getch();
    return 0;
}



