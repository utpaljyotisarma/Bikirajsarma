#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float r, theta;
    printf("Input vale of x and y");
    scanf("%d%d",&x,&y);
    r=sqrt(x*x+y*y);
    theta=atan((float)y/x);
    printf("r=%f theta=%f",r,theta);
    return 0;

}
