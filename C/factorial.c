#include<stdio.h>

int factorial(int a)
{
    if(a==1)
    {
        return 1;
    }
    return (a*factorial(a-1));
}

int main()
{
    int a, factorial_value;
    int i;
    a = 5;
    factorial_value = 1;
    /*for(i=1;i<=a;i++)
    {
        factorial_value = factorial_value * i;
    }*/
    factorial_value = factorial(a);
    printf("\n factorial for %d is %d \n",a,factorial_value);
}
