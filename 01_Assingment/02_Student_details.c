#include<stdio.h>
#include<conio.h>
int main(){

    int Roll_number = 0;
    char Student_name[10] = {'\0'};
    char Course[10] = {'\0'};
    char  City[10] = {'\0'};

        printf(" Enter student name   :\n");
        scanf("%s",&Student_name);

        printf("Enter Roll number :\n");
        scanf("%d",&Roll_number);
        fflush()

        printf("Enter Course     :\n");
        scanf("%s",&Course);


        printf("Enter City       :\n");
        scanf("%s",&City);

        printf(" \n Student name  : %s", name);
        printf(" \n Roll number   : %d", Roll_no);
        printf(" \n Course        : %s",Course);
        printf(" \n City          : %s", City);


        getch();
        return 0;
}
