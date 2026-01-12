#include <iostream>
#include <string>

using namespace std;

enum enLeapNotLeapYears {LeapYear = 1, NotLeapYear = 2};

int ReadNumber()
{
	int Years = 0;
	cout << "Enter a years? ";
	cin >> Years;
	return Years;
}

enLeapNotLeapYears CheckYears(int Year)
{
	if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0)
		return enLeapNotLeapYears::LeapYear;
	else
		return enLeapNotLeapYears::NotLeapYear;
}

void IsLeapYear(int Year)
{
	if (CheckYears(Year) == enLeapNotLeapYears::LeapYear)
		cout << "This Is: " << "Leap Year\n";
	else
		cout << "This Is: " << "Not Leap Year\n";

}

int main()
{
	IsLeapYear(ReadNumber());
	
	return 0;
}


// OR
// #include <iostream>
// #include <string>

// using namespace std;

// short ReadYear()
// {
// 	short Years = 0;
// 	cout << "Enter a years? ";
// 	cin >> Years;
// 	return Years;
// }

// bool IsLeapYear(short Year)
// {
// 	if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0)
// 		return true;
// 	else
// 		return false;
// }

// int main()
// {
// 	short Year = ReadYear();
// 	if (IsLeapYear(Year))
// 	{
// 		cout << "\nYes, Year [" << Year << "] is a leap year\n";
// 	}
// 	else
// 	{
// 		cout << "\nNo, Year [" << Year << "] is a not leap year\n";
// 	}
	
// 	return 0;
// }
