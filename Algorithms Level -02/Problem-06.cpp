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

int SumOfDigit(int Number)
{
	int Remainder = 0;
  int Sum = 0;
	cout << endl;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Sum += Remainder;
	}
	return Sum;
}

int main()
{
	cout << "Sum Of Digits = " << SumOfDigit(ReadPositiveNumber("Please Enter Positive Number"));

	return 0;
}
