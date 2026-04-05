#include<stdio.h>
#include<conio.h>
struct student
{
    int Roll_no;
    char student_name[20];
    float student_marks;
};
int main()
{
struct student s1 = {};

printf("\n\n Enter student Roll number : ");
scanf("%d",&s1.Roll_no);
printf("\n\n Enter student name : ");
scanf("%s",&s1.student_name);
printf("\n\n Enter student marks : ");
scanf("%f",&s1.student_marks);

printf("\n===================================================");
getch();
printf("\n\n Student information ");
printf("\n\n Student Roll number :%d",s1.Roll_no);
printf("\n\n student name :%s",s1.student_name);
printf("\n\n Student marks :%f",s1.student_marks);
getch();
return 0;
}
