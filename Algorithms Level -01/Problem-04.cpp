#include <iostream>
using namespace std;

enum enHirOrRej { Hired = 1, Rejected = 2 };

struct StInfo
{
    int Age;
    bool DriverLicense;
};


StInfo ReadInformation()
{
    StInfo Info;
    cout << "Please Enter You Age\n";
    cin >> Info.Age;
    cout << "Do You Has Driver License\n";
    cin >> Info.DriverLicense;
    return Info;
}

enHirOrRej Check(StInfo Info)
{
    if (Info.Age >= 21 && Info.DriverLicense)
        return enHirOrRej::Hired;
    else
        return enHirOrRej::Rejected;
}

void PrintResult(enHirOrRej N)
{
    if (N == enHirOrRej::Hired)
        cout << "Hired";
    else
        cout << "Rejected";
}
int main()
{
    PrintResult(Check(ReadInformation()));
    return 0;
}