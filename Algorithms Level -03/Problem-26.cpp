#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <iomanip> 

using namespace std; 

string ReadString()
{
	string String;
	cout << "Please Enter Your String" << endl;
	getline(cin, String);
	return String;
}

string UpperAllString(string S1)
{

	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = toupper(S1[i]);
	}
	return S1;
}

string LowerAllString(string S1)
{

	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}


int main()
{
	string S1 = ReadString();

	cout << "\nString After Upper\n";
	S1 = UpperAllString(S1);
	cout << S1 << endl;

	cout << "\nString After Lower\n";
	S1 = LowerAllString(S1);
	cout << S1 << endl;

	system("pause >0");
} 
