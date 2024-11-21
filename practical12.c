#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Input a number:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(n%i==0)
        {
            printf("%d",i);
        }
        
    }
    printf("\nFactorial of a number %d are:",n);
    return 0;
}