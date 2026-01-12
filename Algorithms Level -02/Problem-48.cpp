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

float GetFraction(float Number)
{
	return Number - int(Number); 
}

float MyFloorFunction(float Number)
{ 
	int InterPart;
	InterPart = int(Number);

	float Fraction = GetFraction(Number);

	if (Number > 0)
		return InterPart;
	else
		return --InterPart;

}

int main()
{
	float Number = ReadNumber();
	
	cout << "\nMy Floor Result : " << MyFloorFunction(Number) << endl;
	cout << "C++ Floor Result: " << floor(Number) << endl;

	return 0;
}

// OR

// #include <iostream>
// #include <cmath>
// using namespace std;

// float ReadNumber()
// {
// 	float Number = 0;
// 	cout << "Please Enter Number\n";
// 	cin >> Number;
// 	return Number;
// }

// float GetFraction(float Number) 
// {
// 	return Number - int(Number); 
// }

// float MyFloorFunction(float Number)
// { 
// 	int InterPart;
// 	InterPart = int(Number); 

// 	float Fraction = GetFraction(Number);

// 	if (abs(Fraction) >= 0.5)
// 		return InterPart;
// 	else
// 		return --InterPart;

// }

// int main()
// {
// 	float Number = ReadNumber();
	
// 	cout << "My Floor Result : " << MyFloorFunction(Number) << endl;
// 	cout << "C++ Floor Result: " << floor(Number) << endl;

// 	return 0;
// }