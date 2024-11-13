#include<stdio.h>
int main()
{
    int a,b,s,p,d;
    printf("Input vale of two number:");
    scanf("%d%d",&a,&b);
    s=a+b;
    p=a*b;
    d=a-b;
    printf("\nSum of two number=%d",s);
    printf("\nProduct of two number=%d",p);
    printf("\nDifference of two number=%d",d);
    return 0;
}