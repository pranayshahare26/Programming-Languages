#include<stdio.h>
#include<stdlib.h>

#define N 5

int main()
{
    int A[N][N], B[N][N], C[N][N];
    int i,j,k;
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            A[i][j] = 1;
            B[i][j] = 1;
            C[i][j] = 0;
        }
    }
    
    printf("\n Matrix A : \n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("\t %d",A[i][j]);
        }
        printf("\n");
    }
    
    printf("\n Matrix B : \n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("\t %d",B[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    
    printf("\n Output Matrix C : \n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("\t %d",C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
}
