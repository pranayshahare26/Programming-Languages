#include<stdio.h>
#include<stdlib.h>

#define N 5

int main()
{
    int **A, **B, **C;
    int i,j,k;
    
    A = (int **)malloc(N*sizeof(int *));
    B = (int **)malloc(N*sizeof(int *));
    C = (int **)malloc(N*sizeof(int *));
    
    if((A==NULL)||(B==NULL)||(C==NULL))
    {
        printf("\n Cannot allocate the array!");
        exit(-1);
    }
    
    for(i=0;i<N;i++)
    {
        A[i] = (int *)malloc(N*sizeof(int));
        B[i] = (int *)malloc(N*sizeof(int));
        C[i] = (int *)malloc(N*sizeof(int));
    }
    
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
    for(i=0;i<N;i++)
    {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);
    printf("\n");
    
}
