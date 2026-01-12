#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int ReadPositiveNumber(string message)
{
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void PrintInvertedPattern(int Number)
{
	cout << endl;
	for (int i = 1; i <= Number; i++)
	{
		for (int j = i; j >= 1; j--)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintInvertedPattern(ReadPositiveNumber("Please Enter Positive Number"));

	return 0;
}