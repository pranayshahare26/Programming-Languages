#include <iostream> 
int a, b;
void get_data(); 
int sum(int, int);
int main()
{
    int c;
    get_data();
    c = sum(a, b);
    std::cout << "Sum = " << c << std::endl;
    return 0;
}
void get_data()
{
    std::cout << "Enter any two numbers: ";
    std::cin >> a >> b;
}
int sum(int a, int b)
{
    return a + b;
}