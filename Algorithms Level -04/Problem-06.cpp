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

short ReadMonth()
{
	short Month = 0;
	cout << "\nPlease enter a Month to check? ";
	cin >> Month;
	return Month;
}

bool IsLeapYear(short Year) 
{
	return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0) ? true : false);
}

short NumberOfDaysInAMonth(short Year, short Month)
{
	if (Month < 1 || Month > 12)
	{
		return 0;
	}

	int arr12Months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : arr12Months[Month - 1];
	
}


int main()
{
	short Year = ReadYear();
	short Month = ReadMonth();

	cout << "\nNumber of Days in Month [" << Month << "] is " << NumberOfDaysInAMonth(Year, Month) << endl;
	system("pause>0"); 
	return 0;

	return 0;
}