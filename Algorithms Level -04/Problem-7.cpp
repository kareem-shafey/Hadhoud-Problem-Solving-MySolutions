#include <iostream>
#include <string>

using namespace std;

struct stInformaion
{
	short Day = 0;
	short Month = 0;
	short Year = 0;
};

short ReadNumber(string message)
{
	short Number = 0;
	cout << message;
	cin >> Number;
	return Number;
}

stInformaion ReadInfo()
{
	stInformaion Info;

	Info.Year = ReadNumber("Please Enter a year to check? ");
	Info.Month = ReadNumber("\nPlease Enter a Month to check? ");
	Info.Day = ReadNumber("\nPlease Enter a Day to check? ");
	return Info;
}




string GetData(stInformaion Info)
{
	string Data = to_string(Info.Day) + "/" + to_string(Info.Month) + '/' + to_string(Info.Year);
	return Data;
}

short DayOrder(stInformaion Info)
{
	short a = 0, y = 0, m = 0, d = 0;
	a = ((14 - Info.Month) / 12);
	y = Info.Year - a;
	m = Info.Month + (12 * a) - 2;

	d = (Info.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	return d;
}

string DayName(short DayOrder)
{
	string Weeks[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thuresday", "Friday", "Saturday" };
	return Weeks[DayOrder];
}

int main()
{
	
	stInformaion Info = ReadInfo();
	short Order = DayOrder(Info);
	cout << "\nData      : " << GetData(Info) << endl;
	cout << "Day Order : " << Order << endl;
	cout << "Day Name  : " << DayName(Order) << endl;
	return 0;
}