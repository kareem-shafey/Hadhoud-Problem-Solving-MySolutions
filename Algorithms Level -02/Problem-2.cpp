#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimeORNotPrime {Prime = 1, NotPrime = 2};

int ReadPositiveNumber(string message)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}


enPrimeORNotPrime CheckPrime(int N)
{
	int M = round(N / 2);
	for (int i = 2; i <= M; i++)
	{
		if (N % i == 0)
			return enPrimeORNotPrime::NotPrime;
	}
			return enPrimeORNotPrime::Prime;
}


void PrintPrimeNumbers(int Number) // 10
{
	cout << "\nPrime Numbers From " << 1 << " To " << Number << " Are: \n";
	for (int h = 1; h <= Number; h++)
	{
		if (CheckPrime(h) == enPrimeORNotPrime::Prime)
			cout << h << endl;
	}
}

int main()
{
	PrintPrimeNumbers(ReadPositiveNumber("Please Enter Numbers"));
	return 0;
}