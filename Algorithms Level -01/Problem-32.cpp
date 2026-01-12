#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct StNumber
{
	int Number, Power;
};

int ReadPositiveNumber(string message)
{
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

StNumber StInformation()
{
	StNumber Info;

	Info.Number = ReadPositiveNumber("Please Enter Positive Number");
	Info.Power = ReadPositiveNumber("Please Enter Positive Power");

	return Info;
}

int PowerOfNumber(StNumber Info)
{
	return pow(Info.Number, Info.Power);
}

int main()
{
	int POfN = PowerOfNumber(StInformation());
	cout << "Power Of Number  = " << POfN;
	return 0;
}


//OR

// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// void ReadNumber(int& Number, int& Power)
// {
// 	cout << "Please Enter Number\n";
// 	cin >> Number;
// 	cout << "Please Enter Power\n";
// 	cin >> Power;
// }

// int PowerOfNumber(int n, int p)
// {
// 	return pow(n, p);
// }

// int main()
// {
// 	int N, P;
// 	ReadNumber(N, P);
// 	cout << PowerOfNumber(N, P);
// 	return 0;
// }

