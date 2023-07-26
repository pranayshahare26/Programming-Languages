#include<stdio.h>
#include<conio.h>
#include<string.h>
    int main()
{
    char str[30] = "", str1[30] = "", str2[30] = "";
    int n, position, i, j;
    printf("Enter any string: ");
    gets(str);
    printf("Enter the number of characters to be removed: ");
    scanf("%d", &n);
    printf("Enter the position from where you want to remove: ");
    scanf("%d", &position);
    for(i = 0; i < position; i++)
    {
        str1[i] = str[i];
    }
    for(i = n + position, j = 0; i < strlen(str); i++, j++)
    {
        str2[j] = str[i];
    }
    strcat(str1, str2);
    printf("\nAfter removal, the result string is: %s", str1);
    return 0;
}