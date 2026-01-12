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
			cout << setw(3) << arr[g][j] << "   ";
		}
		cout << endl;
	}
}

bool IsMatrixPalidrome(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Cols; g++)
		{
			if (arr[i][g] != arr[i][Cols - 1  - g])
				return false;
		}
	}
	return true;
}


int main()
{
	int Matrix1[3][3] = { {1, 2, 1}, {5, 5, 5}, {7, 3, 7} };  // Palindrome
	//int Matrix1[3][3] = {{1, 1, 1}, {5, 5, 5},{7, 7, 7} };    // Palindrome
	//int Matrix1[3][3] = { {1, 2, 1}, {5, 5, 5}, {7, 3, 8} };  // No Palindrome


	cout << "Matrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsMatrixPalidrome(Matrix1, 3, 3))
		cout << "\nYes: Matrix Is Palidrome\n";
	else 
		cout << "\n No: Matrix Is Not Palidrome\n";

	system("pause >0");
} 
