/*rite a C program that calculates the volume of a sphere.*/
#include<stdio.h>

int main()
{
    float rad, vol;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &rad);
    vol = 4/3 * 3.14* rad * rad * rad;
    printf("The volume of the sphere with radius %.2f is %.2f\n", rad, vol);
    return 0;
}