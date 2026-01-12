#include <iostream>
#include <string>
using namespace std;

int RandomNumber(int From, int To)
{
    int RandomNum = rand() % (To - From + 1) + From;
    return RandomNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{ 
    cout << "Please Enter Array Length\n";
    cin >> arrLength;

    for(int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for(int g = 0; g < arrLength; g++)
    {
        cout << arr[g] << " ";
    }
    cout << endl;
}

int MinNumberOfArray(int arr[100], int arrLength)
{  
    int Min = 0;
    Min = arr[0];
    for(int j = 0; j < arrLength; j++)
    {

        if(arr[j] < Min)
            Min = arr[j];
           
    }
    return Min;
}

int main()
{
    srand((unsigned)time(NULL));
    
    int arr[100], Length;

    FillArrayWithRandomNumbers(arr, Length);

    cout << "\nArray Elements: ";
    PrintArray(arr, Length);
    
    cout << "Min Number: " << MinNumberOfArray(arr, Length);
    return 0;
}
