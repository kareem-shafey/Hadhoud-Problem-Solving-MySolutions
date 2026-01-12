// My Solution

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct StInfo
{
	float A, B, C;
};

float ReadPositiveNumber(string message)
{
	float Number = 0;
	do
	{
		cout << message << "\n";
		cin >> Number;
	} while (Number < 0);
	return Number;
}

StInfo ReadTringleData()
{
	StInfo Info;

	Info.A = ReadPositiveNumber("Please Enter A");
	Info.B = ReadPositiveNumber("Please Enter B");
	Info.C = ReadPositiveNumber("Please Enter C");
	return Info;

}

float CircleAreaByDescribedTriangle(StInfo Info)
{
	float PI = 3.14;
	float P = (Info.A + Info.B + Info.C) / 2;
	float Area = 0;
	Area = (Info.A * Info.B * Info.C) / (4 * sqrt(P * (P - Info.A) * (P - Info.B) * (P - Info.C)));
	return PI * pow(Area, 2);
}

void PrintCircleAreaByDescribedTriangle(float Area)
{
	cout << "Circle Area By Described Triangle = " << Area << endl;
}

int main()
{
	PrintCircleAreaByDescribedTriangle(CircleAreaByDescribedTriangle(ReadTringleData()));
	return 0;
}