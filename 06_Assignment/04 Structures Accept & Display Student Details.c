#include<stdio.h>
#include<conio.h>
#include<Stdlib.h>
struct stud
{
    int Roll_no;
    char Student_name[20];
    int Phy ;
    int Chem;
    int Maths;
    int Tot;
    float Per ;
};
int main()
{
    struct student Std1;
    printf("\n\n Accepting %d Student Details => \n", Stdcnt);

    printf("\n\n Enter Student Roll number : ");
        scanf("%d",&Std1.Roll_no);
    printf("\n\n Enter Student name : ");
        scanf("%s",&Std1.Student_name);
    printf("\n\n Enter Physics marks : ");
        scanf("%f",&Std1.Phy);
    printf("\n\n Enter Chemistry marks : ");
        scanf("%f",&Std1.Chem);
    printf("\n\n Enter Mathematics marks : ");
        scanf("%f",&Std1.Maths);
    printf("\n\n Enter Total marks : ");
        scanf("%f",&Std1.Tot);
    printf("\n\n Enter Student Percentage : ");
        scanf("%f",&Std1.Per);


    printf("\n===================================================");

    getch();

    printf("\n\n Student information ");
    printf("\n\n Student Roll number :%d",Std1.Roll_no);
    printf("\n\n student name :%s",Std1.student_name);
    printf("\n\n Student Percentage :%f",Std1.Per);

    getch();
    return 0;
}
