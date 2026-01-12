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

void PrintInvertedLetter(int number)
{
  cout << endl;
		for (char i = 64 + number; i > 64; i--)
		{
			for (char g = 65; g <= i; g++)
			{
				cout << i;
			}
			cout << endl;
		}
}

int main()
{
	PrintInvertedLetter(ReadPositiveNumber("Please Enter Positive Number"));

	return 0;
}