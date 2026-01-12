#include <iostream>
#include <cmath> 

using namespace std;

float ReadNumber()
{
	float Number = 0;
	cout << "Please Enter Number\n";
	cin >> Number;
	return Number;
}



float MySqrtFunction(float Number)
{  
	return pow(Number, 0.5);
}


int main()
{
	float Number = ReadNumber();
	
	cout << "\nMy Floor Result : " << MySqrtFunction(Number) << endl;
	cout << "C++ Floor Result: " << sqrt(Number) << endl;

	return 0;
}