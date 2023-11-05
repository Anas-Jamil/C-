#include "quest6.h"
#include <iostream>
#include <cstring>
using namespace std;

quest6::quest6() {
    char str1[50];
    char str2[50];

    cout << "Enter a string: ";
    cin.getline(str1, 50);

    // Copy str1 to str2
    strcpy(str2, str1);

    cout << str2 << endl;
}
