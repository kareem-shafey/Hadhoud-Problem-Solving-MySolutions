#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float ReadBillValue(string message)
{
    float BillValue;
    do
    {
        cout << "Please Enter The Value\n";
        cin >> BillValue;
    } while (BillValue <= 0);

    return BillValue;
}

float ValueAfterServiceFeeAndTax(float TotalBill)
{
    TotalBill *= 1.1;
    TotalBill *= 1.16;

    return TotalBill;
}

int main()
{
    float TheValue = ReadBillValue("Please Enter Bill Value");
    cout << "Total Bill = " << TheValue << endl;
    cout << "The Value After Service fee and Sales Tax = "
        << ValueAfterServiceFeeAndTax(TheValue);
    return 0;
}
