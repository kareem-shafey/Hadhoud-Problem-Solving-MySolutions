#include <iostream>
#include <string>

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
	cout << "\nPlease Enter a Day to check ? ";
	cin >> Day;
	return Day;
}


short ReadMonth()
{
	short Month = 0;
	cout << "Please Enter a Month to check ? ";
	cin >> Month;
	return Month;
}

short ReadYear()
{
	short Year = 0;
	cout << "Please Enter a Year to check ? ";
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

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0) ? true : false;
}


short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month > 12)
	{
		return 0;
	}

	int arr12Months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : arr12Months[Month - 1];

}

bool IsLastDayInMonth(sDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}


int main()
{
	sDate Date = ReadFullDate();

	if (IsLastDayInMonth(Date))
		cout << "\nYes, Day Is Last Day In Month.";
	else
		cout << "\nNo, Day Is Not Last Day In Month.";


	if (IsLastMonthInYear(Date.Month))
		cout << "\nYes, Month Is Last Month In Year.";
	else
		cout << "\nNo, Month Is Not Last Month In Year.";


	system("pause > 0");
	return 0;
}