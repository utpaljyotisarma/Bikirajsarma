#include<stdio.h>
struct Student
{
    int rollno;
    char name[50];
    float marks;
};
int main()
{
    struct Student student;
    printf("Enter Roll no:");
    scanf("%d",&student.rollno);
    printf("Enter Name:");
    scanf("%d[^\n]",&student.name);
    printf("Enter Marks:");
    scanf("%f",&student.marks);
    printf("\nStudents details are:\n");
    printf("Roll no. :%d\n",student.rollno);
    printf("Name. :%s\n",student.name);
    printf("Marks. :%2f\n",student.marks);
    return 0;
}