#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please Enter Number One\n";
	cin >> Num1;
	cout << "Please Enter Number Two\n";
	cin >> Num2;
}

void Swap(int& Num1, int& Num2)
{
	int temp = 0;

	temp = Num1;
	Num1 = Num2;
	Num2 = temp;
}

void PrintMax3Number(int N1, int N2)
{
	cout << "Number One: " << N1 << endl;
	cout << "Number Two: " << N2 << endl;
}

int main()
{
	int N1, N2;
	ReadNumbers(N1, N2);
	PrintMax3Number(N1, N2);
	Swap(N1, N2);
	PrintMax3Number(N1, N2);
	return 0;
}
