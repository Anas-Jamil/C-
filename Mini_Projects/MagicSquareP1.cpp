//Anas Jamil
//100864684

#include <iostream>
using namespace std;

int inputs[4][4];
bool magicsquare()
{
	int temp[16];
	int value;
	bool entry = false;
	int h = 0;

	cout << "This code will figure out weather the numbers you enter create a magic square using a 4x4 matrix. " << endl;
	cout << "\nPlease enter your values: " << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; )
		{
			cin >> value;
			if (value > 16 || value <= 0)
				entry = true;

			for (int k = 0; k < h; k++)
			{
				if (temp[k] == value)
				{
					entry = true;

					break;
				}
			}
			if (entry)
			{
				cout << "\n" << "Wrong input" << endl;


				cout << "a magic sqaure matrix must be a 4x4, all values in the matrix have to be in the range 1-16 and should be different numbers" << endl;
				entry = false;

				continue;
			}
			else
			{
				inputs[i][j] = value;
				j++;

				temp[h] = value;
				h++;
			}
		}
	}
	int diag_sum_left = inputs[0][0] + inputs[1][1] + inputs[2][2] + inputs[3][3];
	int diag_sum_right = inputs[0][3] + inputs[1][2] + inputs[2][1] + inputs[3][0];
	if (diag_sum_left != diag_sum_right)
		return false;

	for (int i = 0; i < 4; i++)
	{
		int row_sum = 0;
		for (int j = 0; j < 4; j++)
		{
			row_sum += inputs[i][j];
		}
		int col_sum = 0;
		for (int j = 0; j < 4; j++)
		{
			col_sum += inputs[j][i];
		}
		if ((row_sum != diag_sum_left) || (col_sum != diag_sum_left))
			return false;
	}
	return true;

	bool is_magic = magicsquare();

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << inputs[i][j] << "\t";
		cout << endl;
	}
	if (is_magic)
		cout << "Magic sqaure!" << endl;
	else
		cout << "Mot a magic square!" << endl;

	return 0;
}

int main()
{

	bool is_magic = magicsquare();

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << inputs[i][j] << "\t";
		cout << endl;
	}
	if (is_magic)
		cout << "Magic sqaure!" << endl;
	else
		cout << "Mot a magic square!" << endl;

	return 0;
	
}
