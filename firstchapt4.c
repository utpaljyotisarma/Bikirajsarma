#include<stdio.h>
int main()
{
    int c,d,a;
    printf("\nBefore interchange");
    scanf("%d%d",&c,&d);
    
    a=c;
    c=d;
    d=a;
    printf("After interchange:");

    printf("%d\n%d",c,d);
    return 0;
}