#include <iostream>
#include <cstdlib> 
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

float MyRoundFunction(float Number)  
{
	int RightNumber = int (Number);  

	float FractionalPart = Number - RightNumber; 
  
  if(Number > 0)
  {
    if(FractionalPart > 0.4)
    {
      return RightNumber + 1;
    }
    if(FractionalPart <= 0.4)  
    {
      return Number - FractionalPart;
    }
  }
  else 
  { 
    if(FractionalPart < -0.4)
    {
      return ((RightNumber * -1) + 1) * -1;
    } 
    if(FractionalPart >= -0.4) 
    { 
      return ((Number * -1) - (FractionalPart * -1)) * -1;
    }
  }

	return 0;
}

int main()
{
	float number = ReadNumber();
  cout << endl;
	cout << "My abs Result : " << MyRoundFunction(number) << "\n";
	cout << "C++ abs Result: " << round(number) << "\n";
 
	return 0;
}