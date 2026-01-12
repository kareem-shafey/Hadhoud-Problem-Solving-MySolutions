#include <iostream>
#include <string>
#include <cmath>
#include <iomanip> 

using namespace std; 

string ReadName(string Message)
{
	string Name;
	cout << Message << endl;
	getline(cin, Name);
	return Name;
}

void PrintFirstElementInEachWord(string Name)
{
	bool ReadMore = true;
	cout << "\nFisrt Letters Of This String\n";
	for (int i = 0; i < Name.length(); i++)
	{
		if (Name.at(i) && ReadMore)
		{
			cout << Name.at(i) << endl;
			ReadMore = false;
		}
		  ReadMore = true;
		if (Name.at(i) == ' ' == ReadMore)
		{
			cout << Name.at(i + 1) << endl;
		}
			ReadMore = false;
	}
}


int main()
{
	
	PrintFirstElementInEachWord(ReadName("Please Enter Your Name"));
	system("pause >0");
} 