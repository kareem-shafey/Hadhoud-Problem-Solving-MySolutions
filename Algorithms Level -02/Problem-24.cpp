#include <iostream>
#include <string>
using namespace std;

int RandomNumber(int From, int To)
{
    int RandomNum = rand() % (To - From + 1) + From;
    return RandomNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "Please Enter Array Length\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int g = 0; g < arrLength; g++)
    {
        cout << arr[g] << " ";
    }
    cout << endl;
}

int MaxNumberOfArray(int arr[100], int arrLength)
{                                                
    int Max = arr[0];                                
    for (int j = 0; j < arrLength; j++)         
    {                                          
        if (arr[j] > Max)                         
            Max = arr[j];                                                                       }
                                                                                                  
    }                                             
    return Max;                                   
}                                              
int main()
{
    srand((unsigned)time(NULL));

    int arr[100], Length;

    FillArrayWithRandomNumbers(arr, Length);

    cout << "\nArray Elements: ";
    PrintArray(arr, Length);

    cout << "\nMax Number: " << MaxNumberOfArray(arr, Length);
    return 0;
}
