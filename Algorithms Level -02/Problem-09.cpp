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

int CountDigitFrequency(int Number, short Digit) 
{
	int Remainder = 0, Counter = 0;
	while (Number > 0)
	{
		Remainder = Number % 10; 
		Number /= 10;  

		if (Digit == Remainder) 
			Counter++;
	}
	return Counter;
}

void PrintAllDigitFrequency(int Number)
{
	for (int i = 0; i < 10; i++)
	{
   
		short DigitFrequency = 0;     
		DigitFrequency = CountDigitFrequency(Number, i);

		if (DigitFrequency > 0)
		{
		   cout << "Digit " << i << " Frequency Is: " << DigitFrequency << " Time(s).\n";
		}
	}
}

int main()
{
	int Number = ReadPositiveNumber("Please Enter Positive Number"); 
	PrintAllDigitFrequency(Number);

	return 0;
}
