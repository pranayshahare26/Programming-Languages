#include<stdio.h>
#include<stdlib.h>
#define N 10

int stack[2*N];
int top;

void push( int a)
{
    if(top==(2*N))
    {
        printf("\n Overflow!");
        return;
    }
    top++;
    stack[top] = a;
}

int pop()
{
    if(top==-1)
    {
        printf("\n Undeflow!");
        return -1;
    }
    return stack[top--];
    
}

int main()
{
    int A[N];
    int i;
    
    top = -1;
    
    for(i=0;i<N;i++)
    {
        A[i] = rand()%100;
    }
    
    printf("\nOriginal array: ");
    for(i=0;i<N;i++)
    {
        printf("\nA[%d] = %d ",i,A[i]);
    }
    
    for(i=0;i<N;i++)
    {
        push(A[i]);
    }
    
    for(i=0;i<N;i++)
    {
        A[i] = pop();
    }
    
    
    printf("\n\nReversed array: ");
    for(i=0;i<N;i++)
    {
        printf("\nA[%d] = %d ",i,A[i]);
    }
    
    printf("\n");
    printf("\n");
}
