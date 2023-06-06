/* Write a C program that converts kilometers per hour to miles per hour*/
#include<stdio.h>
int main ()
{
    float kmh, mph;
    printf("Enter the speed in kmh :");
    scanf("%f", &kmh);
    mph = kmh * 0.621371;
    printf("The speed in miles per hour is %.2f\n", mph);
    return 0;
}