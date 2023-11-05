// Anas Jamil 
// 2023-01-23
// #100864684
// Program to calculate tension in a cord with given mass values. 


#include <iostream>

using namespace std;

void Tension() {

	double m1, m2, g, T;
	char ans;

	m1 = 100.00;
	m2 = 50.00;
	g = 9.81;

	cout << "The three pre-initialzied data values are \n m1 = 100 g \n m2 = 50 g \n g = 9.81 m/s^2" << endl;

	T = (2 * m1 * m2 / m1 + m2) * g;
	cout << "The tension in the cord is: " << T << endl;
}

int main() {

	Tension();
}