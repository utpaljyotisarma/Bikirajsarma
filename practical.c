#include<stdio.h>
int main()
{
    int a,b,c, g, s;
    printf("Input vale of three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    g=a;
    else if(b>c)
    g=b;
    else
    g=c;

    if(a<b && a<c)
    s=a;
    else if(b<c)
    s=b;
    else
    s=c;

    printf("\nGreatest of three numbers=%d",g);
    printf("\nSmallest of three numbers=%d",s);
    return 0;
}