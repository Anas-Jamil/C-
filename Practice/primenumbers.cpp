#include <iostream>
#include <cmath>

using namespace std;
void GetData();
void YorNo() {
	char Z;

	do {
		GetData();
		cout << "Would you like to re-run the code? (y/n)";
		cin >> Z;
	} while (Z == 'y' || Z == 'Y');
	cout << "Program Terminated" << endl;
}
bool IsPrime(int num) {
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

void GetData() {

	int mnum, i;
	int low = 2;

	cout << "Enter a number: ";
	cin >> mnum;

	if (mnum <= 1) {
		cout << "Enter Again: ";
		return;
	}
	else {
		cout << "Prime numebrs are up to: " << mnum << endl;
		for (int num = 2; num <= mnum; num++) {
			if (IsPrime(num)) {
				cout << num << endl;
			}
		}
		return;
	}

	
}

int main() {

	YorNo();
}