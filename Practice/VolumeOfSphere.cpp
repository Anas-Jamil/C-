// Anas Jamil 
// 2023-01-23
// #100864684
// Program to calculate the volume of a sphere using user input.


#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

void Volume() {
	double R;
	double V;
	char ans;

	do {
		cout << "Please enter a radius: ";
		cin >> R;

		V = 4 / 3 * M_PI * (R * R);
		cout << "The volume of the sphere is: " << V << endl;

		cout << "Would you like to re-run the program? (y/n) "; 
		cin >> ans;

	} while ((ans == 'Y') || (ans == 'y'));
	cout << "Program Terminated"
}

int main() {

	Volume();
}