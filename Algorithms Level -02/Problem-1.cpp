//My Solution

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintTableHeader()
{
	cout << "\t\t\t Multiplication Table From 1 To 10\n\n";
	cout << "\t";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << "\n----------------------------------------------------------------------------------\n";
}


void PrintMultiplicationTable()
{
	PrintTableHeader();

	for (int i = 1; i <= 10; i++)
	{
		if (i < 10)
			cout << " " << i << "   |\t";
		else
			cout << " " << i << "  |\t";
		for (int g = 1; g <= 10; g++)
		{
			cout << i * g << "\t";
		}
		cout << endl;
	}
}

int main()
{
	PrintMultiplicationTable();
	return 0;
}
