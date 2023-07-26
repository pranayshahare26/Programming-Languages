#include<stdio.h>
#include<ctype.h>
int main() 
{
    char ch;
    int lines = 0, words = 0, characters = 0;
    printf("Enter any string data: \n");
    while((ch = getchar()) != EOF) 
    {
        if(ch == '\n') 
        {
            lines++;
        }
         if(isspace(ch)) 
        {
            words++;
        }
        characters++;
    }
    printf("\nTotal Number of Lines: %d", lines + 1);
    printf("\nTotal Number of Words: %d", words + 1);
    printf("\nTotal Number of Characters: %d", characters);
    return 0;
}