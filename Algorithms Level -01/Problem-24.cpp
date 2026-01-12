#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadAge()
{
	int Age;
	cout << "Please Enter Your Age\n";
	cin >> Age;
	return Age;
}

bool ValidationNumberAge(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
	if (ValidationNumberAge(Age, 18, 45))
		cout << Age << " Is Valid Age";
	else
		cout << Age << " Is Not Valid Age";
}
int main()
{
	PrintResult(ReadAge());
	return 0;
}
