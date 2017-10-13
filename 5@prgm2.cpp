#include <iostream>
using namespace std;

//Function to find the mean
float mean(float newArray[], int arraySize) {
	float x = 0;
	for (int i = 0; i <= arraySize - 1; i++) {
		x += newArray[i];
	}
	return x/arraySize;
}

//Function to find the largest element
int largest(float newArray[], int arraySize) {
	int x = newArray[0];
	for (int i = 1; i <= arraySize - 1; i++) {
		if (x < newArray[i]) {
			x = newArray[i];
		}
	}
	return x;
}

//Function to find the position of the largest element
int largestPos(float newArray[], int arraySize) {
	int x = newArray[0];
	int pos = 0;
	for (int i = 1; i <= arraySize - 1; i++) {
		if (x < newArray[i]) {
			x = newArray[i];
			pos = i;
		}
	}
	return pos;
}

//Function to find the smallest element
int smallest(float newArray[], int arraySize) {
	int x = newArray[0];
	for (int i = 1; i <= arraySize - 1; i++) {
		if (x > newArray[i]) {
			x = newArray[i];
		}
	}
	return x;
}

//Function to find the median
float median(float newArray[], int arraySize) {
	for (int i = arraySize; i >= 1; i--) {
		int x = largest(newArray, i);
		newArray[largestPos(newArray, i)] = newArray[i - 1];
		newArray[i - 1] = x;
	}
	if (arraySize % 2 == 1) {
		return newArray[(arraySize-1)/2];
	}
	else {
		return (newArray[arraySize/2]+newArray[(arraySize/2) - 1])/2;
	}
}

//Function to find the mode
float mode(float newArray[], int arraySize) {
	median(newArray, arraySize);
	int x = 0;
	int y = 0;
	int pos = 0;
	for (int i = 0; i <= arraySize - 2; i++) {
		if (newArray[i] == newArray[i+1]) {
			x++;
		}
		else {
			if (x > y) {
				y = x;
				pos = i;
			}
			x = 0;
		}
	}
	return newArray[pos];
}

int main() {
	
	int arraySize;
	cout << "Enter the size of the array: ";
	cin >> arraySize;
	
	float newArray[arraySize];
	
	for (int i = 0; i <= arraySize - 1; i++) {
		cout << "Enter element number " << i+1 << ": ";
		cin >> newArray[i];
	}
	
	cout << "The largest element of the array is " << largest(newArray, arraySize) << "."<< endl;
	cout << "The smallest element of the array is " << smallest(newArray, arraySize) << "."<< endl;
	cout << "The mean of the elements of the array is " << mean(newArray, arraySize) << "."<< endl;
	cout << "The median of the elements of the array is " << median(newArray, arraySize) << "."<< endl;
	cout << "The mode of the elements of the array is " << mode(newArray, arraySize) << "."<< endl;
	
	return 0;
}

