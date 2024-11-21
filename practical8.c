#include<stdio.h>
int main()
{
    int n=0,sum=0,i=0;
    printf("Enter n th term:");
    scanf("%d",&n);
    sum=1;
    for(i=2;i<=n;i++)
    {
        if((i%2==0))
        sum=sum-i;
        else
        sum=sum+i;
    }
    printf("\nSum=%d",sum);
    return 0;
}