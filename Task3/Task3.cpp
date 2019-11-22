#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void array_rows_cols(int &arr, int size) {
	cout << arr << endl;
}

int main() {

	//srand(time(NULL)); // Makes rand() random every run

	int userInpRows, userInpColums;
	cout << "Enter number of rows: ";
	cin >> userInpRows;

	cout << "Enter number of columns: ";
	cin >> userInpColums;

	int** arr = new int* [userInpRows]; //Adds memory for the array
	

	for (int i = 0; i < userInpRows; i++) {
		arr[i] = new int[userInpColums];
		*arr[i] = rand() % 10; //random numbers from 0 to 9
		cout << *arr[i];

	}

	for (int i = 0; i < userInpColums; i++) {
		
		*arr[i] = rand() % 10;
		cout << *arr[i] << endl;
	}
	
	//stuff


	for (int i = 0; i < userInpRows; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	
	return(0);
}
