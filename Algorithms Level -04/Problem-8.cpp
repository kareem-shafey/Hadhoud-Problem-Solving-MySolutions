#include <iostream>
#include <string>

using namespace std;

short ReadYear()
{
	short Year = 0;
	cout << "Please Enter a year to check? ";
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

bool IsYearLeap(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0 ? true : false);
}

 short DayOfWeekOrder(short Day, short Month, short Year) 
 {
 	short a, y, m;     
 	a = (14 - Month) / 12;    
 	y = Year - a;    
 	m = Month + (12 * a) - 2; 

 	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7; 
 }

short NumberOfDaysInAMonth(short Year, short Month)
{
	short NumberOfDay[] = { 31, 28, 31, 30 , 31, 30, 31, 31, 30, 31, 30, 31 };
	return (Month == 2) ? (IsYearLeap(Year) ? 29 : 28) : NumberOfDay[Month - 1];
}

 string DayShortName(short DayOfWeekOrder)
 { 
	 string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
 	return arrDayNames[DayOfWeekOrder];
 }


string MonthShortName(short MonthNumber) 
{
	string Months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	return (Months[MonthNumber - 1]); 
}

void PrintMonthCalendar(short Year, short Month) 
{

	int NumberOfDays;

	int current = DayOfWeekOrder(1, Month, Year);
	NumberOfDays = NumberOfDaysInAMonth(Year, Month); 
	// Print the current month name 
	printf("\n  _______________%s_______________\n\n",   
		MonthShortName(Month).c_str()); 
	// Print the columns    
	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n"); 
	// Print appropriate spaces
	int i;
	for (i = 0; i < current; i++)     
		printf("     ");
	
	for (int j = 1; j <= NumberOfDays; j++) 
	{
		printf("%5d", j); if (++i == 7) 
		{
			i = 0;    
			printf("\n");
		}
	}
	printf("\n  _________________________________\n");
} 



int main()
{
	
	short Year = ReadYear();
	short Month = ReadMonth();
	PrintMonthCalendar(Year, Month);
	return 0;
}