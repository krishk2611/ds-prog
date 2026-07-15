#include<stdio.h>
#include<string.h>
#include<conio.h>

struct student
{
        int Rollno;
        char name[20];


};
void main()
{
    struct student s1;
    printf("\n Enter Roll Number :");
    scanf("%d", &s1.Rollno);
    printf("\n Enter Name :");
    scanf(" %s", s1.name);
    printf("\n student data is as follows :");
    printf("\n ******************** ");
   printf("\n Roll Number is  : %d", s1.Rollno);
    printf("\n Name is:%s",s1.name);
    getch();
}
