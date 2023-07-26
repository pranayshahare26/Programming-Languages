#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
    char mainString[30], searchString[20];
    int i, j, flag = 0, count = 0, index;
    printf("Enter the main string: ");
    gets(mainString);
    printf("Enter the search string: ");
    gets(searchString);
    for(i = 0; mainString[i] != '\0'; i++) 
    {
        if(mainString[i] == searchString[0]) 
        {
            index = i;
            for(j = 0; searchString[j] != '\0'; j++) 
            {
                if(mainString[i] == searchString[j]) 
                {
                    count++;
                    i++;
                }
            }
            flag = 1;
            break;
        }
    }
    if(flag == 1 && count == strlen(searchString))
        printf("\nSearch String begins at index %d in mainString", index);
    else if(flag == 1 && count < strlen(searchString))
        printf("\nSearch String was not found: -1");
    return 0;
}