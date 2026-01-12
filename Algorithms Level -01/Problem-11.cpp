#include <iostream>
#include <string>
using namespace std;

enum enPassOrFail
{
    Pass = 1, Fail = 2
};

struct StInfo
{
    float Number1, Number2, Number3;
};

float ReadPositiveNumber(string message)
{
    float number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < 0);
    return number;
}

StInfo ReadNumbers()
{
    StInfo Info;

    Info.Number1 = ReadPositiveNumber("Please Enter Positive Number One");
    Info.Number2 = ReadPositiveNumber("Please Enter Positive Number Two");
    Info.Number3 = ReadPositiveNumber("Please Enter Positive Number Three");
    return Info;
}

float Sum3Number(StInfo Info)
{
    return (float)Info.Number1 + Info.Number2 + Info.Number3;
}

float CalcAvg(StInfo Info)
{
    return (float)Sum3Number(Info) / 3;
}

float check(StInfo Info)
{
    if (CalcAvg(Info) >= 50)
        return enPassOrFail::Pass;
    else
        return enPassOrFail::Fail;
}

void PrintResult(StInfo Info)
{
    if (check(Info) == enPassOrFail::Pass)
        cout << "Your Passed";
    else
        cout << "Your Failed";
}

int main()
{

    PrintResult(ReadNumbers());
    return 0;
}