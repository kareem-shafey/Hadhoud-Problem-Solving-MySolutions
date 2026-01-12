#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int  ReadAge(string message, int From, int To)
{
	int Age;
	do
	{
		cout << message << endl;
		cin >> Age;
	} while (Age < From || Age > To);
	return Age;
}

int ValidationNumberAge(int From, int To)
{
	return ReadAge("Please Enter Your Age Between From 18 To 45", From, To);
}

void PrintResult(int Age)
{
	cout << "Your Age Is = " << Age << endl;
}


int main()
{
	PrintResult(ValidationNumberAge(18, 45));
	return 0;
}