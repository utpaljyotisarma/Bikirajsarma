#include<stdio.h>
void swapval(int *, int *);
int main()
{
    int num1, num2;
    printf("Enter the num1, num2:");
    scanf("%d%d",num1,num2);
    swapval(&num1, &num2);
    printf("\nNew num1:%d",num1);
    printf("\nNew num2:%d",num2);
    return 0;
}
void swapval(int *num1, int *num2)
{
    int hold=*num1;
    *num1=*num2;
    *num2=hold;
}