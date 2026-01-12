#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

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

void printMiddleRowsMatrix(int arr[3][3], short RowNumber, short Cols)
{
	for (short i = 0; i < Cols; i++)
	{
		printf("%0*d   ", 2, arr[RowNumber][i]);
	}
	cout << endl;
}

void PrintMiddleColsMatrix(int arr[3][3], short Rows, short ColsNumber)
{
	for (short i = 0; i < Rows; i++)
	{
		printf("%0*d   ", 2, arr[i][ColsNumber]);
	}
	cout << endl;
}

int main() 
{
	srand(unsigned(time(NULL)));

	int Matrix[3][3];

	FillMitraxWithRandonNumber(Matrix, 3, 3);

	cout << "Matrix 1:\n";
	PrintMatrix(Matrix, 3, 3);

	cout << "\nMiddle Row Of Matrix 1 is:\n";
	printMiddleRowsMatrix(Matrix, 1, 3);

	cout << "\nMiddle Cols Of Matrix 1 is:\n";
	PrintMiddleColsMatrix(Matrix, 3, 1);
	system("pause >0");
} 