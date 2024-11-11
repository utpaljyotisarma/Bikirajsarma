#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5, agg;
    float per;
    printf("Enter marks of the sutudent:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    agg=m1+m2+m3+m4+m5;
    per=agg*100/500;
    printf("Aggregate marks of the student=%d\n",agg);

    printf("\nPercentage of the student=%f\n",per);
    return 0;



}