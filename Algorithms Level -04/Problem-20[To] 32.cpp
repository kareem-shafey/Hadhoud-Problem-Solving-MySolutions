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

 bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
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

 sDate IncreaseDateByXDay(sDate Date, short Days)
 {
	 for (short i = 1; i <= Days; i++)
	 {
		 Date = IncreaseDateByOneDay(Date);
	 }
	 return Date;
 }
 
 sDate IncreaseDateByOneWeek(sDate Date)
 {
	 for (short i = 1; i <= 7; i++)
	 {
		 Date = IncreaseDateByOneDay(Date);
	 }
	 return Date;
 }

 sDate IncreaseDateByxWeeks(sDate Date, short Weeks)
 {
	 for (short i = 1; i <= Weeks; i++)
	 {
		 Date = IncreaseDateByOneWeek(Date);
	 }
	 return Date;
 }

 sDate IncreaseDateByOneMonth(sDate Date)
 {
	 for (short i = 1; i <= NumberOfDaysInAMonth(Date.Month + 1, Date.Year); i++)
	 {
		 Date = IncreaseDateByOneDay(Date);
	 }
	 return Date;
 }

 sDate IncreaseDateByxMonth(sDate Date, short Month)
 {
	 for (short i = 1; i <= Month; i++)
	 {
		 Date = IncreaseDateByOneMonth(Date);
	 }
	 return Date;
 }

 sDate IncreaseDateByOneYear(sDate Date)
 {
	 Date.Year++;
	 return Date;
 }

 sDate IncreaseDateByxYear(sDate Date, short Year)
 {
	 for (short i = 1; i <= Year; i++)
	 {
		 Date = IncreaseDateByOneYear(Date);
	 }
	 return Date;
 }

 sDate IncreaseDateByxYearFaster(sDate Date, short Year)
 {
	 Date.Year += Year;
	
	 return Date;
 }

 sDate IncreaseDateByOneDecade(sDate Date)
 {
	 Date.Year += 10;
	 return Date;
 }

 sDate IncreaseDateByxDecade(sDate Date, short Decade)
 {
	 for (short i = 1; i <= Decade; i++)
	 {
		 Date = IncreaseDateByOneDecade(Date);
	 }
	 return Date;
 }

 sDate IncreaseDateByxDecadeFaster(sDate Date, short Decade)
 {
	 Decade *= 10;
	 Date.Year += Decade;
	 return Date;
 }

 sDate IncreaseDateOneCentury(sDate Date)
 {
	 Date.Year += 100;
	 return Date;
 }

 sDate IncreaseDateOneMillennium(sDate Date)
 {
	 Date.Year += 1000;
	 return Date;
 }

int main()
{
	sDate Date = ReadFullDate();
	
	Date = IncreaseDateByOneDay(Date);
	cout << "\n01-Adding one day is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateByXDay(Date, 10);
	cout << "\n02-Adding 10 days is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateByOneWeek(Date);
	cout << "\n03-Adding One week is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateByxWeeks(Date, 10);
	cout << "\n04-Adding 10 weeks is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateByOneMonth(Date);
	cout << "\n05-Adding one month is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateByxMonth(Date, 5);
	cout << "\n06-Adding 5 months is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateByOneYear(Date);
	cout << "\n07-Adding one year is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateByxYear(Date, 10);
	cout << "\n08-Adding 10 years is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateByxYearFaster(Date, 10);
	cout << "\n09-Adding 10 years (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateByOneDecade(Date);
	cout << "\n10-Adding one decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateByxDecade(Date, 10);
	cout << "\n11-Adding 10 decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateByxDecadeFaster(Date, 10);
	cout << "\n12-Adding 10 decade (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateOneCentury(Date);
	cout << "\n13-Adding one century is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = IncreaseDateOneMillennium(Date);
	cout << "\n14-Adding one Millennium is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;


	system("pause > 0");
	return 0;
}