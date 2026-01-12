//  My Solution 

#include <iostream>
#include <string>
using namespace std;

struct StNumber
{
	int Number1, Number2, Number3;
};

int ReadPostiveNumber(string message)
{
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

StNumber ReadNumber()
{
	StNumber Info;
	Info.Number1 = ReadPostiveNumber("Please Enter Positive Number One");
	Info.Number2 = ReadPostiveNumber("Please Enter Positive Number Two");
	Info.Number2 = ReadPostiveNumber("Please Enter Positive Number Three");
	return Info;
}

int Check3Number(StNumber Info)
{
	if (Info.Number1 > Info.Number2)
	{
		if (Info.Number1 > Info.Number3)
			return Info.Number1;
		else
			return Info.Number3;
	}
	else if (Info.Number2 > Info.Number1)
	{
		if (Info.Number2 > Info.Number3)
			return Info.Number2;

	}
	return Info.Number3;
}

void Print3MaxNumbers(int Max)
{
	cout << "The Number: " << Max << " Is Maximum" << endl;
}

int main()
{
	Print3MaxNumbers(Check3Number(ReadNumber()));
	return 0;
}