#include "quest2.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct employees
{
    int ID;
    string name;
    int hours;
    double rate;
};
quest2::quest2()
{
    struct employees s;
    double pay;

    cout << "Enter your Employee ID: ";
    cin >> s.ID;
    cout << "Enter your Name: ";
    cin >> s.name;
    cout << "Enter amount of hours worked: ";
    cin >> s.hours;
    cout << "Enter your hourly rate: ";
    cin >> s.rate;

    pay = s.hours * s.rate;

    cout << "Name: " << s.name << endl;
    cout << "Employee ID: " << s.ID << endl;
    cout << "Hours Worked: " << setprecision(4) << s.hours << endl;
    cout << "Rate: " << s.rate << endl;
    cout << "Salary: $" << pay << endl;
}
