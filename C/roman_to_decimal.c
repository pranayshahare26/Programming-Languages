#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int romanToDecimal(char *rom);
int main() 
{
    char rom[20];
    printf("Enter any Roman Numeral value: ");
    scanf("%s", rom);
    int decimal = romanToDecimal(rom);
    printf("It's Equivalent Decimal value is: %d\n", decimal);
    return 0;
}
int romanToDecimal(char *rom) 
{
    int len = strlen(rom);
    int *a = (int*) malloc(len * sizeof(int));
    for (int i = 0; i < len; i++) 
    {
        if (rom[i] == 'I')
            a[i] = 1;
        else if (rom[i] == 'V')
            a[i] = 5;
        else if (rom[i] == 'X')
            a[i] = 10;
        else if (rom[i] == 'L')
            a[i] = 50;
        else if (rom[i] == 'C')
            a[i] = 100;
        else if (rom[i] == 'D')
            a[i] = 500;
        else if (rom[i] == 'M')
            a[i] = 1000;
        else 
        {
            printf("\nInvalid Value");
            exit(0);
        }
    }
    int decimal = a[len - 1];
    for (int i = len - 1; i > 0; i--) 
    {
        if (a[i] > a[i - 1])
            decimal -= a[i - 1];
        else if (a[i] == a[i - 1] || a[i] < a[i - 1])
            decimal += a[i - 1];
    }
    free(a);
    return decimal;
}