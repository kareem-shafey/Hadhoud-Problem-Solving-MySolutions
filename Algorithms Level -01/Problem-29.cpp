#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enEvenOrOdd { Even = 1, Odd = 2 };

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

enEvenOrOdd CheckNumberEvenOrOdd(int Number)
{
	if (Number % 2 == 0)
		return enEvenOrOdd::Even;
	else
		return enEvenOrOdd::Odd;

}

int SumEvenNumber_UsingFor(int Number)
{
	int Sum = 0;
	cout << "Sum Using For\n";
	for (int i = 1; i <= Number; i++)
	{
		if (CheckNumberEvenOrOdd(i) == enEvenOrOdd::Even)
			Sum += i;
	}
	return Sum;
}

int SumEvenNumber_UsingWhile(int Number)
{
	int Sum = 0;
	int i = 1;
	cout << "Sum Using While\n";
	while (i <= Number)
	{
		if (CheckNumberEvenOrOdd(i) == enEvenOrOdd::Even)
			Sum += i;
		i++;
	}
	return Sum;
}

int SumEvenNumber_UsingDo_While(int Number)
{
	int Sum = 0;
	int i = 1;
	cout << "Sum Using Do_While\n";
	do
	{
		if (CheckNumberEvenOrOdd(i) == enEvenOrOdd::Even)
			Sum += i;
		i++;
	} while (i <= Number);
	return Sum;
}

int main()
{
	int N = ReadPositiveNumber("Please Enter Positive Number");

	cout << SumEvenNumber_UsingFor(N) << endl;
	cout << SumEvenNumber_UsingWhile(N) << endl;
	cout << SumEvenNumber_UsingDo_While(N) << endl;


	return 0;
}
