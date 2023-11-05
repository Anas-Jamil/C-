#include <iostream>
#include <string>

using namespace std;
void GetData();

void YorN() {

    char Z;
    do {
        GetData();
        cout << "Would you like to re-run the code? (y/n)";
        cin >> Z;
    } while (Z == 'y' || Z == 'Y');
    cout << "Program Terminated" << endl;
}
void GetData() {

    string sent;

    cout << "Please enter a sentence: ";
    getline(cin, sent);

    for (char& c : sent) {
        if (c >= 'A' && c <= 'Z') {
            c = tolower(c);
        }
        else if (c >= 'a' && c <= 'z') {
            c = toupper(c);
        }
    }

    cout << sent << endl;

}
int main() {

    YorN();
}