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

int ColumSum(int arr[3][3], short Rows, short ColNumber)
{
	short Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		Sum += arr[i][ColNumber];
	}
	return Sum;
}

void PrintEachColSum(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Cols; i++)
	{
		cout << "Colum " << i + 1 << " Sum " << ColumSum(arr, Rows, i) << endl;
	}
}

int main() 
{
	srand(unsigned(time(NULL)));

	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);     
	
	cout << "\n The following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

	cout << "\n\nThe Following are the sum of each row in the matrix:\n";
	PrintEachColSum(arr,3, 3);

	system("pause >0");
} 