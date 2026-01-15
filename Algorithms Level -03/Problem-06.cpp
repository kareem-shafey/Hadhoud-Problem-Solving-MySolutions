#include <iostream>
#include <string>
using namespace std; 

void FillMatrixWithOrderedNumber(int arr[3][3], short Rows, short Cols)
{
	short Counter = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Cols; g++)
		{
			Counter++;
			arr[i][g] = Counter;
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
  }
}

int main() 
{
	
	int arr[3][3];
	FillMatrixWithOrderedNumber(arr, 3, 3);

	cout << "\nThe Following is a 3x3 ordered Matrix:\n";
	PrintMatrix(arr, 3, 3);
	system("pause >0");
} 