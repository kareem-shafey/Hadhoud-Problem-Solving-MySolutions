#include <iostream>
#include <time.h> 
#include <cmath> 
using namespace std;

enum enMonth {
    Jan = 1, Feb = 2, March = 3, Apr = 4, May = 5,
    June = 6, July = 7, Aug = 8, Septem = 9, Oct = 10,
    Nov = 11, Dec = 12
};

int ReadInRange(string message, int From, int To)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < From || number > To);
    return number;
}

enum enMonth ReadMonthrOfYear()
{
    return (enMonth)ReadInRange("Please Enter Day Of Week [1 to 12]", 1, 12);
}

string GetMonthOfYear(enMonth Month)
{
    cout << "\n";
    switch (Month)
    {
    case enMonth::Jan:
        return "January";
    case enMonth::Feb:
        return "February";
    case enMonth::March:
        return "March";
    case enMonth::Apr:
        return "April";
    case enMonth::May:
        return "May";
    case enMonth::June:
        return "June";
    case enMonth::July:
        return "July";
    case enMonth::Aug:
        return "August";
    case enMonth::Septem:
        return "September";
    case enMonth::Oct:
        return "October";
    case enMonth::Nov:
        return "November";
    case enMonth::Dec:
        return "December";
    default:
        return "Wrong Month";

    }
}


int main()
{

    cout << GetMonthOfYear(ReadMonthrOfYear());
    return 0;
}