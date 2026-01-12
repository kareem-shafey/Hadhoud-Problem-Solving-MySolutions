#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadDiameter(string message)
{
	float D = 0;
	do
	{
		cout << message << endl;
		cin >> D;
	} while (D < 0);
	return D;
}

float CircleArea(float D)
{
	const float PI = 3.14;
	float Area = 0;
	Area = PI * pow(D, 2) / 4;
	return Area;
}

void PrintCircleAreaByDiameter(float Area)
{
	cout << "Circle Area By Diameter: " << Area << endl;
}

int main()
{
	PrintCircleAreaByDiameter(CircleArea(ReadDiameter("Please Enter Diameter")));
	return 0;
}