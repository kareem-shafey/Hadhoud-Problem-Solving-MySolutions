#include <iostream>
using namespace std;

enum enOperatioType
{
    Add = '+', Subtrcact = '-', Multiply = '*', Divide = '/'
};

float ReadNumbers(string message)
{
    float number;
    cout << message << endl;
    cin >> number;
    return number;
}

enOperatioType ReadOperationType()
{
    char Op = '+';
    cout << "Please Enter Operation Type\n";
    cin >> Op;
    return (enOperatioType)Op;
}

float Calculate(float Number1, float Number2, enOperatioType o)
{
    switch (o)
    {
    case enOperatioType::Add:
        return Number1 + Number2;
    case enOperatioType::Subtrcact:
        return Number1 - Number2;
    case enOperatioType::Multiply:
        return Number1 * Number2;
    case enOperatioType::Divide:
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
}

int main()
{
    float Number1 = ReadNumbers("Please Enter The First Number");
    float Number2 = ReadNumbers("Please Enter The Second Number");

    enOperatioType OpType = ReadOperationType();
    cout << "Sum Of Numbers " << Calculate(Number1, Number2, OpType);
    return 0;
}