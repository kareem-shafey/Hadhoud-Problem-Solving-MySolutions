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

int ReverseNumber(int Number)  
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

void PrintDigit(int Number)
{
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		cout << Remainder << endl;
	}
}


int main()
{
	int N = ReadPositiveNumber("Please Enter Positive Number"); 
	PrintDigit(ReverseNumber(N));

	return 0;
}
