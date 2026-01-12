#include <iostream>
#include <time.h> 
#include <cmath> 
using namespace std;

enum enDayOfWeek
{
    Saturday = 1, Sunday = 2, Monday = 3, Tuesday = 4, Wednesday = 5, Thuresday = 6, Friday = 7
};

int ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

enDayOfWeek ChooseDayOfWeeks(int Day)
{
    return (enDayOfWeek)Day;
}

string GetDayOfWeek(int Day)
{
    switch (Day)
    {
    case enDayOfWeek::Saturday:
        return "Its Saturday";
    case enDayOfWeek::Sunday:
        return "Its Sunday";
    case enDayOfWeek::Monday:
        return "Its Monday";
    case enDayOfWeek::Tuesday:
        return "Its Tuesaday";
    case enDayOfWeek::Wednesday:
        return "Its Wednesday";
    case enDayOfWeek::Thuresday:
        return "Its Thursday";
    case enDayOfWeek::Friday:
        return "Its Friday";
    default:
        return "Wrong Day";
    }
}


int main()
{
    int Number = ReadPositiveNumber("\nPlease Enter Number Day Of Week");

    cout << GetDayOfWeek(ChooseDayOfWeeks(Number));
    return 0;
}



// OR

// #include <iostream>
// #include <time.h> 
// #include <cmath> 
// using namespace std;

// enum enDayOfWeek 
//  {Saturday = 1, Sunday = 2, Monday = 3, Tuesday = 4, Wednesday = 5, Thuresday = 6, Friday = 7};

// int ReadInRange(string message, int From, int To)
// {
//     int number = 0;
//     do
//     {
//         cout << message << endl;
//         cin >> number;
//     } while (number < From || number > To);
//     return number;
// }

// enDayOfWeek ChooseDayOfWeeks()
// {
//     return (enDayOfWeek) ReadInRange("Please Enter Day Of Week", 1, 7);
// }

// string GetDayOfWeek()
// {
//     switch(ChooseDayOfWeeks())
//     {
//         case enDayOfWeek::Saturday:
//           return "Its Saturday";
//         case enDayOfWeek::Sunday:
//           return "Its Sunday";
//         case enDayOfWeek::Monday:
//           return "Its Monday";
//         case enDayOfWeek::Tuesday:
//           return "Its Tuesaday";
//         case enDayOfWeek::Wednesday:
//           return "Its Wednesday";
//         case enDayOfWeek::Thuresday:
//           return "Its Thursday";
//         case enDayOfWeek::Friday:
//           return "Its Friday";
//         default:
//           return "Wrong Day";              
//     }
// }


// int main()
// {

//     cout << GetDayOfWeek();
//     return 0;
// }

