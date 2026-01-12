#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadNumber(float& a, float& d)
{
	cout << "Please Enter Width\n";
	cin >> a;
	cout << "Please Enter Length\n";
	cin >> d;
}

float SumRectangle(float A, float D)
{
	float Area;
	Area = A * (sqrt(pow(D, 2) - pow(A, 2)));
	return Area;

}

void PrintRectangleAreaByDiagonal(float Area)
{
	cout << "Rectangle Area = " << Area << endl;
}

int main()
{
	float a, d;
	ReadNumber(a, d);
	PrintRectangleAreaByDiagonal(SumRectangle(a, d));
	return 0;
}
