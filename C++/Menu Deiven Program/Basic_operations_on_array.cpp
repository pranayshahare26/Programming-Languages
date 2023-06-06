
#include <bits/stdc++.h>
using namespace std;

void menu()
{
	cout << "\n\t\tMENU\n";
    cout << "*****************************************";
	cout << "\nPress 1 to print even "
		<< "valued elements\n";
	cout << "Press 2 to print odd valued"
		<< " elements\n";
	cout << "Press 3 to calculate sum "
		<< "and average of elements in "
		<< "the array\n";
	cout << "Press 4 to print maximum"
		<< " and minimum element "
			"in the array\n";
	cout << "Press 5 to remove the "
		<< "duplicacy in array \n";
	cout << "Press 6 to print array"
		<< " in reverse\n";
	cout << "Press 7 to exit\n";
}
void even(int arr[], int len)
{
	cout << "Even numbers in the "
		<< "array are - ";
	for (int i = 0; i < len; i++) 
    {
		if (arr[i] % 2 == 0) 
        {
			cout << arr[i] << "\t";
		}
	}
}
void odd(int arr[], int len)
{
	cout << "Odd numbers in the "
		<< "array are - ";
	for (int i = 0; i < len; i++) 
    {
		if (arr[i] % 2 != 0) 
        {
			cout << arr[i] << "\t";
		}
	}
}
void SumAverage(int arr[], int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++) 
    {
		sum += arr[i];
	}
	cout << "\n Sum	 = " << sum;
	cout << "\n Average = " << sum / len;
}
void MaxMin(int arr[], int len)
{
	int max = arr[1], min = arr[0];
	for (int i = 0; i < len; i++) 
    {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	cout << "Maximum = " << max
		<< "\t";
	cout << "Minimum = " << min;
}
void RmDuplicacy(int arr[], int n)
{
	if (n == 0 || n == 1)
		cout << "No Duplicates";
        sort(arr, arr + n);
	    int temp[n];
	    int j = 0;
	    for (int i = 0; i < n - 1; i++)
	    	if (arr[i] != arr[i + 1])
	    		temp[j++] = arr[i];
            	temp[j++] = arr[n - 1];
	        for (int i = 0; i < j; i++)
	    	    arr[i] = temp[i];
	        for (int i = 0; i < j; i++) 
        {
        	cout << arr[i] << " ";
	    }
}
void Reverse(int arr[], int len)
{
	cout << "\nArray in reverse"
		<< " order:\n ";
	for (int i = len - 1; i >= 0; i--) 
    {
		cout << arr[i] << "\t";
	}
}
int main()
{
	int arr[100], i, num, choice;
	printf("Enter the size of "
		"an array :\n");

	cin >> num;
	printf("Enter the elements of "
		"the array :\n");

	for (i = 0; i < num; i++) 
    {
		cin >> arr[i];
	}
	do {
		cout << "\n";
		menu();
		cout << "\nEnter your "
			<< "choice:\n ";
		cin >> choice;

		switch (choice) 
        {
		case 1:
			even(arr, num);
			break;
		case 2:
			odd(arr, num);
			break;
		case 3:
			SumAverage(arr, num);
			break;
		case 4:
			MaxMin(arr, num);
			break;
		case 5:
			RmDuplicacy(arr, num);
			break;
		case 6:
			Reverse(arr, num);
			break;
		case 7:
			exit(0);
			break;
		default:
			cout << "INVALID CHOICE";
		}
	} while (choice != 7);
	return 0;
}
