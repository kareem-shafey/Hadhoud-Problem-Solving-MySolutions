#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct sDate
{
	short Day = 0;
	short Month = 0;
	short Year = 0;
};

short ReadDay()
{
	short Day = 0;
	cin >> Day;
	return Day;
}

short ReadMonth()
{
	short Month = 0;
	cin >> Month;
	return Month;
}

short ReadYear()
{
	short Year = 0;
	cin >> Year;
	return Year;
}
string ReadStringDate(string message)
{
	string DateString;
	cout << message;
	getline(cin >> ws, DateString);

	return DateString;
}

vector<string> SpiltString(string S1, string Delim)
{

	vector<string> vString;
	short pos = 0;
	string sWord = "";

	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);

		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}

sDate StringToDate(string DateString)
{
	sDate Date;
	vector<string> vDate = SpiltString(DateString, "/");
	Date.Day = stoi(vDate[0]);
	Date.Month = stoi(vDate[1]);
	Date.Year = stoi(vDate[2]);

	return Date;
}

string DateToString(sDate Date)
{
	return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year); 
}

int main()
{
	

	string DateString = ReadStringDate("Please Enter Date dd/mm/yyyy? ");

	sDate Date = StringToDate(DateString);

	cout << "\nDay: " << Date.Day << endl;
	cout << "Month: " << Date.Month << endl;
	cout << "Year: " << Date.Year << endl;
	 
	cout << "\nYou Entered : " << DateToString(Date) << endl;

	return 0;
}