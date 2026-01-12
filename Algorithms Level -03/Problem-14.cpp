#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std; 

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short g = 0; g < Rows; g++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << arr[g][j] << "  ";
		}
		cout << endl;
	}
}

bool IsScalarMarix(int arr[3][3], short Rows, short Cols) 
{ 
	int FirstDiagElement = arr[0][0]; 
	
	for (short i = 0; i < Rows; i++)     
	{    
		for (short j = 0; j < Cols; j++) 
		{
			if (i == j && arr[i][j] != FirstDiagElement) 
				return false;
			else if (i != j && arr[i][j] != 0) 
				return false;    
		}      
	}    
	return true; 
} 

int main()
{
	int Matrix1[3][3] = { {6, 0, 0}, {0, 6, 0}, {0, 0, 6} };     // Scalar Matrix
	//int Matrix1[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };   // Scalar Matrix
	//int Matrix1[3][3] = { {9, 0, 0}, {0, 9, 0}, {0, 0, 7} };   // No Scalar Matrix
	//int Matrix1[3][3] = { {1, 4, 0}, {0, 2, 6}, {1, 5, 3} };   // No Scalar Matrix

	cout << "Matrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsScalarMarix(Matrix1, 3, 3))
		cout << "\nYes: Matrix Is Scalar\n";
	else
		cout << "\nNo: Matrix Is Not Scalar\n";

	system("pause >0");
} 