/*Write a program in C to find the length of a string without using library function.*/

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    scanf("%s", str); // read the string from the user
    while (str[length] != '\0') { // iterate over the characters until null terminator
        length++; // increment the length for each character
    }
    printf("The length of the string is: %d\n", length);
    return 0;
} 

/*In this program, the user is prompted to enter a string, which is then stored in the character array str. 
The length of the string is initialized to 0, and a while loop is used to iterate over the characters of the string until the null terminator is reached. For each character in the string, the length variable is incremented by 1.
Finally, the program prints the length of the string using the printf function.*/