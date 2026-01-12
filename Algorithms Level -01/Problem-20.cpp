#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadSquareSide(string message)
{
	float A = 0;
	do
	{
		cout << message << endl;
		cin >> A;
	} while (A < 0);
	return A;
}

float CircleArea(float A)
{
	const float PI = 3.14;
	float Area = 0;
	Area = PI * pow(A, 2) / 4;
	return Area;
}

void PrintCircleAreaByInscribedInSquare(float Area)
{
	cout << "Circle Area By Diameter: " << Area << endl;
}

int main()
{
	PrintCircleAreaByInscribedInSquare(CircleArea(ReadSquareSide("Please Enter Square Side")));
	return 0;
}