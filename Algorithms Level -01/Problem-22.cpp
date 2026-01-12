#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct StInfo
{
	float A, B;
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
	return Info;

}
float CircleAreaByInscribedInIsosceles(StInfo Info)
{
	float PI = 3.14;
	float Area = 0;
	Area = (PI * pow(Info.B, 2) / 4) * ((2 * Info.A - Info.B) / (2 * Info.A + Info.B));
	return Area;
}
void PrintCircleAreaByInscribedInIsosceles(float Area)
{
	cout << "Circle Area By Inscribed In On Isosceles = " << Area << endl;
}
int main()
{
	PrintCircleAreaByInscribedInIsosceles(CircleAreaByInscribedInIsosceles(ReadTringleData()));
	return 0;
}