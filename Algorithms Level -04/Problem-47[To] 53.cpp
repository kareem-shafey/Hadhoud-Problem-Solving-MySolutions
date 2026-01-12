#include <iostream>
#include <time.h>

using namespace std;

struct sDate
{
	short Day;
	short Month;
	short Year;
};

sDate GetSystemDate()
{
	sDate Date;

	time_t t = time(0);

	tm* now = localtime(&t);


	Date.Day = now->tm_mday;
	Date.Month = now->tm_mon + 1;
	Date.Year = now->tm_year + 1900;

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

bool IsEndOfWeek(sDate Date)
{
	return DayOfWeekOrder(Date) == 6;
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

short DayUntilTheEndOfWeek(sDate Date)
{
	return 6 - DayOfWeekOrder(Date);
}


short DayUntilTheEndOfMonth(sDate Date)
{
	sDate EndOfMonthDate;
	EndOfMonthDate.Day = NumberOfDayInMonth(Date.Month, Date.Year);
	EndOfMonthDate.Month = Date.Month;
	EndOfMonthDate.Year = Date.Year;

	return GetDifferenceInDays(Date, EndOfMonthDate, true);
}

short DayUntilTheEndOfYear(sDate Date)
{
	sDate EndOfYearDate;
	EndOfYearDate.Day = 31;
	EndOfYearDate.Month = 12;
	EndOfYearDate.Year = Date.Year;

	return GetDifferenceInDays(Date, EndOfYearDate, true);
}

int main()
{
	sDate Date = GetSystemDate();
	

	cout << "Today Is " << DayShortName(DayOfWeekOrder(Date)) << " , " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	
	
	cout << "\nIs it End of Week?\n";
	
	if (IsEndOfWeek(Date))  
		cout << "Yes it is Saturday, it's of Week.";
	else     
		cout << "No it's Not end of week.";

	cout << "\n\nIs It Weekend?\n";

	if (IsWeekEnd(Date)) 
		cout << "\nYes it is a week end.";
	else
		cout << "No today is " << DayShortName(DayOfWeekOrder(Date)) << ", Not a Weekend\n";


	cout << "\nIs it Business Day?\n"; 
	if (IsBusinessDay(Date))
		cout << "Yes it is a business day.";
	else      
		cout << "No it is NOT a business day.\n";

	cout << "\n\nDay Until end of day : " << DayUntilTheEndOfWeek(Date) << " Day(s).\n";
	cout << "Day Until end of month : " << DayUntilTheEndOfMonth(Date) << " Day(s).\n";
	cout << "Day Until end of year : " << DayUntilTheEndOfYear(Date) << " Day(s).\n";

	system("pause > 0");
	return 0;
}