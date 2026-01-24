#include<stdio.h>
#include<conio.h>

int main()


{
    int N1, N2, N3;

    printf("\n Enter the 1st number = ");
    scanf("%d",&N1);

    printf("\n Enter the 2nd number = ");
    scanf("%d",&N2);

    printf("\n Enter the 3rd number = ");
    scanf("%d",&N3);

     if(N1 > N2)
     {
         printf("\n %d The 1st number is maximum = ",N1);
     }

     else if (N2 > N3)
     {
         printf("\n %d The 2nd number is maximum = ",N2);
     }

     else
     {
         printf("\n %d The 3rd number is maximum = ",N3);
     }

   if (N1 ==N2)
     {
         printf("\n %d 1st and 2nd the number is same = ",N1,N2);
     }

     else if (N2 == N3)
     {
         printf("\n %d 2nd and 3rd the number are same = ",N2,N3);
     }

      else if (N3 ==N1)
     {
         printf("\n %d 3rd and 1st the number are same = ",N1,N3);
     }





    getch();
    return 0 ;

}
