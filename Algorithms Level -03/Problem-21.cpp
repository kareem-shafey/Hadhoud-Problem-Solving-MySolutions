#include <iostream>
#include <string>
#include <cmath>
#include <iomanip> 

using namespace std; 

void Fibonacci(short Number)
{
	int Number1 = 0, Number2 = 1;
	int FebNumber = 0;

	for (int i = 0; i < Number; i++)
	{
		FebNumber = Number1 + Number2;
		cout << Number2 << "    "; 
		Number1 = Number2;
		Number2 = FebNumber;
	}
}

int main()
{
	Fibonacci(15);
	system("pause >0");
} 