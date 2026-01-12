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

bool isLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0 ? true : false);
}

short NumberOfDaysInAMonth(short Month, short Year) 
{ 
	if (Month < 1 || Month>12) 
		return  0;
	
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1] ;
}

short NumberOfDaysFromTheBeginingOfTheYear(sDate Date) 
{
	short TotalDays = 0; 

	for (int i = 1; i <= Date.Month - 1; i++)
	{ 
		TotalDays += NumberOfDaysInAMonth(i, Date.Year); 
	}
	
	TotalDays += Date.Day; 
	return TotalDays; 
}

bool IsDate1LessThanDate2(short NumberOfDaysDate1, short NumberOfDaysDate2)
{
	if (NumberOfDaysDate1 < NumberOfDaysDate2)
		return true;
	else
		return false;
}
int main()
{
	sDate Date1 = ReadFullDate();
	sDate Date2 = ReadFullDate();

	short NumberOfDaysInTheFirstDate = NumberOfDaysFromTheBeginingOfTheYear(Date1);
	short NumberOfDaysInTheSecondDate = NumberOfDaysFromTheBeginingOfTheYear(Date2);

	if (IsDate1LessThanDate2(NumberOfDaysInTheFirstDate, NumberOfDaysInTheSecondDate))
	{
		cout << "\nYes, Date1 Is Less Than Date2";
	}
	else
	{
		cout << "\nNo, Date2 Is Less Than Date1";
	}

	
	system("pause > 0");
	return 0;
}