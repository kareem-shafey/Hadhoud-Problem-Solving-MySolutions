#include <iostream>
using namespace std;

struct sDate
{
	short Day = 0;
	short Month = 0;
	short Year = 0;
};

short ReadDay()
{
	short Day = 0;
	cout << "Please Enter a Day? ";
	cin >> Day;
	return Day;
}

short ReadMonth()
{
	short Month = 0;
	cout << "Please Enter a Month? ";
	cin >> Month;
	return Month;
}

short ReadYear()
{
	short Year = 0;
	cout << "Please Enter a Year? ";
	cin >> Year;
	return Year;
}

sDate ReadFullDate()
{
	sDate Date ;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month > 12)
		return 0;

	short days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 30 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}

bool IsValidationDate(sDate Date)
{
	
	if (Date.Day < 1 || Date.Day > 31)
		return false;

	if (Date.Month == 2)
	{
		if (IsLeapYear(Date.Year))
        {
                        if(Date.Day == 29)
                        return true;
                        else
                        return false;
        }
	    return true;
	}
	else
		return false;
	if (IsLastMonthInYear(Date.Month) == NumberOfDaysInAMonth(Date.Month, Date.Year))
		return true;
}
 
int main()
{
	sDate Date = ReadFullDate();
	
	if (IsValidationDate(Date))
		cout << "\nYes, Date Is a Valide Date\n";
	else
		cout << "\nNo, Date Is a Not Valide Date\n";

	return 0;
}