#include<stdio.h>
int main()
{
    int num1, num2;
    void addition(int,int); //function declaration
    printf("Enter any two integer numbers : ");
    scanf("%d%d", &num1, &num2);
    addition(num1,num2); //function call
}
void addition(int a, int b) //declaration
{
    printf("Sum = %d",a+b);
}