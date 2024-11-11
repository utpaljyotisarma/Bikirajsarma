#include<stdio.h>
int main()
{
    int a,b,c,g,s;
    printf("Enter three number:");
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
    printf("Greatest of three number=%d",g);
    printf("\nSmallest of three number=%d",s);
    return 0;

}