#include <iostream>

using namespace std;

int main()
{
    int a, b, c ;
    float avg ;
    cout << "Enter any three integer values : ";
    cin >> a >> b >> c;

    avg = (a + b + c) / 3 ;
    cout << "avg before type casting = " << avg << endl;

    avg = (float)(a + b + c) / 3 ;
    cout << "avg after type casting = " << avg << endl;

    return 0;
}