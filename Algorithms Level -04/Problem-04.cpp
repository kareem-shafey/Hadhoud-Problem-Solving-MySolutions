#include <iostream>
#include <string>

using namespace std;

short ReadYear()
{
	short Years = 0;
	cout << "Please enter a year to check? ";
	cin >> Years;
	return Years;
}

bool IsLeapYear(short Year) 
{
	return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0) ? true : false);
}

short NumberOfDays(short Number)
{
	if (IsLeapYear(Number))
	    return 366;
	else
		return 365;
}

short NumberOfHours(short Number)
{
	return NumberOfDays(Number) * 24;
}

int NumberOfMinutes(short Number)
{
	return NumberOfHours(Number) * 60;
}

int NumberOfSeconds(short Number)
{
	return NumberOfMinutes(Number) * 60;
}

int main()
{
	short Year = ReadYear();

	cout << "\nNumber Of Days    In Year [" << Year << "] Is " << NumberOfDays(Year) << endl;
	cout << "Number Of Hours   In Year [" << Year << "] Is " << NumberOfHours(Year) << endl;
	cout << "Number Of Minutes In Year [" << Year << "] Is " << NumberOfMinutes(Year) << endl;
	cout << "Number Of Seconds In Year [" << Year << "] Is " << NumberOfSeconds(Year) << endl;

	
	return 0;
}