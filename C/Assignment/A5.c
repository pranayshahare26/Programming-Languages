/*C program to change string to upper case without strupr*/
#include <stdio.h>

void str_upper(char *str) {
    int i = 0;
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str_upper(str);
    printf("The string in upper case is: %s\n", str);
    return 0;
}