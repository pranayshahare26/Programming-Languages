#include<stdio.h>
int main()
{
    int i, j, n, space;
    printf("Enter pyramid range: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) // Moving in Each Row
    {
        // Assigning Spaces
        for(space = 0; space < n - i; space++)
            printf(" ");
         // Displaying the Values
        for(j = 1; j <= i; j++)
            printf("%d ", i);
        printf("\n");
    }
    return 0;
}