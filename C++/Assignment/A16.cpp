//Print the address of the variables defined.
#include <iostream>
using namespace std;

int main() {
    int num = 42;
    double dbl = 3.14;
    char ch = 'A';

    cout << "The address of num is: " << &num << endl;
    cout << "The address of dbl is: " << &dbl << endl;
    cout << "The address of ch is: " << static_cast<void*>(&ch) << endl;

    return 0;
}
/*It defines three variables: an integer num, a double dbl, and a character ch.
It uses the & operator to print the addresses of each variable to the console using cout.
Note that we use static_cast<void*> to cast the address of ch to a void* pointer, since the << operator for char* is overloaded to print a string, which is not what we want here.
When you run this program, it will print the addresses of the variables in hexadecimal format. The exact addresses will depend on your system and compiler.*/