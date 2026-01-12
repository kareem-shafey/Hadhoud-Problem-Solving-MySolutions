#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enEvenOrOdd { Even = 1, Odd = 2 };

int ReadPositiveNumber(string message)
{
	int Number;
	do
	{
		cout << message << endl;;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

enEvenOrOdd CheckEvenOrOdd(int Number)
{
	if (Number % 2 == 0)
		return enEvenOrOdd::Even;
	else
		return enEvenOrOdd::Odd;
}

int SumOddNumber_UsingFor(int N)
{
	int Sum = 0;
	cout << "Using For\n";
	for (int i = 1; i <= N; i++)
	{
		if (CheckEvenOrOdd(i) == enEvenOrOdd::Odd)
		{
			Sum += i;
		}
	}
	return Sum;
}

int SumOddNumber_UsingWhile(int N)
{
	int Sum = 0;
	int j = 1;
	cout << "Using While\n";
	while (j <= N)
	{
		if (CheckEvenOrOdd(j) == enEvenOrOdd::Odd)
		{
			Sum += j;
		}
		j++;
	}
	return Sum;
}

int SumOddNumber_UsingDoWhile(int N)
{
	int Sum = 0;
	int g = 1;
	cout << "Using Do_While\n";
	do
	{
		if (CheckEvenOrOdd(g) == enEvenOrOdd::Odd)
		{
			Sum += g;
		}
		g++;
	} while (g <= N);
	return Sum;
}

int main()
{
	int N = ReadPositiveNumber("Please Enter Positive Number");
	cout << SumOddNumber_UsingFor(N) << endl;
	cout << SumOddNumber_UsingWhile(N) << endl;
	cout << SumOddNumber_UsingDoWhile(N) << endl;

	return 0;
}