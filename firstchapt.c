#include<stdio.h>
int main()
{
    float bs, gs, da, hr;
    printf("Enter Ramesh basic salary:");
    scanf("%f", &bs);
    da=bs-(bs*40/100);
    hr=bs-(bs*20/100);
    gs=bs+da+hr;
    printf("\nGross salary of Ramesh:%f", gs);
    return 0;
}