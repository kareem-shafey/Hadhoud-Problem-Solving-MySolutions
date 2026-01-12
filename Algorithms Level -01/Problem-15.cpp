#include <iostream>
#include <string>
using namespace std;

void ReadNumber(float& Width, float& Length)
{
	cout << "Please Enter Width\n";
	cin >> Width;
	cout << "Please Enter Length\n";
	cin >> Length;
}

float RectangleArea(float W, float L)
{
	return (float)W * L;
}

void PrintArea(float Area)
{
	cout << "Rectangle Area = " << Area << endl;
}

int main()
{
	float w, l;
	ReadNumber(w, l);
	PrintArea(RectangleArea(w, l));
	return 0;
}