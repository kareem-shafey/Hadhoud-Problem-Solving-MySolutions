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

void PrintIntersectedMatrix(int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Cols; g++)
		{
			for (short j = 0; j < Rows; j++)
			{
				for (short y = 0; y < Cols; y++)
				{
					if (arr1[i][g] == arr2[j][y])
					{
						cout << arr1[i][g] << "    ";
					}
				}
			}

		}
	}
}

int main()
{
	int Matrix1[3][3] = { {77, 5, 12}, {22, 20, 1}, {1, 0, 9} };
	int Matrix2[3][3] = { {5, 8, 90}, {22, 77, 1}, {10, 8, 33} };


	cout << "Matrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMatrix 1:\n";
	PrintMatrix(Matrix2, 3, 3);

	cout << "\nIntersected Numbers are: \n";
	PrintIntersectedMatrix(Matrix1, Matrix2, 3, 3);

	system("pause >0");
} 