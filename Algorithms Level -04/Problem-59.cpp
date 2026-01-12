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

struct stPeriod
{
	sDate StartDate;
	sDate EndDate;

};

stPeriod ReadPeriod()
{
	stPeriod Period;
	cout << "Enter Start Dates:\n\n";
	Period.StartDate = ReadFullDate();

	cout << "\nEnter End Dates:\n\n";
	Period.EndDate = ReadFullDate();


	return Period;
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

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month) ? true : (Date1.Month == Date2.Month) ? Date1.Day < Date2.Day : false : false);
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

int PeriodLengthInDays(stPeriod Period, bool IncludeEndDate = false)
{
	return GetDifferenceInDays(Period.StartDate, Period.EndDate, IncludeEndDate);
}

int main()
{
	cout << "Enter Period 1:\n";
	stPeriod Period1 = ReadPeriod();

	cout << "\n\nPeriod Length Is: " << PeriodLengthInDays(Period1) << endl;
	cout << "Period Length (Including End Date) Is: " << PeriodLengthInDays(Period1, true) << endl;

	system("pause > 0");
	return 0;
}