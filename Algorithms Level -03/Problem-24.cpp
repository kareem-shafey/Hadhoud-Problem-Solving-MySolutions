#include <iostream>
#include <string>
#include <cctype>

using namespace std; 

string ReadString()
{
	string String;
	cout << "Please Enter Your String" << endl;
	getline(cin, String);
	return String;
}
void UpperFirstLetterEachOfString(string String)
{
	bool IsFirstLetter = true;

	cout << "\nString after Conversion\n";
	for (short i = 0; i < String.length(); i++)
	{
		if (String[i] != ' ' && IsFirstLetter)
		{
			cout << char(toupper(String[i]));
		}
		else
		{
			cout << String[i];
		}
		IsFirstLetter = (String[i] == ' ' ? true : false);
	}

}

int main()
{
	UpperFirstLetterEachOfString(ReadString());
	system("pause >0");
} 