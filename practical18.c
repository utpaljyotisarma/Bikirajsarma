#include<stdio.h>
void Input_Matrix(int rows, int colunms, int matrix[rows][colunms])
{
    int i,j;
    printf("Enter the element of the matrix rows=%d colunms=%d:\n",rows,colunms);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colunms;j++)
        {
            printf("Element [%d][%d]:",i++,j++);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void transp_Matrix(int rows, int colunms, int matrix[rows][colunms],int transpose[colunms][rows])
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colunms;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
}
void print_Matrix(int rows, int colunms, int matrix[rows][colunms])
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colunms;j++)
        {
            printf("%d",matrix[i][j]);
        }
    }
}
int main()
{
    int rows, colunms;
    printf("Enter the no of rows: ");
    scanf("%d",&rows);
    printf("Enter the no of colunms:");
    scanf("%d",&colunms);
    int matrix[rows][colunms];
    int transpose[colunms][rows];
    Input_Matrix(rows, colunms, matrix);
    transp_Matrix(rows,colunms,matrix,transpose);;
    printf("\nOriginal matrix:\n");
    print_Matrix(rows, colunms, matrix);
    printf("\nTranspose of the matrix:\n");
    print_Matrix(rows,colunms,transpose);
    return 0;

}
