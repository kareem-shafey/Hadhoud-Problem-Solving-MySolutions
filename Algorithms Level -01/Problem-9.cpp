// My Solution 

#include <iostream>
#include <string>
using namespace std;

struct StNumber
{
	int Number1, Number2, Number3;
};

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

StNumber ReadNumber()
{
	StNumber Info;
	Info.Number1 = ReadPositiveNumber("Please Enter Positive Number One");
	Info.Number2 = ReadPositiveNumber("Please Enter Positive Number Two");
	Info.Number3 = ReadPositiveNumber("Please Enter Positive Number Three");
	return Info;
}

int Sum3Number(StNumber Info)
{
	int Result = Info.Number1 + Info.Number2 + Info.Number3;
	return Result;
}

void PrintSum3Number(int Total)
{
	cout << "Total = " << Total << endl;
}

int main()
{
	PrintSum3Number(Sum3Number(ReadNumber()));
	return 0;
}
