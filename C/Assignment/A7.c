/* Find LCM of numbers using recursion.*/
#include <stdio.h>

int gcd(int a, int b)
{ // function to calculate the GCD using recursion
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b)
{                            // function to calculate the LCM using recursion
    static int multiple = 0; // static variable to keep track of multiples of a and b
    multiple += b;           // add b to the multiple
    if ((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else
    {
        return lcm(a, b);
    }
}

int main()
{
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = (num1 * num2) / gcd(num1, num2); // LCM = (num1*num2)/GCD
    printf("LCM of %d and %d using GCD is: %d\n", num1, num2, result);
    result = lcm(num1, num2); // LCM using recursion
    printf("LCM of %d and %d using recursion is: %d\n", num1, num2, result);
    return 0;
}

/*In this program, the gcd function uses recursion to calculate the GCD (Greatest Common Divisor) of two numbers. It takes two integers a and b as its arguments and returns their GCD.
The lcm function uses recursion to calculate the LCM of two numbers. 
It takes two integers a and b as its arguments and returns their LCM. 
It uses a static variable multiple to keep track of multiples of a and b and checks whether the current multiple is divisible by both a and b.
If it is, then it returns the multiple as the LCM. Otherwise, it calls itself recursively to find the next multiple.

In the main function, the program prompts the user to enter two numbers, calculates their LCM using the GCD method and the recursive method, and then prints the results.*/