#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("firstchapt.c","at");
    fputs("//* modified on",fp);
    fprintf(fp,"%s",__DATE__);
    fputs("*//",fp);
    return 0;
}