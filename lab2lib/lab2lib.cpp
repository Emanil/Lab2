#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Task1 -----------
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
//-----------------

//Task2 -----------
bool is_palindrome(char str[], int len) {
	for (int i = len - 1; i >= 0; i--) {
		if (str[len - 1 - i] != str[i]) // Checks if the characters from oposite side are the same
			return false;
	}
	return true;
}
//-----------------

//Task3 -----------
void array_rows_cols(int** arr, int userInpRows, int userInpColums) {
	int adderRow = 0, adderColum = 0, lastColumn = 0, lastRow = 0;
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
//----------------------------------

//Task4 -----------------------------
void swap_sort(int& a, int& b, int& c, bool order) {
	int list[3] = { a, b, c };
	int i = 0, n = i + 1; // Iterators
	if (order == 1) { // Ascending
		while (list[0] > list[1] || list[0] > list[2] || list[1] > list[2]) {

			// Swaps values between i and n
			if (list[i] > list[n]) {
				int temp = list[i];
				list[i] = list[n];
				list[n] = temp;
			}
			//

			i++;
			n++;

			//Resetts the values of the iterators
			if (i == 3) {
				i = 0;
			}
			if (n >= 3) {
				n = 1;
			}
			//
		}
		a = list[0]; // Untill now a,b,c hasn't changed
		b = list[1];
		c = list[2];

	}
	else if (order == 0) { // Descending
		for (int i = 0; i <= 1; i++) {
			while (list[0] < list[1] || list[0] < list[2] || list[1] < list[2]) {

				// Swaps values between i and n
				if (list[i] < list[n]) {
					int temp = list[i];
					list[i] = list[n];
					list[n] = temp;
				}
				i++;
				n++;
				if (i == 3) {
					i = 0;
				}
				if (n >= 3) {
					n = 1;
				}
			}
			a = list[0];
			b = list[1];
			c = list[2];
		}
	}

}
//------------------------------------------

//Task5 -----------
void shrink_array(int* arr, int size) {
	int currentSize = 0, x = 0;
	for (int i = 0; i < size; i += 2) {
		int n = i + 1;
		if (i == size - 1) { // If end of uneven array
			arr[i] = arr[i];
			currentSize++;
		}
		else {
			arr[i] = arr[i] + arr[n];
			currentSize++;
		}

		arr[x] = arr[i]; // Adds the sum at the start of the array
		x++;

		if (i == size - 1 || n + 1 == size) { // i for uneven and n+1 for even arrays
			while (currentSize < size) { // Makes rest of the array, 0
				arr[currentSize] = 0;
				currentSize++;
			}
		}
	}
}

main() {

}