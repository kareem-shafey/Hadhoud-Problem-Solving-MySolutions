#include <iostream>
using namespace std;

struct StName
{
	string FirstName;
	string SecondName;
};

StName ReadName()
{
	StName Info;
	cout << "Please Enter First Name\n";
	cin >> Info.FirstName;
	cout << "Please Enter Second Name\n";
	cin >> Info.SecondName;
	return Info;
}

string FullName(StName Info, bool reversed)
{
	string FullName = "";
	if (reversed)
		FullName = Info.SecondName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.SecondName;

	return FullName;
}

void PrintName(string FullName)
{
	cout << "Full Name: " << FullName << endl;
}

int main()
{
	PrintName(FullName(ReadName(), 1)); // 1 => Reverse | 0 => Not Reverse
	return 0;
}

