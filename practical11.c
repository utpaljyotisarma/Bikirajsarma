#include<stdio.h>
void prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("\nThe number is prime.");

    else
    printf("\nThe number is not prime. ");
}
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);
    
    return 0;
}
