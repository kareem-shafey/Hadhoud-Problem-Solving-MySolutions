#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
	int TotalSales = 0;
	do
	{
		cout << message << endl;
		cin >> TotalSales;
	} while (TotalSales < 0);
	return TotalSales;
}

float GetCommisionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}

float CalcualationNumber(float Number, float TotalSales)
{
	return Number * TotalSales;
}

int main()
{
	float TotalSales = ReadPositiveNumber("Please Enter Total Sales");
	float Commision = GetCommisionPercentage(TotalSales);
	cout << endl << "Total Sales = " << TotalSales << endl;
	cout << "Commision Percentage = " << Commision << endl;
	cout << endl << "Total Comission= " << CalcualationNumber(TotalSales, Commision);
	return 0;
}