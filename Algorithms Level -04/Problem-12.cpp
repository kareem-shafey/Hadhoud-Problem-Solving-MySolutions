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
	cout << "Please Enter a Day to check ? ";
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

short NumberOfDayAddingDate()
{
	short NumberOfDayAddingDate = 0;
	cout << "\nHow many days to add? ";
	cin >> NumberOfDayAddingDate;
	return NumberOfDayAddingDate;
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


short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month, short Year) 
{
	short TotalDays = 0; 

	for (int i = 1; i <= Month - 1; i++)
	{ 
		TotalDays += NumberOfDaysInAMonth(i, Year); 
	}
	
	TotalDays += Day; 
	return TotalDays; 
}


sDate DateAfterAdding(sDate Date, short Days)
{	
	short RemainderDay = Days + NumberOfDaysFromTheBeginingOfTheYear(Date.Day, Date.Month, Date.Year);
	short NumberOfDay = 0;

	Date.Month = 1;
	while (true)
	{
		NumberOfDay = NumberOfDaysInAMonth(Date.Month, Date.Year); 

		if (RemainderDay > NumberOfDay) 
		{
			RemainderDay -= NumberOfDay;
			Date.Month++;
			if (Date.Month > 12)
			{
				Date.Year++;
				Date.Month = 1;
			}
		}
		else
		{
			Date.Day = RemainderDay;
			break;
		}
	}
	return Date;

}

int main()
{
	sDate Date = ReadFullDate();
	short NumberOfDay = NumberOfDayAddingDate();

	Date = DateAfterAdding(Date, NumberOfDay);

	cout << "\nDate After Adding [" << NumberOfDay << "]: " <<  Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	
	system("pause > 0");
	return 0;
}