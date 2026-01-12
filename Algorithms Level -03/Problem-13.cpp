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

bool IsIdentityMarix(int arr[3][3], short Rows, short Cols) 
{ 
	
	for (short i = 0; i < Rows; i++)     
	{    
		for (short j = 0; j < Cols; j++) 
		{			
			if (i == j && arr[i][j] != 1)   
			{ 
				return false;   
			} 
			else if (i != j && arr[i][j] != 0) 
			{ 
				return false;   
			}  
		}      
	}    
	return true; 
} 


int main()
{
	int Matrix1[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };   // Identity Matrix
	//int Matrix1[3][3] = { {1, 4, 0}, {0, 2, 6}, {1, 5, 3} }; // Not Identity Matrix


	cout << "Matrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsIdentityMarix(Matrix1, 3, 3))
		cout << "\nYes: Matrix Is Identity\n";
	else
		cout << "\nNo: Matrix Is Not Identity\n";

	system("pause >0");
} 
