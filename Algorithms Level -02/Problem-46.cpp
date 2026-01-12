#include <iostream>
#include <cstdlib> // stdlib
#include <time.h> 
#include <cmath> 
#include <string> 
using namespace std;

float ReadNumber()
{
	float number = 0;
	cout << "Please Enter Number\n";
	cin >> number;
	return number;
}

float MyAbsFunction(float number)
{
	if (number > 0)
		return number;
	else
		return number * -1;
}

int main()
{
	float number = ReadNumber();

	cout << "\nMy abs Result: " << MyAbsFunction(number) << "\n";
	cout << "C++ abs Result: " << abs(number) << "\n";
	return 0;
}
