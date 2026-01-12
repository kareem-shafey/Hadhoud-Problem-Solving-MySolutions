#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string message)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}

void PrintPerfectOrNotPerfect(int Number)
{
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i;
	}
	
	if (Sum == Number)
		cout << "The Number " << Number << " Is Perfect\n";
	else
		cout << "The Number " << Number << " Is Not Perfect\n";
}


int main()
{
	PrintPerfectOrNotPerfect(ReadPositiveNumber("Please Enter Numbers"));  
	return 0;
}