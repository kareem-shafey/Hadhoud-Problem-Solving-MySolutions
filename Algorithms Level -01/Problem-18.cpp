#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadReduis(string message)
{
	float Reduis = 0;
	do
	{
		cout << message << endl;
		cin >> Reduis;
	} while (Reduis < 0);
	return Reduis;
}

float CircleArea(float R)
{
	const float PI = 3.14;
	float Area = 0;
	Area = PI * (pow(R, 2));
	return Area;
}

void PrintCircleArea(float Area)
{
	cout << "Circle Area: " << Area << endl;
}

int main()
{
	PrintCircleArea(CircleArea(ReadReduis("Please Enter Reduis")));
	return 0;
}
