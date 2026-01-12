#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std; 

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillMitraxWithRandonNumber(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Cols; g++)
		{
			arr[i][g] = RandomNumber(1, 10);
		}
	}
}

void SumMatrixInArray(int arr1[3][3], int arr2[3][3], int MatrixSum[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Cols; g++)
		{
			MatrixSum[i][g] = arr1[i][g] * arr2[i][g];
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short g = 0; g < Rows; g++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf("%0*d   ", 2, arr[g][j]);
		}
		cout << endl;
	}
}

int main() 
{
	srand(unsigned(time(NULL)));

	int Matrix1[3][3], Matrix2[3][3], MatrixResults[3][3];


	FillMitraxWithRandonNumber(Matrix1, 3, 3);
	cout << "Matrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	FillMitraxWithRandonNumber(Matrix2, 3, 3);
	cout << "\nMatrix 2:\n";
	PrintMatrix(Matrix2, 3, 3);

	SumMatrixInArray(Matrix1, Matrix2, MatrixResults, 3, 3);

	cout << "\nResult:\n";
	PrintMatrix(MatrixResults, 3, 3);

	system("pause >0");
} 