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

sDate IncreaseDateByOneDay(sDate Date)
{
	short NumberOfDay = NumberOfDaysInAMonth(Date.Month, Date.Year);
	if (Date.Day < NumberOfDay && Date.Month <= 12)
	{
		Date.Day++;
	}
	else if (Date.Day == NumberOfDay && Date.Month == 12)
	{
		Date.Day = 1;
		Date.Month = 1;
		Date.Year++;
	}
	else if(Date.Day == NumberOfDay && Date.Month < 12)
	{
		Date.Day = 1;
		Date.Month++;
	}
	return Date;
}

int main()
{
	sDate Date = ReadFullDate();

	Date = IncreaseDateByOneDay(Date);

	cout << "\nDate after adding one day is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	system("pause > 0");
	return 0;
}