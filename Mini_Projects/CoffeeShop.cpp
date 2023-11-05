// Anas Jamil
// 2023-02-06
// 100864684
// Program for a coffee shop that prints recipt.



#include <iostream>
#include <iomanip>
using namespace std;
void Select();


void Menu() {

	char Z;

	cout << "Today's Menu \n____________" << endl;
	cout << "1: $4.99 | Coffee \n2: $1.99 | Doughnuts\n3: $3.99 | iced Coffee\n4: $5.99 | Cake" << endl;

	do {
		Select();

		cout << "\nWould you like to re-run the program? (y/n) ";
		cin >> Z;
	} while ((Z == 'Y') || (Z == 'y'));
	cout << "Program Terminated";



}
void Select() {
	double C, D, I, CA, Subtotal, Total, Tax;
	double Coffee, Doughnut, Ice, Cake;

	cout << "How many coffee's would you like: ";
	while (!(cin >> C)) {
		cout << "Please enter a number only: ";
		cin.clear();
		cin.ignore(132, '\n');
	}
	cout << "How many doughnuts would you like: ";
	while (!(cin >> D)) {
		cout << "Please enter a number only: ";
		cin.clear();
		cin.ignore(132, '\n');
	}
	cout << "How many iced coffee's would you like: ";
	while (!(cin >> I)) {
		cout << "Please enter a number only: ";
		cin.clear();
		cin.ignore(132, '\n');
	}
	cout << "How many cake's would you like: ";
	while (!(cin >> CA)) {
		cout << "Please enter a number only: ";
		cin.clear();
		cin.ignore(132, '\n');
	}

	Coffee = 4.99 * C;
	Doughnut = 1.99 * D;
	Ice = 4.99 * I;
	Cake = 2.00 * CA;


	Subtotal = Coffee + Doughnut + Ice + Cake;
	Tax = (Subtotal) * .13;
	Total = Tax + Subtotal;



	cout << "\nYour Recipt\n__________________" << endl;
	cout << "Coffee: " << C << "X" << endl;
	cout << "Doughnuts: " << D << "X" << endl;
	cout << "Iced Coffee: " << I << "X" << endl;
	cout << "Cake: " << CA << "X" << endl;
	cout << "\nSubtotal: $ " << Subtotal << endl;
	cout << fixed;
	cout.precision(2);
	cout << "Tax: $" << Tax << endl;
	cout << "Total: $" << Total << endl;


}


int main() {

	Menu();
}