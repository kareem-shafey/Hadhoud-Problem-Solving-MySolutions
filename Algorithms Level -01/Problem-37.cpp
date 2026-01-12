// My Solution

#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
	int number = 0;
	cin >> number;
	return number;
}


int SumNumber(int Number)
{
	int result = 0;
	do
	{
		if (Number != -99)
		{
			result += Number;
			Number = ReadNumber();
		}
	} while (Number != -99);
	return result;
}

void PrintTotalNumber(int Total)
{
	cout << "Total = " << Total << endl;
}

int main()
{
	PrintTotalNumber(SumNumber(ReadNumber()));
	return 0;
}