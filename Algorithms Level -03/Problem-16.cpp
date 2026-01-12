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
			cout << setw(2) << arr[g][j] << "   ";
		}
		cout << endl;
	}
}

void SparseMatrix(int arr[3][3], short Rows, short Cols)
{
	int Numberofdigits = 0, NumberOfZero = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short g = 0; g < Cols; g++)
		{
			if (arr[i][g] > 0)
				Numberofdigits++;
			else if (arr[i][g] == 0)
				NumberOfZero++;
		}
	}

	if (NumberOfZero > Numberofdigits)
		cout << "\nYes: it's Sparse\n";
	else
		cout << "\nNo: it's Not Sparse\n";


}

int main()
{
	int Matrix1[3][3] = { {0, 0, 12}, {0, 0, 1}, {0, 0, 9} };        // Sparse
	 //int Matrix1[3][3] = { {10, 0, 12}, {20, 15, 1}, {0, 7, 9} };  // No Sparse
	 
	cout << "Matrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	SparseMatrix(Matrix1, 3, 3);

	system("pause >0");
} 

// OR

// #include <iostream>
// #include <string>
// #include <cstdlib>
// #include <iomanip>

// using namespace std; 

// void PrintMatrix(int arr[3][3], short Rows, short Cols)
// {
// 	for (short g = 0; g < Rows; g++)
// 	{
// 		for (short j = 0; j < Cols; j++)
// 		{
// 			cout << setw(2) << arr[g][j] << "   ";
// 		}
// 		cout << endl;
// 	}
// }

// short CountNumberInMatrix(int arr[3][3], int Number ,short Rows, short Cols)
// {
// 	short NumberCount = 0;

// 	for (short i = 0; i < Rows; i++)
// 	{
// 		for (short g = 0; g < Cols; g++)
// 		{
// 			if (arr[i][g] == Number)
// 				NumberCount++;
// 		}
// 	}
// 	return NumberCount;
// }

// bool IsMatrixSparse(int arr[3][3], short Rows, short Cols)
// {
// 	short NumberCount = CountNumberInMatrix(arr, 0, Rows, Cols); 
// 	short MatrixSize = Rows * Cols;
// 	return  NumberCount >= MatrixSize - NumberCount; 
// }

// int main()
// {
// 	int Matrix1[3][3] = { {0, 0, 12}, {0, 0, 1}, {0, 0, 9} };        // Sparse
// 	 //int Matrix1[3][3] = { {10, 0, 12}, {20, 15, 1}, {0, 7, 9} };  // No Sparse
	 
// 	cout << "Matrix 1:\n";
// 	PrintMatrix(Matrix1, 3, 3);

// 	if (IsMatrixSparse(Matrix1, 3, 3))
// 		cout << "\nYes, it's Sparse\n";
// 	else
// 		cout << "\nNo, it's Not Sparse\n";

// 	system("pause >0");
// } 