#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enPrimeOrNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string message)
{
	float Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}


enPrimeOrNotPrime CheckNumber(int N)
{
	int M = round(N / 2);
	for (int i = 2; i <= M; i++)
	{
		if (N % i == 0)
			return enPrimeOrNotPrime::NotPrime;
	}
	return enPrimeOrNotPrime::Prime;
}

void PrintNumber(int N)
{
	if (CheckNumber(N) == enPrimeOrNotPrime::Prime)
		cout << "The Number: " << N << " Is Prime\n";
	else
		cout << "The Number: " << N << " Is Not Prime\n";
}
int main()
{
	PrintNumber(ReadPositiveNumber("Please Enter Your Number"));
	return 0;
}