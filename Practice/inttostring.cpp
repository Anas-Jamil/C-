#include <iostream>
#include <string>

using namespace std;

string one[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
string teen[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
string ten[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

string conversion(int value);
void GetData();

string conversion(int value) {
    if (value == 0) {
        return "zero";
    }
    string convertedword;
    if (value >= 1000000) {
        convertedword += conversion(value / 1000000) + " million ";
        value %= 1000000;
    }
    if (value >= 1000) {
        convertedword += conversion(value / 1000) + " thousand ";
        value %= 1000;
    }
    if (value >= 100) {
        convertedword += one[value / 100] + " hundred ";
        value %= 100;
    }
    if (value >= 20) {
        convertedword += ten[value / 10];
        value %= 10;
        if (value > 0) {
            convertedword += " ";
        }
    }
    if (value >= 10 && value < 20) {
        convertedword += teen[value - 10];
    }
    else if (value >= 1 && value <= 9) {
        convertedword += one[value];
    }
    return convertedword;
}

void GetData() {
    double currency;
    cout << "Please enter a value: ";
    cin >> currency;
    int dollars = (int)currency;
    int cents = (int)((currency - dollars) * 100);
    string dollarsString = conversion(dollars);
    string centsString = conversion(cents);
    cout << dollarsString << " dollars";
    if (centsString != "") {
        cout << " and " << centsString << " cents";
    }
    cout << endl;
}

int main() {
    char Z;
    do {
        GetData();
        cout << "Would you like to re-run the code? (y/n): ";
        cin >> Z;
    } while (Z == 'y' || Z == 'Y');
    cout << "Program Terminated" << endl;
}
