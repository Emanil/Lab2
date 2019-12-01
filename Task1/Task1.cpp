#include <iostream>
using namespace std;


int is_sorted(int arr[4]) {
	bool result;
	for (int i = 0; i < 3; i++) { //i goes through the whole array
		if (arr[i] > arr[i + 1]) {
			result = false;
			return result;
		}
		else if (arr[i] <= arr[i + 1]) {
			result = true;
		}
	}
	return result;
}

int main() {

	int array[4] = {};
	for (int i = 0; i < 4; i++) { 
		cout << "Enter 4 numbers for the array: ";
		cin >> array[i];
	}
	int returnedValue = is_sorted(array);
	cout << "Is the array sorted? " << returnedValue << endl;

	return(0);
}

