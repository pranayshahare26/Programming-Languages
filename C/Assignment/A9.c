/* Write a program in C to count the total number of words in a string.*/
#include <stdio.h>

int main() {
    char str[100];
    int words = 1, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read the string from the user
    for (i = 0; str[i] != '\0'; i++) { // iterate over the characters of the string
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') { // if current character is space, newline or tab
            words++; // increment the word count
        }
    }
    printf("The total number of words in the string is: %d\n", words);
    return 0;
}

/*In this program, the user is prompted to enter a string, which is then stored in the character array str.
The word count is initialized to 1, since the first word in the string is always assumed to be present.
A for loop is used to iterate over the characters of the string, and an if statement is used to check whether the current character is a space, newline, or tab character.
If it is, then the word count is incremented
Finally, the program prints the total number of words in the string using the printf function.
Note that this program assumes that the words in the string are separated by one or more spaces, tabs, or newlines.
*/