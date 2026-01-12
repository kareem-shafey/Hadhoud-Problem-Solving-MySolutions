#include <iostream>
#include <string>

using namespace std;

short ReadYear()
{
	short Year = 0;
	cout << "\nPlease Enter a year to check? ";
	cin >> Year;
	return Year;
}

short ReadMonth()
{
	short Month = 0;
	cout << "\nPlease Enter a Month to check? ";
	cin >> Month;
	return Month;
}

short ReadDay()
{
	short Day = 0;
	cout << "Please Enter a Day to check? ";
	cin >> Day;
	return Day;
}
bool IsYearLeap(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0 ? true : false);
}


short NumberOfDaysInAMonth(short Year, short Month)
{
	short NumberOfDay[] = { 31, 28, 31, 30 , 31, 30, 31, 31, 30, 31, 30, 31 };
	return (Month == 2) ? (IsYearLeap(Year) ? 29 : 28) : NumberOfDay[Month - 1];
}

short DaysFromStartOfYear(short Year, short Month, short Day)
{
	short TotalDays = 0;
	for (short i = 1; i < Month; i++)
	{
		TotalDays += NumberOfDaysInAMonth(Year, i);
	}
	TotalDays += Day;
	return TotalDays;
}

int main()
{
	
	short Day = ReadDay();
	short Month = ReadMonth();
	short Year = ReadYear();

	cout << "\nNumber Of Days From The Begining Of The Year Is: " << DaysFromStartOfYear(Year, Month, Day) << endl;

	return 0;
}