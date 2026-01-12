#include <iostream>
#include <time.h>

using namespace std;

enum enDateCompare {After = 1, Before = -1, Equal = 0};

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

bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month? Date1.Day < Date2.Day :false)): false);
}


bool IsDate1EqualDate2(sDate Date1, sDate Date2)
{
	return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}


bool IsDate1AfterDate2(sDate Date1, sDate Date2)
{
	return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}

enDateCompare CompareDates(sDate Date1, sDate Date2)
{
	if (IsDate1BeforeDate2(Date1, Date2))
		return enDateCompare::Before;
	else if (IsDate1AfterDate2(Date1, Date2))
		return enDateCompare::After;
	else
		return enDateCompare::Equal;
}

int main()
{
	cout << "Enter Date1:\n";
	sDate Date1 = ReadFullDate();
	cout << "\nEnter Date2:\n";
	sDate Date2 = ReadFullDate();

	cout << "\nCompare Results: " << CompareDates(Date1, Date2) << endl;
	system("pause > 0");
	return 0;
}