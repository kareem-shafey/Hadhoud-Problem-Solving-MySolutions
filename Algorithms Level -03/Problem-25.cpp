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

string LowerFirstLetterEachOfWord(string S1)
{
	bool IsFirstLetter = true;

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && IsFirstLetter)
		{
			S1[i] = tolower(S1[i]);
		}
		IsFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}

int main()
{
	string S1 = ReadString();

	S1 = LowerFirstLetterEachOfWord(S1);

	cout << "\nString after Conversion\n";
	cout << S1 << endl;

	system("pause >0");
} 
