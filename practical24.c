#include<stdio.h>
#define SWAP(a,b) a=a^b; b=a^b; a=a^b
int main()
{
    int a=9, b=3;
    SWAP(a,b);
    printf("a=%d b=%d",a,b);
    return 0;
}