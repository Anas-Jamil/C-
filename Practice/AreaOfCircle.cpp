// Anas Jamil 
// 2023-01-23
// #100864684
// Program to calculate area of a circle using user input.

#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

void Radius() {
    double R;
    double A;
    char Z;
    do {
        cout << "Please enter a radius: ";
        cin >> R;

        A = M_PI * (R * R);
        cout << "The area of the circle is: " << A << endl;

        cout << "Would you like to re-run the program? (y/n) ";
        cin >> Z;
    } while ((Z == 'Y') || (Z == 'y'));
    cout << "Program Terminated";
}
int main() {
    
    Radius();
}