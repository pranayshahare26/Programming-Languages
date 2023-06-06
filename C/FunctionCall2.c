#include<stdio.h>
int main()
{
    void addition();
    addition();
}
void addition()
{
    int num1,num2;
    printf("Enter any two integer numbers :");
    scanf("%d%d",&num1,&num2);
    printf("Sum=%d",num1+num2);
}