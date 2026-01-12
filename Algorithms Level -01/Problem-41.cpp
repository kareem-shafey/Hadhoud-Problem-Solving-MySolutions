#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float ReadNumberOfHours(string message)
{
	float Hours;
	cout << message << endl;
	cin >> Hours;
	return Hours;
}

float HoursToWeeks(float Hours)
{
	return Hours / 24 / 7;
}

float HoursToDays(float Hours)
{
	return Hours / 24;
}

float DaysToWeeks(float Days)
{
	return HoursToDays(Days) / 7;
}

int main()
{
	float NumberOfHours = ReadNumberOfHours("Please Enter Hours");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks((NumberOfHours));
	cout << endl;
	cout << "Total Hours: " << NumberOfHours << endl;
	cout << "Total Weeks: " << NumberOfWeeks << " Weeks\n";
	cout << "Total Days: " << NumberOfDays << " Days\n";
	return 0;
}