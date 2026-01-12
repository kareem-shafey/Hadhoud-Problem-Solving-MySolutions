#include <iostream>
using namespace std;

int ReadPositiveNumber(string message, int From, int To)
{
    int Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}

char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    cout << GetGradeLetter(ReadPositiveNumber("Please Enter Positive Number", 1, 100));
    return 0;
}