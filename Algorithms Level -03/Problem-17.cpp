#include <iostream>
#include <string>
#include <cmath>
#include <iomanip> 

using namespace std; 

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short g = 0; g < Rows; g++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(2) << arr[g][j] << "   ";
		}
		cout << endl;
	}
}

short IsNumberInMatrix(int arr[3][3], int Number ,short Rows, short Cols)
{

	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Cols; g++)
		{
			if (arr[i][g] == Number)
				return true;
		}
	}
	return false;
}

int main()
{
	int Matrix1[3][3] = { {77, 5, 12}, {22, 20, 1}, {1, 0, 9} };

	cout << "Matrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	int Number = 0;
	cout << "\nPlease Enter the number to look for in matrix? ";
	cin >> Number;

	if (IsNumberInMatrix(Matrix1, Number, 3, 3))
		cout << "\nYes, it's there\n";
	else
		cout << "\nNo, it's Not there.\n";

	system("pause >0");
} 