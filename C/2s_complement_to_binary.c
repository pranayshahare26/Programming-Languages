#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void complement(char *a);
int main()
{
    char a[16];
    int i;
    printf("Enter any Binary number (in 1's & 0's Only): ");
    fgets(a, sizeof(a), stdin);
    for (i = 0; a[i] != '\n'; i++)
    {
        if (a[i] != '0' && a[i] != '1')
        {
            printf("The number entered is not a binary number. Enter the correct number");
            exit(0);
        }
    }
    complement(a);
    return 0;
}
void complement(char *a)
{
    int l, i, c = 0;
    char b[16];
    l = strlen(a);
    for (i = l - 1; i >= 0; i--)
    {
        if (a[i] == '0')
            b[i] = '1';
        else
            b[i] = '0';
    }
    for (i = l - 1; i >= 0; i--)
    {
        if (i == l - 1)
        {
            if (b[i] == '0')
                b[i] = '1';
            else
            {
                b[i] = '0';
                c = 1;
            }
        }
        else
        {
            if (c == 1 && b[i] == '0')
            {
                b[i] = '1';
                c = 0;
            }
            else if (c == 1 && b[i] == '1')
            {
                b[i] = '0';
                c = 1;
            }
        }
    }
    b[l] = '\0';
    printf("\nThe 2's Complement of the given Binary number: %s", b);
}