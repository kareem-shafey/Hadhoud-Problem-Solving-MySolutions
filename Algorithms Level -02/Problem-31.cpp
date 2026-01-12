#include <iostream>
#include <time.h> 
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

void ShuffleArray(int arrSource[100], int arrayShuffle[100], int arrLength)
{
  for(int i = 0; i < arrLength; i++)
  {
    arrayShuffle[i] = arrSource[RandomNumber(0, arrLength - 1)];
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
  int arr[100], arrayShuffle[100], arrLength;

  FillArrayWithRandomNumber(arr, arrLength);
  ShuffleArray(arr, arrayShuffle, arrLength);


  cout << "\nArray 1 Elements:\n";
  PrintArray(arr, arrLength);

  cout << "\nShuffle Array 1 Elements:\n";
  PrintArray(arrayShuffle, arrLength);

  return 0;
}