#include <iostream>

using namespace std;

int main()
{
    int *intPtr;
    double *doublePtr;
    char *charPtr;

    cout << "Memory size of integer pointer intPtr -> " << sizeof(intPtr) << endl;
    cout << "Memory size of double pointer doublerPtr -> " << sizeof(doublePtr) << endl;
    cout << "Memory size of character pointer charPtr -> " << sizeof(charPtr) << endl;

    return 0;
}