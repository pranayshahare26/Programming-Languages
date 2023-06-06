/* Write a C++ program to reverse the element of an integer array.*/#include <iostream>
using namespace std;

int main() {
    int arr[100], n, temp;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    // Reverse the elements of the array
    for(int i=0, j=n-1; i<j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    cout << "The reversed array is: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/*Here's how the program works:

It prompts the user to enter the number of elements in the array and stores it in the variable n.
It then prompts the user to enter the elements of the array and stores them in the array arr.
It then uses a for loop to reverse the elements of the array.
The loop starts from the beginning of the array and goes up to the middle of the array.
In each iteration of the loop, it swaps the element at the current index with the element at the corresponding index from the end of the array.
Finally, it uses another for loop to print the reversed array.
Note that the program assumes that the array has no more than 100 elements.
If you need to work with larger arrays, you should increase the size of the arr array accordingly.
*/