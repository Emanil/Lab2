#include <iostream>
using namespace std;


void shrink_array(int *arr, int size) {
	int currentSize = 0,x=0;
	for (int i = 0; i < size; i+=2) {
		int n = i + 1;
		if (i==size-1) { // If end of uneven array
			arr[i] = arr[i];
			currentSize++;
		}
		else {
			arr[i] = arr[i] + arr[n];
			currentSize++;
		}

		arr[x] = arr[i]; // Adds the sum at the start of the array
		x++;

		if (i == size-1 || n+1 == size) { // i for uneven and n+1 for even arrays
			while (currentSize < size) { // Makes rest of the array, 0
				arr[currentSize] = 0;
				currentSize++;
			}
		}
	}
}

int main() {
	int arr[] = {5,3,7,3,9,1,2};
	int size = *(&arr + 1) - arr; // Difference between *(&arr + 1) and arr is the lenght

	cout << "Input array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i];
		if (i != size - 1) {
			cout << ", ";

		}
		else
			cout << endl;
	}

	shrink_array(arr, size);

	cout << "Output array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i];
		if (i != size - 1) {
			cout << ", ";
		}
		else
			cout << endl;
	}
	return(0);
}