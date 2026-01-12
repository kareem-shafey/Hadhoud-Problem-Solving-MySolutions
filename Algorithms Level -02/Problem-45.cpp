#include <iostream>
#include <cstdlib> 
#include <time.h> 
#include <string> 
using namespace std;

enum enPositiveOrNotPositive {Positive = 1, Negative = 2};

enPositiveOrNotPositive CheckNumbers(int Number)
{
	if (Number >= 0)
		return enPositiveOrNotPositive::Positive;
	else
		return enPositiveOrNotPositive::Negative;
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
		arr[i] = RandomNumber(-100, 100);
}

int NegativeCount(int arr[100], int arrLength)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckNumbers(arr[i]) == enPositiveOrNotPositive::Negative)
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

	cout << "\nNegative Numbers Count Is: ";
	cout << NegativeCount(arr, arrLength);

	return 0;
}