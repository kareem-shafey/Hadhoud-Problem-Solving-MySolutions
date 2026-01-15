#include <iostream>
#include <cstdlib>
using namespace std; 

int RandomNumer(int From, int To)
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
			arr[i][g] = RandomNumer(1, 100);
		}
	}
}

void PrintArray(int arr[3][3], short Rows, short Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Columns; g++)
		{
			if (arr[i][g] < 10)
				cout << " " << arr[i][g] << "  ";
			else
				cout << arr[i][g] << "  ";
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
	PrintArray(arr, 3, 3);
	system("pause >0");
} 