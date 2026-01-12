#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadCircumference(string message)
{
	float L = 0;
	do
	{
		cout << message << endl;
		cin >> L;
	} while (L < 0);
	return L;
}

float CircleArea(float L)
{
	const float PI = 3.14;
	float Area = 0;
	Area = pow(L, 2) / (4 * PI);
	return Area;
}

void PrintCircleAreaByCircumference(float Area)
{
	cout << "Circle Area By Circumference: " << Area << endl;
}

int main()
{
	PrintCircleAreaByCircumference(CircleArea(ReadCircumference("Please Enter Circumference")));
	return 0;
}
