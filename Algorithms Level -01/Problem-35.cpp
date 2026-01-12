#include <iostream>
using namespace std;

struct StInfo
{
    float Pennys, Nickels, Dimes, Quarters, Dallors;
};

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

StInfo ReadInforamtion()
{
    StInfo Info;
    Info.Pennys = ReadPostiveNumber("Please Enter Pennys");
    Info.Nickels = ReadPostiveNumber("Please Enter Nickels");
    Info.Dimes = ReadPostiveNumber("Please Enter Dimes");
    Info.Quarters = ReadPostiveNumber("Please Enter Quarter");
    Info.Dallors = ReadPostiveNumber("Please Enter Dallors");
    return Info;
}

float SumPennies(StInfo Info)
{
    float TotalPennies;
    TotalPennies = Info.Pennys * 1 + Info.Nickels * 5 + Info.Dimes * 10 +
        Info.Quarters * 25 + Info.Dallors * 100;
    return TotalPennies;
}

int main()
{
    float TotalPennies = SumPennies(ReadInforamtion());
    cout << endl << "Total Pennies = " << TotalPennies << endl;
    cout << endl << "Total Dallors = " << TotalPennies / 100 << endl;
    return 0;
}