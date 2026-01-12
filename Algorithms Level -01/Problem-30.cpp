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

int Factorial(int Number)
{
	int Factorial = 1;
	for (int i = Number; i > 0; i--)
	{
		Factorial *= i;
	}
	return Factorial;
}

int main()
{

	int N = ReadPositiveNumber("Please Enter Positive Number");
	cout << "Factorial = " << Factorial(N) << endl;
	return 0;
}