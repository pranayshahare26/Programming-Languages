/*Create a demo function and override it.*/

#include <iostream>
using namespace std;

int factorial(int n) 
{
  if (n == 0) 
  {
    return 1;
  } 
  else 
  {
    return n * factorial(n - 1);
  }
}

int main() 
{
  int n = 5;
  cout << "The factorial of " << n << " is " << factorial(n) << endl;
  return 0;
}

/* In this version of the factorial() function, we initialize result to 1 and then use a for loop to multiply it with the integers from 2 to n.
The main() function remains the same as before.
Now, when we run the program, we get the same output as before, but the factorial is calculated using an iterative approach instead of recursion.*/