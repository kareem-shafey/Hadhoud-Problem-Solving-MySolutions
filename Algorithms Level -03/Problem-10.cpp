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

int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Cols; g++)
		{
			Sum += arr[i][g];
		}
	}
	return Sum;

}
int main() 
{
	srand(unsigned(time(NULL)));

	int Matrix[3][3];

	FillMitraxWithRandonNumber(Matrix, 3, 3);

	cout << "Matrix 1:\n";
	PrintMatrix(Matrix, 3, 3);

	cout << "\nSum Of Matrix Is: " << SumOfMatrix(Matrix, 3, 3) << endl;
	
	system("pause >0");
} 
