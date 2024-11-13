#include<stdio.h>
int main()
{
    int n, dig,s=0,p=1;
    printf("\nEnter an integer number:");
    scanf("%d",&n);
    while(n>0)
    {
        dig=n%10;
        s+=dig;
        p*=dig;
        n=n/10;
    }
    printf("\nSum of digits:%d",s);
    printf("\nProduct of digits:%d",p);
    return 0;
}