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

int CountDigitFrequency(int Number, int Digit)
{
	int Remainder = 0, Counter = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;

		if (Remainder == Digit)
			Counter++;
	}
	return Counter;
}

int main()
{
	int Number = ReadPositiveNumber("Please Enter Positive Number");
	int Digit = ReadPositiveNumber("Please Enter Digit");

	cout << "\nDigit " << Digit << " Frequency Is " << CountDigitFrequency(Number, Digit) << " Times(s)\n";

	return 0;
}
