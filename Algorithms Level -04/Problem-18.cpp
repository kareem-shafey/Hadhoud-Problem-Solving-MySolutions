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
	cout << "\nPlease Enter a Day ? ";
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

 short NumberOfDaysFromTheBeginingOfTheYear(short Year, short Month, short Day)
 {
 	short TotalDays = 0;

 	for (short i = 1; i <= Month - 1; i++)
 	{
 		TotalDays += NumberOfDaysInAMonth(i, Year);
 	}
 		TotalDays += Day;

 	return TotalDays;
 }
 
 bool IsLastMonthInYear(short Month)
 {
	 return (Month == 12);
 }
	
 bool IsLastDayInMonth(sDate Date)
 {
	 return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
 }

 bool Date1AfterDate2(sDate Date1, sDate Date2)
 {
	 return (Date1.Year < Date2.Year) ? true : (Date1.Year == Date2.Year ? (Date1.Month < Date2.Month) ? true : (Date1.Month == Date2.Month ? (Date1.Day < Date2.Day) : false) : false);
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

	 while (Date1AfterDate2(Date1, Date2))
	 {
		 Days++;
		 Date1 = IncreaseDateByOneDay(Date1);
	 }
	 return (IncludeEndDay) ? ++Days : Days;
 }

 sDate GetSystemDate()
 {
	 sDate Date;

	 time_t t = time(0);

	 tm* now = localtime(&t);


	 Date.Year = now->tm_year + 1900;
	 Date.Month = now->tm_mon + 1;
	 Date.Day = now->tm_mday;

	 return Date;
 }

int main()
{
	cout << "Please Enter Your Date Of Birth\n";
	sDate Date1 = ReadFullDate();
	sDate Date2 = GetSystemDate();

	cout << "\nYour Age Is: " << GetDifferenceInDays(Date1, Date2, true) << " Day(s)\n"; // Include Last Day
	cout << "\nYour Age Is: " << GetDifferenceInDays(Date1, Date2, false) << " Day(s)\n"; // Not Include Last Day

	system("pause > 0");
	return 0;
}
