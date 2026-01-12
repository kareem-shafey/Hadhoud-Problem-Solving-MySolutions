#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string message)
{
	int Age;
	cout << message << endl;
	cin >> Age;
	return Age;
}

void PrintResultFrom1ToN_UsingFor(int Number)
{
	cout << "Print 1 To N Using For\n";
	for (int i = 1; i <= Number; i++)
	{
		cout << i << endl;
	}
}

void PrintResultFrom1ToN_UsingWhile(int Number)
{
	cout << "Print 1 To N Using While\n";
	int j = 1;
	while (j <= Number)
	{
		cout << j << endl;
		j++;
	}
}

void PrintResultFrom1ToN_UsingDoWhile(int Number)
{
	cout << "Print 1 To N Using Do While\n";
	int g = 1;
	do
	{
		cout << g << endl;
		g++;
	} while (g <= Number);
}


int main()
{
	int N = ReadPositiveNumber("Please Enter Positive Number");
	PrintResultFrom1ToN_UsingFor(N);
	PrintResultFrom1ToN_UsingWhile(N);
	PrintResultFrom1ToN_UsingDoWhile(N);
	return 0;
}