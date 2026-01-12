#include <iostream>
#include <string>
using namespace std;

int RandomNumber(int From, int To)
{
  char RandomNum = rand() % (To - From + 1) + From;
  return RandomNum;
}

void FillArrayWithRandomNumber(int arr[100], int &arrLength)
{
    cout << "Enter Array Length\n";
    cin >> arrLength;

    for(int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for(int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int SumOfAllArrayNumber(int arr[100], int arrLength)
{
    int result = 0;
    for(int i = 0; i < arrLength; i++)
    {
       result += arr[i];
    }
    return result;
}

float SumArrayAverage(int arr[100], int arrLength)
{
    return (float) SumOfAllArrayNumber(arr, arrLength) / arrLength;
}

int main()
{ 
    srand((unsigned)time(NULL));

    int arr[100], arrLength;
    
    FillArrayWithRandomNumber(arr, arrLength);
    
    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nSum Of All Numbers Is: " << SumOfAllArrayNumber(arr, arrLength) << endl;
    

    cout << "\nAverage Of All Number Is: " << SumArrayAverage(arr, arrLength);

    return 0;
}