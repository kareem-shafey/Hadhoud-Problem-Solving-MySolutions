#include <iostream>
#include <time.h>

using namespace std;

struct sDate
{
	short Day;
	short Month;
	short Year;
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
	sDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;     a = (14 - Month) / 12;   
	y = Year - a;     
	m = Month + (12 * a) - 2;
	
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7; 
}

short DayOfWeekOrder(sDate Date)
{
	return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}

string DayShortName(short DayName)
{
	string arrDayName[]{ "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	return arrDayName[DayName];
}

bool IsLeapYear(short Year)
{
	return	(Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDayInMonth(short Month, short Year)
{
	if (Month < 1 || Month > 12)
	{
		return 0;
	}

	short Days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : Days[Month - 1];
}

bool IsLastDayInMonth(sDate Date)
{
	return Date.Day == NumberOfDayInMonth(Date.Month, Date.Year);
}

bool IsLastMonthInYear(short Month)
{
	return Month == 12;
}

sDate IncreaseDateByOneDay(sDate Date)
{
	
	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Day = 1;
			Date.Month = 1;
			Date.Year++;
		}
		else
		{
			Date.Day = 1;
			Date.Month++;
		}
	}
	else
	{
		Date.Day++;
	}

	return Date;
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month? Date1.Day < Date2.Day :false)): false);
}

int GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false)
{
	int Days = 0;
	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;

		Date1 = IncreaseDateByOneDay(Date1);
	}
	return IncludeEndDay ? ++Days : Days;
}

bool IsWeekEnd(sDate Date)
{
	short DayIndex = DayOfWeekOrder(Date);
	return (DayIndex == 5 || DayIndex == 6); 
}

bool IsBusinessDay(sDate Date)
{
	return !IsWeekEnd(Date);
}



short CalculateVacationDays(sDate DateFrom, sDate DateTo)
{
	short DaysCount = 0;
	while (IsDate1BeforeDate2(DateFrom, DateTo))
	{

		if (IsBusinessDay(DateFrom))
			DaysCount++;


		DateFrom = IncreaseDateByOneDay(DateFrom);
	}
	return DaysCount;
}

int main()
{
	cout << "Vacation Starts:\n";
	sDate DateFrom = ReadFullDate();

	cout << "\n\nVacation Ends:\n";
	sDate DateTo = ReadFullDate();


	cout << "\n\nVaction From: " << DayShortName(DayOfWeekOrder(DateFrom)) << " , "
		<< DateFrom.Day << "/" << DateFrom.Month << "/" << DateFrom.Year << endl;
	
	cout << "Vaction To: " << DayShortName(DayOfWeekOrder(DateTo)) << " , "
		<< DateTo.Day << "/" << DateTo.Month << "/" << DateTo.Year << endl;

	cout << "\nActucal Vacation Days Is: " << CalculateVacationDays(DateFrom, DateTo) << endl;
	system("pause > 0");
	return 0;
}