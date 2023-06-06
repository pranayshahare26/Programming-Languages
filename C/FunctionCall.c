#include<stdio.h>
int main()
{
    int num1, num2, result;
    int addition(int, int); //function declaration
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);

    result = addition(num1,num2);
    printf("Sum = %d",result);
}
int addition(int a, int b) //function definition
{
    return a+b;
}