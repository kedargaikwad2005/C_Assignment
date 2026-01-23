#include<stdio.h>
#include<conio.h>
int main()
{

   float width=0.0, height=0.0, area=0.0;

   printf("Enter the weidth = ");
   scanf("%f",&width);

   printf("Enter the height = ");
   scanf("%f",&height);

   area= width * height;

   printf("calculate the area = %0.2f",area);
   return 0;
}



