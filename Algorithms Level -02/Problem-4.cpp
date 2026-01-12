#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPerfectOrNotPerfect {Perfect = 1, NotPerfect = 2};

int ReadPrimeNumber(string message)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}

bool CheckPerfect(int Number)
{
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}
	return Number == Sum;
}

enPerfectOrNotPerfect CheckPerfectNumber(int Number)
{

	if (CheckPerfect(Number))
		return enPerfectOrNotPerfect::Perfect;
	else
		return enPerfectOrNotPerfect::NotPerfect;
}

void PrintPerfectNumber(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPerfectNumber(i) == enPerfectOrNotPerfect::Perfect)
			cout << i << endl;
	}
}

int main()
{
	PrintPerfectNumber(ReadPrimeNumber("Please Enter Numbers"));
	return 0;
}
