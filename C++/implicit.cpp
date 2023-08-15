#include <iostream>

using namespace std;

int main()
{
    int i = 95 ;
    float f = 90.99 ;
    char ch = 'A' ;

    i = f ;     //float to int  --> 90.99 to 90
    cout << "i value is " << i << endl;
    f = i ;     // int to float --> 90 to 90.000000
    cout << "f value is " << f << endl;
    i = ch ;    // char to int  --> 'A' to 65
    cout << "i value is " << i << endl;

    return 0;
}