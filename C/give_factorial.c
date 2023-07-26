#include<stdio.h>
int main() 
{
    int num, fact = 1, i;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i = num; i >= 1; i--) 
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}