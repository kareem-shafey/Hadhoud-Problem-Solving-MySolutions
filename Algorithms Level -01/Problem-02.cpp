#include <iostream>
using namespace std;

string ReadName()
{
	string Name;
	cout << "Please Enter Name\n";
	cin >> Name;
	return Name;
}

void PrintName(string Name)
{
	cout << "Your Name: " << Name << "\n";
}

int main()
{
	PrintName(ReadName());
	return 0;
}