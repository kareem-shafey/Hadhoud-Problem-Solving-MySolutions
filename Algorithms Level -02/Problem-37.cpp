#include <iostream>
#include <time.h>
using namespace std;

int RandomNumber(int From, int To)
{
  int RandomNum = rand() % (To - From + 1) + From;
  return RandomNum;
}

void PrintArray(int arr[100], int arrLength)
{
  for(int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
  cout << endl;  
}


void FillArrayWithRandomNumber(int arrSource[100], int &arrLength)
{
  cout << "Please Enter Array Length\n";
  cin >> arrLength;

  for(int i = 0; i < arrLength; i++)
  {
    arrSource[i] = RandomNumber(1, 100);
  }
}

void AddArrayElements(int Number, int arr[100], int &arrLength)
{
  // its a new element so we need to add the length by 1
  arrLength++;
  arr[arrLength - 1] = Number;
}

void CopyArratyUsingAddArrayElements(int arrSource[100], int arrDestation[100], int arr1Length, int &arr2Length)
{
  for(int i = 0; i < arr1Length; i++)
  {
    AddArrayElements(arrSource[i], arrDestation, arr2Length);
  } 
}

int main()
{
  srand((unsigned)time(NULL));

  int arr[100], arrLength = 0;
  
   
  FillArrayWithRandomNumber(arr, arrLength);

  int arrDestation[100], arr2Length = 0;
  CopyArratyUsingAddArrayElements(arr, arrDestation, arrLength, arr2Length);

  cout << "\nArray Elemenst: \n";
  PrintArray(arr, arrLength);
  
  cout << "\nArray 2 Elements After Copy: \n";
  PrintArray(arrDestation, arr2Length);
  
    return 0;
}
