/*Write a c ++program to check character entered is alphabet, digit or special character using library functions.*/
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if(isalpha(ch)) {
        cout << ch << " is an alphabet." << endl;
    }
    else if(isdigit(ch)) {
        cout << ch << " is a digit." << endl;
    }
    else {
        cout << ch << " is a special character." << endl;
    }

    return 0;
}
/*It prompts the user to enter a character and stores it in the variable ch.
It then uses the isalpha function from the cctype library to check whether the entered character is an alphabet.
If the entered character is an alphabet, the program prints a message saying so.
If the entered character is not an alphabet, the program uses the isdigit function from the cctype library to check whether the entered character is a digit.
If the entered character is a digit, the program prints a message saying so.
If the entered character is neither an alphabet nor a digit, the program assumes it is a special character and prints a message saying so.
Note that this program assumes that the user will enter only one character. If you want to check a whole string of characters, you'll need to modify the program accordingly.*/