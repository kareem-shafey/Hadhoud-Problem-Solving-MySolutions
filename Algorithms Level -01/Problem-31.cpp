#include <iostream>
#include <string>
#include <cmath>
using namespace std;

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

void Power2_3_4(int Number)
{
	cout << "\nPower 2, 3, 4\n";
	cout << pow(Number, 2) << endl;
	cout << pow(Number, 3) << endl;
	cout << pow(Number, 4) << endl;

}

int main()
{

	int N = ReadPositiveNumber("Please Enter Positive Number");
	Power2_3_4(N);
	return 0;
}