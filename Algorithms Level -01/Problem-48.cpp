#include <iostream>
#include <time.h> 
#include <cmath> 
using namespace std;

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

float MonthlyInstallment(int LoanAmount, int HowManyMonths)
{
    return (float)LoanAmount / HowManyMonths;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount");
    float HowManyMonths = ReadPositiveNumber("Please Enter Total Months");

    cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths);
    return 0;
}