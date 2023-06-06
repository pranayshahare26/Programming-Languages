/*Write a program to swap the values of two variables without using third variable.*/
#include <iostream>

int main() {
    int a = 10, b = 20;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    
    a = a + b; // Add both numbers and store it in variable a
    b = a - b; // Subtract b from the sum and store it in variable b
    a = a - b; // Subtract b from the sum again and store it in variable a

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    return 0;
}
/*In this program, we first initialize the variables a and b to 10 and 20, respectively. We then output their values to the console.
To swap the values, we use basic arithmetic operations without using a third variable. First, we add the values of a and b and store the result in a.
Then, we subtract the original value of b from the new value of a and store the result in b.
Finally, we subtract the original value of b from the new value of a (which is now the original value of a plus the original value of b) and store the result in a.
After the swap is complete, we output the new values of a and b to the console.*/