#include<stdio.h>
void cac(int r)
{
    float *a,*c;
    *a=3.14*r*r;
    *c=2*3.14*r;
    printf("\nArea of the circle %f=%d",*a);
    printf("\nCircumference of the circle %f=%d",*c);
}
int main()
{
    int r;
    float *a, *c;
    printf("Enter radius of the circle:");
    scanf("%f",&r);
    cac(*a);
    cac(*c);
    
    
    printf("\nArea of the circle=%f",*a);
    printf("\nCircumference of the circle=%f",*c);
    return 0;
}

