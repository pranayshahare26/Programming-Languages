#include<stdio.h>
int main()
{
    int p, n;
    float si, r;

    p = 1000;
    n = 5;
    r = 8.5;

    si = p*n*r/100;

    printf("%.2f",si);
    return 0;
}