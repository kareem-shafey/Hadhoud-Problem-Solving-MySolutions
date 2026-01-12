#include <iostream>
#include <string>
using namespace std;

struct StInfo
{
	float Number1, Number2, Number3;
};

int ReadPositiveNumber(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < 0);
	return number;
}

StInfo ReadNumber()
{
	StInfo Info;
	Info.Number1 = ReadPositiveNumber("Please Enter Number One");
	Info.Number2 = ReadPositiveNumber("Please Enter Number Two");
	Info.Number3 = ReadPositiveNumber("Please Enter Number Three");
	return Info;

}

float Sum3Average(StInfo Info)
{
	return (float)(Info.Number1 + Info.Number2 + Info.Number3) / 3;
}

void PrintAverage(int Avg)
{
	cout << "Average = " << Avg << endl;
}

int main()
{
	PrintAverage(Sum3Average(ReadNumber()));

	return 0;
}