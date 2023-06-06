#include<stdio.h>
int main()
{
    int a, n;
    int p1=0, p2=1;
    int nextTerm = p1 + p2;
    
    printf("Enter the numbers of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series: %d, %d ", p1, p2);
    for (a = 3; a <= n; ++a)
    {
        printf("%d, ", nextTerm);
        p1 = p2;
        p2 = nextTerm;
        nextTerm = p1 + p2;
    }
    return 0;
}