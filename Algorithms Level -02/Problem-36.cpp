#include <iostream>
#include <time.h>
using namespace std;

int ReadNumber(string message)
{
    int number = 0;
    cout << message;
    cin >> number;
    return number;
}

void SimiDynamicallyArray(int arr[100], int &arrLength)
{
  int i;
  int Counter = 0;

  while(true)
  {
    int Number;
    Number = ReadNumber("\nPlease Enter a Number? ");

    int Ch1Or0 = ReadNumber("Do you want to add more numbers [0]: No, [1]: Yes? ");

    arr[Counter] = Number;
    arrLength++;
    Counter++;

    if(Ch1Or0 == 1)
    {

    Number;
    Ch1Or0;
    }
    else
     break;
    
  }
}

void PrintArray(int arr[100], int arrLength)
{
  for(int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
  cout << endl;  
}

int main()
{
  int arr[100], arrLength = 0;
   
  SimiDynamicallyArray(arr, arrLength);

  cout << "\nArray Length: " << arrLength <<endl;

  cout << "Array Elemenst: ";
  PrintArray(arr, arrLength);
    return 0;
}