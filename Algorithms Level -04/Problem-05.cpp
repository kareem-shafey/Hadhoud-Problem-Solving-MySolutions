#include <iostream>
#include <string>

using namespace std;
struct stInfo
{
	int Days = 0; 
	int Hours = 0;
	int Minutes = 0;
	int Seconds = 0;
};

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

	if (Month == 2)
	{
		return IsLeapYear(Year) ? 29 : 28;
	}

	short arrNumber[7] = { 1, 3, 5, 7, 8, 10, 12 };
	for (short i = 0; i <= 7; i++)
	{
		if (arrNumber[i] == Month)
			return 31;
	}
	return 30;
}

short NumberOfHoursInAMonth(short Year, short Month)
{
	return NumberOfDaysInAMonth(Year, Month) * 24;
}


int NumberOfMinutesInAMonth(short Year, short Month)
{
	return NumberOfHoursInAMonth(Year, Month) * 60;
}

int NumberOfSecondsInAMonth(short Year, short Month)
{
	return NumberOfMinutesInAMonth(Year, Month) * 60;
}

int main()
{
	short Year = ReadYear();
	short Month = ReadMonth();

	cout << "\nNumber of Days    in Month [" << Month << "] is " << NumberOfDaysInAMonth(Year, Month);
	cout << "\nNumber of Hours   in Month [" << Month << "] is " << NumberOfHoursInAMonth(Year, Month);
	cout << "\nNumber of Minutes in Month [" << Month << "] is " << NumberOfMinutesInAMonth(Year, Month);
	cout << "\nNumber of Seconds in Month [" << Month << "] is " << NumberOfSecondsInAMonth(Year, Month);
	
	system("pause>0"); 
	return 0;

	return 0;
}