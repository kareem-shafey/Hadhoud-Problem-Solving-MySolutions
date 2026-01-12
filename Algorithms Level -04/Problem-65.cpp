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

string ReplaceWordInString(string S1, string StringToReplace, string sReplaceTo)
{
	short pos = S1.find(StringToReplace);

	while (pos != std::string::npos)
	{
		S1 = S1.replace(pos, StringToReplace.length(), sReplaceTo);

		pos = S1.find(StringToReplace);
	}
	return S1;
}

string FormatDate(sDate Date, string DateFormate = "dd/mm/yyyy")
{
	string FormatingDate = "";

	FormatingDate = ReplaceWordInString(DateFormate, "dd", to_string(Date.Day));
	FormatingDate = ReplaceWordInString(FormatingDate, "mm", to_string(Date.Month));
	FormatingDate = ReplaceWordInString(FormatingDate, "yyyy", to_string(Date.Year));

	return FormatingDate;
}

int main()
{
	string DateString = ReadStringDate("Please Enter Date dd/mm/yyyy? ");

	sDate Date = StringToDate(DateString);


	cout << "\n" << FormatDate(Date) << endl;
	cout << "\n" << FormatDate(Date, "yyyy/dd/mm") << endl;
	cout << "\n" << FormatDate(Date, "mm/dd/yyyy") << endl;
	cout << "\n" << FormatDate(Date, "mm-dd-yyyy") << endl;
	cout << "\n" << FormatDate(Date, "dd-mm-yyyy") << endl;

	cout << "\n" << FormatDate(Date, "Day: dd, Month: mm, Year: yyyy") << endl;
	
	system("pause > 0");
	return 0;
}