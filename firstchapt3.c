#include<stdio.h>
int main()
{
    int l, b;
    float area1, peri;
    printf("Enter length and breadth of s rectangle:");
    scanf("%d%d",&l,&b);
    area1=l*b;
    peri=2*(l+b);
    printf("Area of the rectangle=%f",area1);
    printf("\nPerimeter of the rectangle=%f",peri);

    int r;
    float area2, circ;
    printf("\nEnter radius of circle:");
    scanf("%d",&r);
    area2=3.14*r*r;
    circ=2*3.14*r;
    printf("\nArea of the circle=%f",area2);
    printf("\nCircumfrerence of the circle=%f",circ);
    return 0;
}