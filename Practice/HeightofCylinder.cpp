// Anas Jamil
// 2023-01-30
// 100864684
// Program to calculate the height of a cylinder. 


#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>


using namespace std;
void ValidInput();

void GetData() {

    char Z;
    
    do {
        ValidInput();

        cout << "Would you like to re-run the program? (y/n) "; 
        cin >> Z;
    } while ((Z == 'Y') || (Z == 'y'));
    cout << "Program Terminated";

}

void ValidInput() {

    double S, H, R;
    
    cout << "Please enter the radius of the cylinder: ";
    while (!(cin >> R)) {
        cout << "Please enter a number only: ";
        cin.clear();
        cin.ignore(132, '\n');

    }
    cout << "Please enter the suface of the cylinder: ";
    while (!(cin >> S)) {
        cout << "Please enter a number only: ";
        cin.clear();
        cin.ignore(132, '\n');

    }

    H = (S - 2 * M_PI * (R * R)) / (2 * M_PI * R);

    cout << "The height of the cylinder is: " << H << endl;
    printf("The rounded decimal value is: %.2f \n", H);
}

int main() {

    GetData();
}