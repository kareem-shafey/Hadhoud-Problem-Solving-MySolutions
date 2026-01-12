#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Cols; g++)
		{
			arr[i][g] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;
	}
}


short RowSum(int arr[3][3], short RowsNumber, short Cols)
{
	short Sum = 0;
	for (short g = 0; g < Cols; g++)
	{
		Sum += arr[RowsNumber][g];
	}
	return Sum;
}

void SumMatrixRowsInArray(int arr[3][3], int arr2[3], short Rows, short Cols)
{
	for(short i = 0; i < Rows; i++)
	{
		arr2[i] = RowSum(arr, i, Cols);
	}
}

void PrintRowsSumArray(int arrSum[3], short Rows)
{
	for (short i = 0; i < Rows; i++)
	{
		cout << "Rows " << i + 1 << " Sum = " << arrSum[i] << endl;
	}
}

int main() 
{
	srand(unsigned(time(NULL)));

	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);     
	
	cout << "\n The following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

	int arrSum[3];

	cout << "\n\nThe Following are the sum of each row in the matrix:\n";
	
	SumMatrixRowsInArray(arr, arrSum, 3, 3);

	PrintRowsSumArray(arrSum, 3);

	system("pause >0");
} 