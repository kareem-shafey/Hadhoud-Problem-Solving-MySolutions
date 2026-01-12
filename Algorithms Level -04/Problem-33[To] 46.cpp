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

 sDate DecreaseDateByOneDay(sDate Date)
 {
	 short NumberOfMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

	 if (Date.Day == 1)
	 {
		 if (Date.Month == 1)
		 {
			 Date.Month = 12;
			 Date.Year--;
			 Date.Day = NumberOfMonth;
		 }
		 else
		 {

			 Date.Month--;
			 Date.Day = NumberOfMonth;
		 }
	 }
	 else
	 {
		 Date.Day--;
	 }

	 return Date;
 }

 sDate DecreaseDateByXDay(sDate Date, short Days)
 {
	 for (short i = 1; i <= Days; i++)
	 {
		 Date = DecreaseDateByOneDay(Date);
	 }
	 return Date;
 }
 
 sDate DecreaseDateByOneWeek(sDate Date)
 {
	 for (short i = 1; i <= 7; i++)
	 {
		 Date = DecreaseDateByOneDay(Date);
	 }
	 return Date;
 }

 sDate DecreaseDateByxWeeks(sDate Date, short Weeks)
 {
	 for (short i = 1; i <= Weeks; i++)
	 {
		 Date = DecreaseDateByOneWeek(Date);
	 }
	 return Date;
 }

 sDate DecreaseDateByOneMonth(sDate Date)
 {
	 if (Date.Month == 1)
	 {
		 Date.Month = 12;
		 Date.Year--;
	 }
	 else
	 {
		 Date.Month-- ;
	 }

	 short NumberOfDayInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);
	
	 if (Date.Day > NumberOfDayInCurrentMonth)
	 {
		 Date.Day = NumberOfDayInCurrentMonth;
	 }
	 return Date;
 }

 sDate DecreaseDateByxMonth(sDate Date, short Month)
 {
	 for (short i = 1; i <= Month; i++)
	 {
		 Date = DecreaseDateByOneMonth(Date);
	 }
	 return Date;
 }

 sDate DecreaseDateByOneYear(sDate Date)
 {
	 Date.Year--;
	 return Date;
 }

 sDate DecreaseDateByxYear(sDate Date, short Years)
 {
	 for (short i = 1; i <= Years; i++)
	 {
		 Date = DecreaseDateByOneYear(Date);
	 }
	 return Date;
 }

 sDate DecreaseDateByxYearFaster(sDate Date, short Years)
 {
	 Date.Year -= Years;
	
	 return Date;
 }

 sDate DecreaseDateByOneDecade(sDate Date)
 {
	 Date.Year -= 10;
	 return Date;
 }

 sDate DecreaseDateByxDecade(sDate Date, short Decade)
 {
	 for (short i = 1; i <= Decade; i++)
	 {
		 Date = DecreaseDateByOneDecade(Date);
	 }
	 // OR
	 /* for (short i = 1; i <= Decade * 10; i++)
	 {
		 Date = DecreaseDateByOneYear(DatKKe);
	 }*/
	 return Date;
 }

 sDate DecreaseDateByxDecadeFaster(sDate Date, short Decade)
 {
	 Decade *= 10;
	 Date.Year -= Decade;
	 return Date;
 }

 sDate DecreaseDateOneCentury(sDate Date)
 {
	 Date.Year -= 100;
	 return Date;
 }

 sDate DecreaseDateOneMillennium(sDate Date)
 {
	 Date.Year -= 1000;
	 return Date;
 }

int main()
{
	sDate Date = ReadFullDate();
	
	cout << "\nDate after: \n";
	Date = DecreaseDateByOneDay(Date);
	cout << "\n01-Subtracting one day is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateByXDay(Date, 10);
	cout << "\n02-Subtracting 10 days is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateByOneWeek(Date);
	cout << "\n03-Subtracting One week is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateByxWeeks(Date, 10);
	cout << "\n04-Subtracting 10 weeks is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateByOneMonth(Date);
	cout << "\n05-Subtracting one month is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateByxMonth(Date, 5);
	cout << "\n06-Subtracting 5 months is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateByOneYear(Date);
	cout << "\n07-Subtracting one year is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateByxYear(Date, 10);
	cout << "\n08-Subtracting 10 years is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateByxYearFaster(Date, 10);
	cout << "\n09-Subtracting 10 years (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateByOneDecade(Date);
	cout << "\n10-Subtracting one decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateByxDecade(Date, 10);
	cout << "\n11-Subtracting 10 decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateByxDecadeFaster(Date, 10);
	cout << "\n12-Subtracting 10 decade (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateOneCentury(Date);
	cout << "\n13-Subtracting one century is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	Date = DecreaseDateOneMillennium(Date);
	cout << "\n14-Subtracting one Millennium is: " << Date.Day << "/" << Date.Month << "/" << Date.Year;


	system("pause > 0");
	return 0;
}