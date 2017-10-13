#include <iostream>
using namespace std;

void arrange(int newArray[], int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		for (int j = 0; j < arraySize - 1; j++) {
			int x = newArray[j];
			if (newArray[j] > newArray[j+1]) {
				newArray[j] = newArray[j+1];
				newArray[j+1] = x;
			}
		}
	}
}

int klargest(int newArray[], int arraySize, int k) {
	arrange(newArray, arraySize);
	return newArray[arraySize-k];
}

int ksmallest(int newArray[], int arraySize, int k) {
	arrange(newArray, arraySize);
	return newArray[k-1];
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
	
	int k;
	cout << "Enter k: ";
	cin >> k;
	
	cout << "The kth largest element is " << klargest(newArray, arraySize, k) << endl;
	cout << "The kth smallest element is " << ksmallest(newArray, arraySize, k) << endl;
	
	return 0;
}

