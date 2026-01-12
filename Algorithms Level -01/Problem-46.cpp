#include <iostream>
#include <time.h> 
#include <cmath> 
using namespace std;

void PrintLetterFromAtoZ()
{
    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }
}

int main()
{
    PrintLetterFromAtoZ();
    return 0;
}