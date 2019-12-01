#include <iostream>
#include <vector>
#include <lab2lib.cpp>
using namespace std;

void task1() {
	int array[4] = {};
	for (int i = 0; i < 4; i++) {
		cout << "Enter 4 numbers for the array: ";
		cin >> array[i];
	}
	int returnedValue = is_sorted(array);
	cout << "Is the array sorted? " << returnedValue << endl;
}

void task2() {
	char userinp;
	char word[20]; //Set the word to a maximum of 20 characters
	int lenght;

	do {
		cout << "Type a word: ";
		cin >> word;

		lenght = strlen(word);
		int returned_Value = is_palindrome(word, lenght);

		if (returned_Value == 0)
			cout << "Not a palindrome" << endl;

		else if (returned_Value == 1)
			cout << "palindrome" << endl;

		cout << "Test again (Y/N)?" << endl;
		cin >> userinp;

	} while (userinp == 'Y' || userinp == 'y');
}

void task3() {

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
	}

	array_rows_cols(arr, userInpRows, userInpColums);

	for (int i = 0; i < userInpRows; i++) { // Deletes memory for the array
		delete[] arr[i];
	}
	delete[] arr;
}

void task4() {
	int userInp = 0, a, b, c;
	bool order;
	while (true) {
		cout << "Give 'a' a value (0 = quit): ";
		cin >> userInp;
		if (userInp == 0)
			break;
		a = userInp;
		cout << "Give 'b' a value: ";
		cin >> userInp;
		b = userInp;
		cout << "Give 'c' a value: ";
		cin >> userInp;
		c = userInp;
		cout << "Sort ascending/descending (1/0): ";
		cin >> order;

		swap_sort(a, b, c, order);

		cout << a << ", " << b << ", " << c << endl;
	}
}

void task5() {
	int arr[] = { 5,3,7,3,9,1,2 };
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
}

void task6() {
	int userInp = 1;
	string wordInp, userYN;
	vector<string> vector;
	while (userInp) {
		cout << endl;
		cout << "MENU:" << endl;
		cout << "1: Initialise vector" << endl;
		cout << "2: Insert" << endl;
		cout << "3: Search" << endl;
		cout << "4: Delete" << endl;
		cout << "5: Print" << endl;
		cout << "6: Quit" << endl;
		cout << endl;
		cout << "Input: ";
		cin >> userInp;

		userInp = vector_Alternatives(userInp, wordInp, userYN, vector);
	}
}

int main() {
	while (true) {
		int inpChoice;
		cout << "Menu:" << endl;
		cout << "1: Task 1" << endl;
		cout << "2: Task 2" << endl;
		cout << "3: Task 3" << endl;
		cout << "4: Task 4" << endl;
		cout << "5: Task 5" << endl;
		cout << "6: Task 6" << endl;
		cout << "0: Exit" << endl;
		cout << "Input: ";
		cin >> inpChoice;

		switch (inpChoice) {

		case 1:
			task1();
			break;

		case 2:
			task2();
			break;

		case 3:
			task3();
			break;

		case 4:
			task4();
			break;

		case 5:
			task5();
			break;

		case 6:
			task6();
			break;

		case 0:
			return 0;

		default:
			cout << "No such task exists" << endl;
			break;
		}
	}
	
}

