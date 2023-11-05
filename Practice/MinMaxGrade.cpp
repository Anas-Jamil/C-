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
		tolower(Z);
	} while (Z == 'y');
	cout << "Program Terminated" << endl;
}
void GetData() {
	double Grades, Grade, TotalGrades, MinGrade, MaxGrade, Average;
	Grades = 0;
	TotalGrades = 0;
	MinGrade = 101;
	MaxGrade = -1;
	while (true) {
		cout << "Enter a grade or -1 to exit: ";
		cin >> Grade;
		if (Grade == -1) {
			break;
		}
		else if (Grade < 0 || Grade > 100) {
			cout << "Please enter a grade between 0 and 100";
		}
		else {
			Grades++;
			TotalGrades += Grade;
			if (Grade < MinGrade) {
				MinGrade = Grade;
			}
			if (Grade > MaxGrade) {
				MaxGrade = Grade;
			}
		}
			
	}
	if (Grades == 0) {
		cout << "No Grades" << endl;
	}
	else {
	
	Average = TotalGrades / Grades;
	cout << "Min Grade: " << MinGrade << "\n" << "Max Grade: " << MaxGrade << "\n" << "Average: " << Average << endl;

	}

}

int main() {

	YorNo();
}