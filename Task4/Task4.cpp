#include <iostream>
using namespace std;

void swap_sort(int &a, int &b, int &c, bool order) {
	int list[3] = {a, b, c};
	if (order == 1) { // Ascending
		for (int i = 0; i <= 1; i++) {
			int n = i + 1;
			if (list[i] > list[n]) {
				// Swaps values between i and n
				int temp = list[i];
				list[i] = list[n];
				list[n] = temp;
				if (list[0] > list[1]) {
					--i;
					int temp = list[i];
					list[i] = list[n];
					list[n] = temp;
				}
			}
			a = list[0];
			b = list[1];
			c = list[2];
		}
	} else if (order == 0) { // Descending
		for (int i = 0; i <= 1; i++) {
			int n = i + 1;
			if (list[i] < list[n]) {
				// Swaps values between i and n
				int temp = list[i];
				list[i] = list[n];
				list[n] = temp;
			}
		}
	}

}

int main() {
	int userInp=0, a, b, c;
	bool order;
	while(true) {
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