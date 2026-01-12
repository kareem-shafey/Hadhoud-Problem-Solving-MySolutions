// My Solution 

#include <iostream>
using namespace std;

enum enMaxOrMin { MAXN1, MAXN2 };

struct StNumber
{
    int Number1, Number2;
};

int ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < 0);
    return number;
}

StNumber ReadNumbers()
{
    StNumber Info;

    Info.Number1 = ReadPositiveNumber("Please Enter Positive Number One");
    Info.Number2 = ReadPositiveNumber("Please Enter Positive Number Two");
    return Info;
}

enMaxOrMin CheckNumber(StNumber Info)
{
    if (Info.Number1 > Info.Number2)
        return enMaxOrMin::MAXN1;
    else
        return enMaxOrMin::MAXN2;

}

void PrintMax(StNumber Info)
{
    if (CheckNumber(Info) == enMaxOrMin::MAXN1)
        cout << "The Number " << Info.Number1 << " Is Maximum";
    else
        cout << "The Number " << Info.Number2 << " Is Maximum";

}

int main()
{
    PrintMax(ReadNumbers());
    return 0;
}