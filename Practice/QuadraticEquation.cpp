// Anas Jamil
// 2023-01-30
// 100864684
// Program to calcuate roots using quadratic equation, and coeficients. 


#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

void GetData() {

	double x1, x2, a, b, c;
    char Z;
    
    do {
        cout << "Please enter your 'a' value (eg. 2x^2 + 3x + 4, a = 2):  ";
        cin >> a;
        cout << "Please enter your 'b' value (eg. 2x^2 + 3x + 4, b = 3):  ";
        cin >> b;
        cout << "Please enter your 'c' value (eg. 2x^2 + 3x + 4, c = 4):  ";
        cin >> c;

        x1 = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);

        x2 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

        cout << "Your x1 value is: " << x1 << endl;
        cout << "Your x2 value is: " << x2 << endl;

        cout << "Would you like to re-run the program? (y/n) ";
        cin >> Z;
    } while ((Z == 'Y') || (Z == 'y'));
    cout << "Program Terminated";

}

int main() {

    GetData();
}