#include <iostream>

using namespace std;

void FillArray(int arr[10], int& arrLength)
{
	arrLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

void PrintArray(int arr[10], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void AddArrayElemenst(int Number, int arr[10], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}

short FindNumberPositionInArray(int arr[10], int arrLength, int Number)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
		{
			return i;
		}
	}
	return -1;
}

bool IsNumberInArray(int Number, int arr[10], int arrLength)
{
	return FindNumberPositionInArray(arr, arrLength, Number) != -1;
}

void CopyDestinctNumbersToArray(int arr1[10], int Destinct[10], int arr1Length, int &arr2Length)
{
	for (int i = 0; i < arr1Length; i++)
	{
		if (!IsNumberInArray(arr1[i], Destinct, arr2Length))
		{
			AddArrayElemenst(arr1[i], Destinct, arr2Length);
		}
	}
}


int main()
{
	int arrSource[10], arrLength = 0;

	FillArray(arrSource, arrLength);

	cout << "\nArray Elements\n";
	PrintArray(arrSource, arrLength);

	int Destinct[10], arr2Length = 0;
	CopyDestinctNumbersToArray(arrSource, Destinct, arrLength, arr2Length);

	cout << "\nDestinct Array 1 Elemenst\n";
	PrintArray(Destinct, arr2Length);

	return 0;
}