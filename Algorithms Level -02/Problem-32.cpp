#include <iostream>
#include <time.h> 
using namespace std;

int ReadPositiveNumber(string message)
{
  int number = 0;
  do
  {
    cout << message << endl;
    cin >> number;
  } while (number < 0);
  return number;
}

int RandomNumber(int From, int To)  
{
  int RandomNum = rand() % (To - From + 1) + From;
  return RandomNum;
}


void FillArrayWithRandomNumber(int arr[100], int arrLength)
{
  for(int i = 0; i < arrLength; i++)
  {
      arr[i] = RandomNumber(1, 100);
  }
  cout << endl;
}

void ReverseArray(int arr[100], int ReverseArray[100], int arrLength)
{
  for(int i = 0; i < arrLength; i++)
  {
    ReverseArray[i] =  arr[(arrLength - 1) - i];
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

int main()
{
  srand((unsigned)time(NULL));

  int arr[100], Reversearray[100];
  int arrLength = ReadPositiveNumber("How Many Elements:");

  FillArrayWithRandomNumber(arr, arrLength);

  cout << "\nArray 1 Elements:\n";
  PrintArray(arr, arrLength);
  
  ReverseArray(arr, Reversearray, arrLength);

  cout << "\nReverse Array 1 Elements:\n";
  PrintArray(Reversearray, arrLength);

  return 0;
}