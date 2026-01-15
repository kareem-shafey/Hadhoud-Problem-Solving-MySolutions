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

void PrintDigit(int Number)
{
	int Remainder = 0;
	cout << endl;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		cout << Remainder << endl;
	}
}

int main()
{
	PrintDigit(ReadPositiveNumber("Please Enter Positive Number"));

	return 0;
}