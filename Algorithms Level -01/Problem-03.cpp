#include <iostream>
using namespace std;

enum enOddOrEven { Even = 1, Odd = 2 };

int ReadPostiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < 0);
    return number;
}

enOddOrEven CheckNumber(int Number)
{
    if (Number % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
}

void PrintNumberEvenOrOdd(int N)  // OR = > enOddOrEven N
{
    if (CheckNumber(N) == enOddOrEven::Even)  // N == enOddOrEven::Even
        cout << "The Number: " << N << " Is Even";
    else
        cout << "The Number: " << N << " Is Odd";
}

int main()
{
    PrintNumberEvenOrOdd(ReadPostiveNumber("Please Enter Postive Number"));
    return 0;
}