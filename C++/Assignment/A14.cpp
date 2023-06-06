/* Write a program to count number of words in string.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int wordCount = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    // Count the number of words in the string
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            wordCount++;
        }
    }
    wordCount++; // Increment word count for the last word

    cout << "The number of words in the string is: " << wordCount << endl;

    return 0;
}
/*It prompts the user to enter the number of elements in the array and stores it in the variable n.
It then prompts the user to enter the elements of the array and stores them in the array arr.
It then uses a for loop to reverse the elements of the array.
The loop starts from the beginning of the array and goes up to the middle of the array.
In each iteration of the loop, it swaps the element at the current index with the element at the corresponding index from the end of the array.
Finally, it uses another for loop to print the reversed array.
Note that the program assumes that the array has no more than 100 elements.
If you need to work with larger arrays, you should increase the size of the arr array accordingly.*/