#include <iostream>
#include <cstdlib> 
#include <time.h> 
#include <string> 
using namespace std;

enum enOddOrEven {Odd = 1, Even = 2};

enOddOrEven CheckNumber(int Number)
{
	if (Number % 2 == 0)
		return enOddOrEven::Even;
	else
		return enOddOrEven::Odd;
}

int RandomNumber(int From, int To)
{
	int RandomNum = rand() % (To - From + 1) + From;
	return RandomNum;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength)
{
	cout << "Please Enter Array Length\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

int CopyOddNumbersInArray(int arr[100], int arrLength)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckNumber(arr[i]) == enOddOrEven::Odd)
		{
			Counter++;
		}
	}
	return Counter;
}

void PrintArray(int arr[10], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength = 0;

	FillArrayWithRandomNumber(arr, arrLength);

	cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);

	cout << "\nOdd Numbers Count Is: " << CopyOddNumbersInArray(arr, arrLength);

	return 0;
}
