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
 
 void DifferentDayDate1AndDate2(short Date1, short Date2, bool Optional = true)
 {
	 if (Optional)
	 {
		 cout << "\nDifference (Including End Day) Is: " << (Date2 - Date1) + 1 << " Day(s)." << endl;
	 }
	 else
	 {
		 cout << "\nDifference Is: " << Date2 - Date1 << " Day(s).\n";
	 }
 }

int main()
{
	sDate Date1 = ReadFullDate();
	sDate Date2 = ReadFullDate();

	short NumberOfDayFromFirstYear1 = NumberOfDaysFromTheBeginingOfTheYear(Date1.Year, Date1.Month, Date1.Day);
	short NumberOfDayFromFirstYear2 = NumberOfDaysFromTheBeginingOfTheYear(Date2.Year, Date2.Month, Date2.Day);

	
	DifferentDayDate1AndDate2(NumberOfDayFromFirstYear1, NumberOfDayFromFirstYear2, false);
	DifferentDayDate1AndDate2(NumberOfDayFromFirstYear1, NumberOfDayFromFirstYear2, true);

	system("pause > 0");
	return 0;
}
