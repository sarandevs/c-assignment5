#include <iostream>
using namespace std;

//Function to merge two arrays
void mergeArrays(int arrayThree[], int arrayOne[], int sizeOne, int arrayTwo[], int sizeTwo) {
	for (int i = 0; i < sizeOne + sizeTwo; i++) {
		if (i < sizeOne) {
			arrayThree[i] = arrayOne[i];
		}
		else {
			arrayThree[i] = arrayTwo[i-sizeOne];
		}
		cout << arrayThree[i] << " ";
	}
}

//Function to find the largest element
int largest(int arrayOne[], int sizeOne, int arrayTwo[], int sizeTwo) {
	int x = arrayOne[0];
	for (int i = 0; i <= (sizeOne + sizeTwo - 1); i++) {
		if (i < sizeOne) {
			if (x < arrayOne[i]) {
				x = arrayOne[i];
			}
		}
		else {
			if (x < arrayTwo[i-sizeOne]) {
				x = arrayTwo[i-sizeOne];
			}
		}
	}
	return x;
}

//Function to find the smallest element
int smallest(int arrayOne[], int sizeOne, int arrayTwo[], int sizeTwo) {
	int x = arrayOne[0];
	for (int i = 0; i <= (sizeOne + sizeTwo - 1); i++) {
		if (i < sizeOne) {
			if (x > arrayOne[i]) {
				x = arrayOne[i];
			}
		}
		else {
			if (x > arrayTwo[i-sizeOne]) {
				x = arrayTwo[i-sizeOne];
			}
		}
	}
	return x;
}

int main() {
	
	int sizeOne, sizeTwo;
	cout << "Enter the size of the first array: ";
	cin >> sizeOne;
	cout << "Enter the size of the second array: ";
	cin >> sizeTwo;
	
	int arrayOne[sizeOne], arrayTwo[sizeTwo], arrayThree[sizeOne + sizeTwo];
	
	for (int i = 0; i <= sizeOne - 1; i++) {
		cout << "Enter element number " << i+1 << " of the first array: ";
		cin >> arrayOne[i];
	}
	
	for (int i = 0; i <= sizeTwo - 1; i++) {
		cout << "Enter element number " << i+1 << " of the second array: ";
		cin >> arrayTwo[i];
	}
	
	cout << "The elements of the merged array are ";
	mergeArrays(arrayThree, arrayOne, sizeOne, arrayTwo, sizeTwo);
	cout << endl;
	cout << "The largest element is " << largest(arrayOne, sizeOne, arrayTwo, sizeTwo) << endl;
	cout << "The smallest element is " << smallest(arrayOne, sizeOne, arrayTwo, sizeTwo) << endl;
	
	return 0;
}


