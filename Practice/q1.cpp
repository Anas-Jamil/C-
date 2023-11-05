#include <iostream>
#include <fstream>

using namespace std;

void GetData();
void Menu() {
    char Z;
    cout << "This program will take input from a file and check if it is equal to 7.5 using given formula." << endl;
    do {
        GetData();
        cout << "\nWould you like to re-run the program? (y/n) ";
        cin >> Z;
        Z = tolower(Z); 
    } while (Z == 'y');
    cout << "Program Terminated";
}

void GetData() {
    double R1, R2, R3, R4, R5, R6, ans, ans2, ans3;
    ifstream inputFile("resistances.txt");

    if (inputFile.fail()) {
        cout << "File failed to open." << endl;
        return;
    }

    while (inputFile >> R1 >> R2 >> R3 >> R4 >> R5 >> R6) {


        ans = (R1 + R2) * (R4 * R6);
        ans2 = (R3 + R4) * (R1 * R5);
        ans3 = ans / ans2;
        if (ans3 == 7.5) {
            cout << "Good design: " << "\n" << R1 << "\n" << R2 << "\n" << R3 << "\n" << R4 << "\n" << R5 << "\n" << R6 << "\n" << endl;
        }
        else {
            cout << "bad design: " << "\n" << R1 << "\n" << R2 << "\n" << R3 << "\n" << R4 << "\n" << R5 << "\n" << R6 << "\n" << endl;
        }
    }

    inputFile.close();
}

int main() {
    Menu();
    return 0;
}