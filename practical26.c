#include<stdio.h>
struct person
{
    int pid;
    char name[30];
    char address[50];
    char phone[11];
};
typedef struct person Person;
int main()
{
    Person x;
    printf("Input Pid");
    scanf("%d",&x.pid);
    fflush(stdin);
    printf("Input name");
    fflush(stdin);
    gets(x.name);
    printf("Input Address");
    fflush(stdin);
    gets(x.address);
    printf("Input Phone no.");
    fflush(stdin);
    gets(x.phone);
    printf("Pid=%d\nName=%s\nAddress=%s\nPhone number=%s\n",x.pid,x.name,x.address,x.phone);
    return 0;
}