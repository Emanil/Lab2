#include <iostream>
#include <cstring>
using namespace std;


bool is_palindrome(char str[], int len) {
	for (int i = len - 1; i >= 0; i--) {
		if (str[len - 1 - i] != str[i]) // Checks if the characters from oposite side are the same
			return false;
	}
	return true;
}

int main()
{
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

	return(0);
}

