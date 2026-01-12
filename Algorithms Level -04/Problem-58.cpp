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

enum enCompareDate {After = 1, Before = -1, Equal = 0};

stPeriod ReadPeriod()
{
	stPeriod Period;
	cout << "Enter Start Dates:\n\n";
	Period.StartDate = ReadFullDate();

	cout << "\nEnter End Dates:\n\n";
	Period.EndDate = ReadFullDate();


	return Period;
}



bool IsOverLapPeriods(stPeriod Period1, stPeriod Period2)
{
	if (Period1.StartDate.Year == Period2.StartDate.Year && Period1.EndDate.Year == Period2.EndDate.Year)
	{
		if (Period1.StartDate.Month == Period2.StartDate.Month && Period1.EndDate.Month == Period2.EndDate.Month)
		{
			if (Period2.StartDate.Day >= Period1.StartDate.Day && Period2.StartDate.Day <= Period1.EndDate.Day || 
				Period1.EndDate.Day <= Period2.EndDate.Day && Period1.EndDate.Day >= Period2.StartDate.Day)
		
				return true;
			else
				return false;
		}
	}
	else
		return false;
}


int main()
{

	cout << "Enter Period 1:\n";
	stPeriod Period1 = ReadPeriod();
	cout << "\n\nEnter Period 2:\n";
	stPeriod Period2 = ReadPeriod();


	if (IsOverLapPeriods(Period1, Period2))
		cout << "\nYes, Periods OverLap\n";
	else
		cout << "\nNo, Periods OverLap\n";
	return 0;
}