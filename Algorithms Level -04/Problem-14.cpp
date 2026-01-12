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

bool IsDate1EqualDate2(sDate Date1, sDate Date2)
{
	
	return  (Date1.Year == Date2.Year && Date1.Month == Date2.Month && Date1.Day == Date2.Day) ? true : false;
}
int main()
{
	sDate Date1 = ReadFullDate();
	sDate Date2 = ReadFullDate();



	if (IsDate1EqualDate2(Date1, Date2))
	{
		cout << "\nYes, Date1 Is Equal To Date2";
	}
	else
	{
		cout << "\nNo, Date1 Is Not Equal To Date2\n";
	}

	
	system("pause > 0");
	return 0;
}