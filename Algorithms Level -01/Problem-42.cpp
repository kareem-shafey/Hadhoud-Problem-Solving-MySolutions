#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct StDuration
{
	float Days, Hours, Minutes, Seconds;
};

float ReadPositiveNumber(string message)
{
	float Number;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

StDuration ReadDuration()
{
	StDuration Information;


	Information.Days = ReadPositiveNumber("Please Enter Days?");
	Information.Hours = ReadPositiveNumber("Please Enter Hours?");
	Information.Minutes = ReadPositiveNumber("Please Enter Minutes?");
	Information.Seconds = ReadPositiveNumber("Please Enter Seconds?");
	return Information;
}

float CalcTotalSeconds(StDuration Information)
{
	float TotalSeconds = 0;
	TotalSeconds += Information.Days * 24 * 60 * 60;
	TotalSeconds += Information.Hours * 60 * 60;
	TotalSeconds += Information.Minutes * 60;
	TotalSeconds += Information.Seconds;

	return TotalSeconds;

}

void PrintTotalSeconds(float TotalSeconds)
{
	cout << "\nTotal Seconds = " << TotalSeconds << " Seconds\n";
}

int main()
{
	PrintTotalSeconds(CalcTotalSeconds(ReadDuration()));
	return 0;
}
