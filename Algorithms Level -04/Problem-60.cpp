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

enum enDateCompare {After = 1, Before = -1, Equal = 0};

stPeriod ReadPeriod()
{
	stPeriod Period;
	cout << "Enter Start Dates:\n\n";
	Period.StartDate = ReadFullDate();

	cout << "\nEnter End Dates:\n\n";
	Period.EndDate = ReadFullDate();


	return Period;
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month) ? true : (Date1.Month == Date2.Month) ? Date1.Day < Date2.Day : false : false);
}

bool IsDate1EqualDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? (Date1.Day == Date2.Day ? true : false) : false) : false;
}

bool IsDate1AfterDate2(sDate Date1, sDate Date2)
{
	return !(IsDate1BeforeDate2(Date1, Date2)) && !(IsDate1EqualDate2(Date1, Date2));
}

enDateCompare CompareDates(sDate Date1, sDate Date2)
{
	if (IsDate1BeforeDate2(Date1, Date2))
		return enDateCompare::Before;
	if (IsDate1EqualDate2(Date1, Date2))
		return enDateCompare::Equal;

	return enDateCompare::After;
}


bool IsDateInPeriod(stPeriod Period, sDate Date)
{
	return !(CompareDates(Date, Period.StartDate) == enDateCompare::Before || CompareDates(Date, Period.EndDate) == enDateCompare::After);
		  
}
 
int main()
{
	cout << "Enter Period 1:\n";
	stPeriod Period1 = ReadPeriod();
	cout << "\nEnter Date To Check:\n\n";
	sDate Date = ReadFullDate();
	
	if (IsDateInPeriod(Period1, Date))
		cout << "\nYes, Date Is Within Period\n";
	else
		cout << "\nNo, Date Is Not Within Period\n";
	return 0;
}