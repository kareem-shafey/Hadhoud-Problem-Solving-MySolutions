#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
	int number = 0;

	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < 0);
	return number;
}

void PrintLetterPattern(int number)
{
		for (int i = 65; i <= 65 + number - 1; i++)
		{
			for (int j = 1; j <= number - (65 + number - 1 - i); j++)  
			{
				cout << char(i);
			}
			
			cout << endl;
		}
}

int main()
{
	PrintLetterPattern(ReadPositiveNumber("Please Enter Positive Number"));

	return 0;
}