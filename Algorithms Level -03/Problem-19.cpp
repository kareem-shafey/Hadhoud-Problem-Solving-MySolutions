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
			cout << setw(3) << arr[g][j] << "   ";
		}
		cout << endl;
	}
}


int MixNumberInMatrix(int arr[3][3], short Rows, short Cols)
{
	short MixNumber = 0;
	MixNumber = arr[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Cols; g++)
		{
			if (arr[i][g] > MixNumber)
				MixNumber = arr[i][g];
		}
	}
	return MixNumber;
	
}

int MinNumberInMatrix(int arr[3][3], short Rows, short Cols)
{
	short MinNumber = 0;
	MinNumber = arr[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Cols; g++)
		{
			if (arr[i][g] < MinNumber)
				MinNumber = arr[i][g];
		}
	}
	return MinNumber;

}


int main()
{
	int Matrix1[3][3] = { {77, 5, 12}, {22, 20, 6}, {14, 3, 9} };


	cout << "Matrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMiximum Number Is: " << MixNumberInMatrix(Matrix1, 3, 3) << endl;

	cout << "\nMinimum Number Is: " << MinNumberInMatrix(Matrix1, 3, 3) << endl;

	system("pause >0");
} 
