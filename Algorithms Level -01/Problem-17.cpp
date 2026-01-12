#include <iostream>
#include <string>
using namespace std;

struct StInfo
{
	float A, H;
};

float ReadPositiveNumber(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < 0);
	return number;
}


StInfo ReadNumbers()
{
	StInfo Info;

	Info.A = ReadPositiveNumber("Please Enter Positive A");
	Info.H = ReadPositiveNumber("Please Enter Positive H");
	return Info;
}

float TriangleArea(StInfo Info)
{
	float Area;
	Area = (0.5 * Info.A) * Info.H;
	return Area;
}


void PrintTiangleArea(float Area)
{
	cout << "Triangle Area = " << Area << endl;
}

int main()
{
	PrintTiangleArea(TriangleArea(ReadNumbers()));
	return 0;
}