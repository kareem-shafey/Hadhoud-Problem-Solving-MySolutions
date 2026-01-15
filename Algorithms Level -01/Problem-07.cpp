#include <iostream>
#include <string>

using namespace std;

float ReadPostiveNumber(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < 0);
	return number;
}

float HalfNumber(float number)
{
	return (float)number / 2;
}

void PrintResult(float num)
{
	string Result = "Half Of " + to_string(num) + " Is " + to_string(HalfNumber(num));
	cout << Result << endl;
}

int main()
{
	PrintResult(ReadPostiveNumber("Please Enter Postive Number"));
	return 0;
}
