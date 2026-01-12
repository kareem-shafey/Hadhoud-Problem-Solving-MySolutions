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

float TotalMonths(int LoanAmount, int MonthlyInstallment)
{
    return (float)LoanAmount / MonthlyInstallment;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount");
    float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment");

    cout << "Total Months To Pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << " Months";
    return 0;
}