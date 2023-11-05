//Anas Jamil
//100864684

#include <iostream>
using namespace std;

int transposem[10][10];
void output(int imatrix[][10], int m)
{
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			cout << imatrix[i][j] << "\t";
		cout << endl;
	}
}

void transpose(int imatrix[][10], int m)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
		{
			transposem[i][j] = imatrix[j][i];
			transposem[j][i] = imatrix[i][j];
		}
}

int main()
{
	int matrix[10][10], a = 0;
	while (1) 
	{
		cout << "Please enter the amount of rows: ";
		cin >> a;
		if (a > 10 || a < 1)
		{
			cout << endl << "Please try again, out of range: " << endl;
			continue;
		}
		break;
	}
	cout << "Enter elements: " << endl;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cin >> matrix[i][j];
		}
	}
	transpose(matrix, a);
	cout << "original matrix:" << endl;
	output(matrix, a);
	cout << "matrix transpose: " << endl;
	output(transposem, a);
	return 0;
}
