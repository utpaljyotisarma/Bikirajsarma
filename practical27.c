#include<stdio.h>
void display_Text_Mode(const char *filename)
{
    FILE*file=fopen(filename,"r");
    if(!file)
    {
        printf("Error!");
        return;
    
    }printf("Text Mode:\n");
    char ch;
    while((ch=fqets (file))!=EOF)
    {
        putchar(ch);

    }fclose(file);
}
void display_Binary_Mode(const char *filename)
{
    FILE*file=fopen(filename,"rd");
    if(!file)
    {
        printf("Error!");
        return;
    }
    printf("Binary Mode:");
    unsigned char byte;
    while(fread(&byte,1,1,file))
    {
        printf("%02x",byte);

    }
    fclose(file);
}
int main()
{
    char filename[100];
    printf("Enter filename:");
    scanf("%s",filename);
    display_Text_Mode(filename);
    display_Binary_Mode(filename);
    return 0;
}