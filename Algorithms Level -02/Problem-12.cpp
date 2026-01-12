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

void PrintInvertedPattern(int Number)
{
	
	for (int i = Number; i > 0; i--) 
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}



int main()
{
	PrintInvertedPattern(ReadPositiveNumber("Please Enter Positive Number"));

	return 0;
}
