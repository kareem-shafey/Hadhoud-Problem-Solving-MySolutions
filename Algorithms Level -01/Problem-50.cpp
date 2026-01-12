#include <iostream>
#include <time.h> 
#include <string> 
using namespace std;

string ReadPinCode()
{
	string PinCode = "";
	cout << "Enter Pin Code\n";
	cin >> PinCode;
	return PinCode;
}

bool Login()
{
	int Counter = 3;
	string PinCode;
	do
	{
		Counter--;
		PinCode = ReadPinCode();
		if (PinCode == "1234")
		{
			return 1;
		}
		else
		{
			cout << "\nWrong PIN, you have " << Counter << " more tries\n";
			system("color 4F");
		}
	} while (PinCode != "1234" && Counter > 0);
	return 0;
}

int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\nYour Accont Balance Is: " << 7500 << '\n';
	}
	else
	{
		cout << "\nYour Card Blocked Call The Bank for help\n";
	}
	return 0;
}