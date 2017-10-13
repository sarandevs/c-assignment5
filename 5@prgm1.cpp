#include <iostream>
using namespace std;

int sum(int newArray[], int arraySize) {
	int x = 0;
	for (int i = 0; i <= arraySize - 1; i++) {
		x += newArray[i];
	}
	return x;
}

int main() {
	
	int arraySize;
	cout << "Enter the size of the array: ";
	cin >> arraySize;
	
	int newArray[arraySize];
	
	for (int i = 0; i <= arraySize - 1; i++) {
		cout << "Enter element number " << i+1 << ": ";
		cin >> newArray[i];
	}
	
	cout << "The sum of the elements in the array is ";
	cout << sum(newArray, arraySize) << ".";
	
	cout << endl;
	
	return 0;
}
