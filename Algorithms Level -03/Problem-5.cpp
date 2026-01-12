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
		for (short g = 0; g < Cols; g++)
		{
			cout << setw(3) << arr[i][g];
		}
		cout << endl;
	}
}

short ColSum(int arr[3][3], short Rows, short ColNumber)
{
	short Sum = 0;

	for (short g = 0; g < Rows; g++)
	{
		Sum += arr[g][ColNumber];
	}
	return Sum;
}

void SumMatrixColsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
	for (short i = 0; i < Cols; i++)
	{
		arrSum[i] = ColSum(arr, Rows, i);
	}
}

void PrintSumArray(int arr[3], short Cols)
{
	for (short i = 0; i < Cols; i++)
	{
		cout << "Cols " << i + 1 << " Sum " << arr[i] << endl;
	}
}
int main() 
{
	srand(unsigned(time(NULL)));

	int arr[3][3];
	int arrSum[3];

	FillMatrixWithRandomNumbers(arr, 3, 3);    

	cout << "\n The following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

	SumMatrixColsInArray(arr, arrSum, 3, 3);


	cout << "\n\nThe Following are the sum of each row in the matrix:\n";
	PrintSumArray(arrSum,3);

	system("pause >0");
} 