#include <iostream>
#include <time.h> 
using namespace std;

struct StrTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
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

StrTaskDuration ReadSeconds()
{
    StrTaskDuration TaskDuration;

    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Enter Total Seconds");

    return TaskDuration;
}

void PrintTaskDurationDetails(StrTaskDuration TaskDuration)
{
    int Day = 24 * 60 * 60;
    int Hours = 60 * 60;
    int Minutes = 60;

    int Remainder = 0;

    TaskDuration.NumberOfDays = TaskDuration.NumberOfSeconds / Day;
    Remainder = TaskDuration.NumberOfSeconds % Day;

    TaskDuration.NumberOfHours = Remainder / Hours;
    Remainder = Remainder % Hours;

    TaskDuration.NumberOfMinutes = Remainder / Minutes;
    Remainder = Remainder % Minutes;

    TaskDuration.NumberOfSeconds = Remainder;

    cout << endl;
    cout << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHours << ":"
        << TaskDuration.NumberOfMinutes << ":" << TaskDuration.NumberOfSeconds << endl;
}

int main()
{

    PrintTaskDurationDetails(ReadSeconds());

    return 0;
}