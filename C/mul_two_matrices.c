#include<stdio.h>
#include<conio.h>
int main()
{
    int A[2][2],B[2][2],C[2][2],i,j,k;
    //Reading the values of A Matrix
    printf("Enter the values of Matrix A\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    //Reading the Values of B Matrix
    printf("Enter the values of Matrix B\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    //Displaying the Values of Matrix A
    printf("\n The values of Matrix A\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("The values of Matrix B\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    //Performing Multiplication of Matrices A,B
    printf("\n*** The Multiplication A,B Matrices***\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            C[i][j]=0;
            for(k=0;k<2;k++)
            {
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}