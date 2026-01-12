#include <iostream>
#include <time.h> 
using namespace std;

int ReadNumber()
{
    int number = 0;
    cout << "\nPlease Enter a Number To Search for ?" << endl;
    cin >> number;
    return number;
}

int RandomNumber(int From, int To)
{
    char RandomNum = rand() % (To - From + 1) + From;
    return RandomNum;
}

void FillArrayWithRandomNumber(int arr[100], int &arrLength)
{
    cout << "Enter Array Length\n";
    cin >> arrLength;
    
    cout << endl;
    for(int i = 0 ; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for(int i = 0;  i < arrLength; i++)
      cout << arr[i] << " ";
    cout << endl;  
}


short FindNumberPositionInArray(int arr[100], int arrLength, int Number)
{
  for(int i = 0 ; i < arrLength; i++)
  {
    if(arr[i] == Number)
    {
      return i;
    }
  }
    return -1;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    FillArrayWithRandomNumber(arr, arrLength);
    cout << "Array 1 Elements:\n";
    PrintArray(arr, arrLength);

    int Number = ReadNumber();
    cout << "\nNumber You Are Looking For Is: " << Number << "\n";
    
    short NumberPosition = FindNumberPositionInArray(arr, arrLength, Number);

    if(NumberPosition == -1)
    {
        cout << "The Number Is Not Found:-(\n";
    }
    else 
    {
        cout << "The Number Found at Position: " << NumberPosition << endl;
        cout << "The Number Found Its Order: " << NumberPosition + 1 << endl; 
    }
    return 0;
}

