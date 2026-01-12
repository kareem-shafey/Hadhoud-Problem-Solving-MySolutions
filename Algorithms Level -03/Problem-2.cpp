#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 

int RandomNubmer(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Columns; g++)
		{
			arr[i][g] = RandomNubmer(1, 100);
		}
	}
}

void SumAllRows(int arr[3][3], short Rows, short Cols)
{
	short result = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Cols; g++)
		{
			result += arr[i][g];
		}
		cout << "Rows " << i + 1 << "Sum = " << result << endl;
		result = 0;
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Colums)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Colums; g++)
		{
			cout << setw(3) << arr[i][g] << "   ";
		}
		cout << endl;
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
	SumAllRows(arr, 3, 3);
	system("pause >0");
} 