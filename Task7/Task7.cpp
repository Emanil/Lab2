#include <iostream>
#include <vector>
using namespace std;

int main() {
	while (true) {
		int inpChoice;
		cout << "Menu :" << endl;
		cout << "1: Task 1" << endl;
		cout << "2: Task 2" << endl;
		cout << "3: Task 3" << endl;
		cout << "4: Task 4" << endl;
		cout << "5: Task 5" << endl;
		cout << "6: Task 6" << endl;
		cout << "0: Exit" << endl;
		cin >> inpChoice;

		switch (inpChoice) {
		case 1:
			int is_sorted(int arr[4]);
			break;

		case 2:
			bool is_palindrome(char str[], int len);
			break;

		case 3:
			void array_rows_cols(int** arr, int userInpRows, int userInpColums);
			break;

		case 4:
			void swap_sort(int& a, int& b, int& c, bool order);
			break;

		case 5:
			void shrink_array(int* arr, int size);
			break;

		case 6:
			int vector_Alternatives(int userInp, string wordInp, string userYN, vector<string> & vector);
			break;

		case 0:
			return 0;

		default:
			cout << "No such task exist" << endl;
			break;
		}
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
