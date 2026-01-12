#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string message)
{
	int Age;
	do
	{
		cout << message << endl;
		cin >> Age;
	} while (Age < 0);
	return Age;
}

void PrintResultFrom_NTO1_UsingFor(int Number)
{
	cout << "Print N To 1 Using For\n";
	for (int i = Number; i > 0; i--)
	{
		cout << i << endl;
	}
}

void PrintResultFrom_NTO1_UsingWhile(int Number)
{
	cout << "Print N To 1 Using While\n";
	int j = Number;
	while (j > 0)
	{
		cout << j << endl;
		j--;
	}
}

void PrintResultFrom_NTO1_UsingDoWhile(int Number)
{
	cout << "Print N To 1 Using Do While\n";
	int g = Number;
	do
	{
		cout << g << endl;
		g--;
	} while (g > 0);
}


int main()
{
	int N = ReadPositiveNumber("Please Enter Positive Number");
	PrintResultFrom_NTO1_UsingFor(N);
	PrintResultFrom_NTO1_UsingWhile(N);
	PrintResultFrom_NTO1_UsingDoWhile(N);
	return 0;
}