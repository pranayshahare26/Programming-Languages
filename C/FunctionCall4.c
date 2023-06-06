#include<stdio.h>
int main()
{
    int result;
    int addition(); //function declaration
    result = addition(); // function call
    printf("Sum = %d", result);
}
int addition() //function definition
{
    int num1, num2;
    printf("Enter two integer = ");
    scanf("%d%d", &num1, &num2);
    return(num1+num2);
}