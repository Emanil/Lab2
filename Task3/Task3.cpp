#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void array_rows_cols(int **arr, int userInpRows, int userInpColums) {
	int adderRow = 0, adderColum=0, lastColumn=0, lastRow=0;
	for (int i = 0; i < userInpRows; i++) { //Loops userInpColums a number of userInpRows times

		for (int j = 0; j < userInpColums; j++) { //Prints userInpColums times
			cout << arr[i][j] << "  ";
			adderColum = adderColum + arr[i][j];
			if (j == userInpColums - 1) { // last of column to be added to last of row
				lastColumn = adderColum;
			}
		}
		cout << adderColum;
		
		adderColum = 0;
		cout << endl;
	}
	
	for (int j = 0; j < userInpColums; j++) { // Had to copy this for for j
		for (int x = 0; x < userInpRows; x++) {
			adderRow = adderRow + arr[x][j];
			if (x == userInpRows - 1) {
				lastRow = adderRow;
			}
		}
		cout << adderRow << " ";
		
		adderRow = 0;
	}
	cout << "[" << lastRow + lastColumn << "]" << endl;
}

int main() {

	//srand(time(NULL)); // Makes rand() random every run (bad for debugging, good for testing)

	int userInpRows, userInpColums;
	cout << "Enter number of rows: ";
	cin >> userInpRows;

	cout << "Enter number of columns: ";
	cin >> userInpColums;

	int** arr = new int* [userInpRows]; //Adds memory for the array
	
	for (int i = 0; i < userInpRows; i++) {
		arr[i] = new int[userInpColums];
	}

	for (int i = 0; i < userInpRows; i++) {

		for (int j = 0; j < userInpColums; j++) {
			arr[i][j] = rand() % 10; // Adds random numbs from 0 to 9 to array
		}
		//cout << *arr[i] << endl;

	}

	array_rows_cols(arr, userInpRows, userInpColums);


	for (int i = 0; i < userInpRows; i++) { // Deletes memory for the array
		delete[] arr[i];
	}
	delete[] arr;

	
	return(0);
}
