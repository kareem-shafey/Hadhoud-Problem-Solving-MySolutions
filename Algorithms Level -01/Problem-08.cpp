#include <iostream>
#include <string>
using namespace std;

enum enPassOrFail { Pass = 1, Fail = 2 };

int ReadPostiveNumber(string message)
{
	int Mark = 0;
	do
	{
		cout << message << endl;
		cin >> Mark;
	} while (Mark < 0);
	return Mark;
}

enPassOrFail CheckMark(int mark)
{
	if (mark >= 50)
		return enPassOrFail::Pass;
	else
		return enPassOrFail::Fail;
}

void PrintResult(int M)
{
	if (CheckMark(M) == enPassOrFail::Pass)
		cout << "Your Passed";
	else
		cout << "Your Failed";
}

int main()
{
	PrintResult(ReadPostiveNumber("Please Enter Postive Number"));
	return 0;
}