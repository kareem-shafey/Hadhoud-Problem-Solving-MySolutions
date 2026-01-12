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

int ReversedNumber(int Number)
{
	int Remainder = 0, Sum = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;

		Sum = Sum * 10 + Remainder;  
	}
	return Sum;
}

int main()
{
	cout << "Reverse Is:\n" << ReversedNumber(ReadPositiveNumber("Please Enter Positive Number"));

	return 0;
}