#include<stdio.h>

int fact_recursive(int n)
{
    if(n>=1)
    return n*fact_recursive(n-1);
    else
    return 1;
}
int fact(int n)
{
    int i=1, fact=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}

int main()
{
    int  n,i=1,factorial=1;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("\nFactorial of %d=%1d",n,fact_recursive(n));
    printf("\nFactorial of %d is=%2d",n,fact(n));
    return 0;
}

