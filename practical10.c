#include<stdio.h>
int fib_recursive(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    return(fib_recursive(n-1)+fib_recursive(n-2));

}
int fib_nonrecur(int n)
{
    int t1=0,t2=1,t3,i;
    for(i=1;i<n;i++)
    {
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
    return t1;
}
int main()
{
    int i;
    for(i=1;i<=10;i++)
    printf("%d",fib_recursive(i));
    printf("\n");
    
    for(i=1;i<=10;i++)
    printf("%d",fib_nonrecur(i));
    return 0;
}