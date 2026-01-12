#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std; 

int ReadNumber(string message)
{
	int Number = 0;
	cout << message << endl;
	cin >> Number;
	return Number;
}

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

int CountNumberInMatrix(int arr[3][3], int Number , short Rows, short Cols)
{
	short Counter = 0;

	for (short i = 0; i < Rows; i++)
	{
		for(short g = 0; g < Cols; g++)
		{
			if (arr[i][g] == Number)
				Counter++;
		}
	}
	return Counter;
}

int main()
{
	int Matrix1[3][3] = { {9, 1, 12}, {0, 9, 1}, {0, 9, 9} };
	
	cout << "Matrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);
	int Number = ReadNumber("\nEnter the number to count in matrix ? ");

	cout << "\nNumber " << Number << " Count In Matrix Is " 
		 << CountNumberInMatrix(Matrix1, Number, 3, 3);
	system("pause >0");
} 