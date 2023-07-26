#include<stdio.h>
#include<conio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10], rows, cols, i, j;
    printf("Enter Matrix size (rows columns): ");
    scanf("%d%d", &rows, &cols);
    printf("\nEnter the Matrix A values:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter the Matrix B values:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nAddition of Matrices A & B is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}