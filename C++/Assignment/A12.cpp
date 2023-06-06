/*Any year is input by the user. Write a program to determine whether the year is a leap year 
or not.*/
#include <iostream>

using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}
/*In this program, we first prompt the user to enter a year, and then we read in the input using the cin statement. 
We then use a series of if statements to determine whether the input year is a leap year or not.
The logic used to determine leap years is as follows:
If a year is divisible by 4, it is a potential leap year.
However, if a year is divisible by 100, it is not a leap year, unless it is also divisible by 400.
We use this logic to check whether the input year is a leap year or not, and we output the result to the user.*/