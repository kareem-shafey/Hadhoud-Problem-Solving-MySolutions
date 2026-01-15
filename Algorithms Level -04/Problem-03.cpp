#include <iostream>
#include <string>

using namespace std;

enum enLeapNotLeapYears {LeapYear = 1, NotLeapYear = 2};

short ReadYear()
{
	short Years = 0;
	cout << "Enter a years? ";
	cin >> Years;
	return Years;
}


	bool IsLeapYear(short Year) 
	{
		return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0) ? true : false);
	}


int main()
{
	short Year = ReadYear();
	if (IsLeapYear(Year))
	{
		cout << "\nYes, Year [" << Year << "] is a leap year\n";
	}
	else
	{
		cout << "\nNo, Year [" << Year << "] is a not leap year\n";
	}
	
	return 0;
}