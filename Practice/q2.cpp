// Anas Jamil
// 100864684
// 2023-03-03


#include <iostream>

using namespace std; 
void GetData();

void Menu() {

	char Z;

	do {
		GetData();

		cout << "Would you like to re-run this program? (y/n) ";
		cin >> Z;
		Z = tolower(Z);
	} while (Z == 'y');
	cout << "Program Terminated";

}
void GetData() {

	int PosInt;

	cout << "Please enter a postive integer: ";
	while (!(cin >> PosInt)) {
		cout << "Please enter a number only: ";
		cin.clear();
		cin.ignore(132, '\n');
	}

	while (PosInt < 0) {

		cout << "Please enter a postive integer only: ";
		cin >> PosInt;
	}
	if (PosInt > 0) {

	 for (int i = 1; i <= PosInt; ++i) {
			
			if (PosInt % i == 0)
				cout << i << "\n"; 
		}

	}
}
int main() {

	Menu();
}