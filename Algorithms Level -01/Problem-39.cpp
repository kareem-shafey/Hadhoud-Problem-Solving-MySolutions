#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadNumbers(float& TotalBill, float& CashPaid)
{
	cout << "Please Enter Total Bill\n";
	cin >> TotalBill;
	cout << "Please Enter Cash Paid\n";
	cin >> CashPaid;
}

float CalcRemainder(float T, float C)
{
	float Sum = C - T;
	return Sum;
}

void Remainder(int Remainder)
{
	cout << "Remainder = " << Remainder << endl;
}

int main()
{
	float TotalBill, CashPaid;
	ReadNumbers(TotalBill, CashPaid);
	Remainder(CalcRemainder(TotalBill, CashPaid));
	return 0;
}


// OR

// #include <iostream>
// #include <cmath>
// #include <string>
// using namespace std;

// struct StInfo
// {
//   float TotalBill, CashPaid;
// };

// float ReadPositiveNumber(string message)
// {
//   float Number = 0;
//   do
//   {
//     cout << message << endl;
//     cin >> Number;
//   } while (Number < 0);
//   return Number;
// }

// StInfo ReadNumbers()
// {
//   StInfo Info;
//   Info.TotalBill = ReadPositiveNumber("Please Enter Total Bill");
//   Info.CashPaid = ReadPositiveNumber("Please Enter Cash Paid");
//   return Info;
// }

// float CalcRemainder(StInfo Info)
// {
//   float Sum = 0;
//   Sum = Info.CashPaid - Info.TotalBill;
//   return Sum;
// }

// void PrintRemainder(int Remainder)
// {
//   cout << "Remainder = " << Remainder << endl;
// }

// int main()
// {
// 	PrintRemainder(CalcRemainder(ReadNumbers()));
// 	return 0;
// }

