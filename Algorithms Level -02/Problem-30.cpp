#include <iostream>
#include <array>
#include <limits.h> 
#include <cmath>
using namespace std;


int ReadPositivenumber(string message)
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
  char RandomNum = rand() % (To - From + 1) + From;
  return RandomNum;
}

void fillArrayWithRandomNumber(int arr1[100], int arr1Length)
{
  for(int i = 0; i < arr1Length; i++)
  {
    arr1[i] = RandomNumber(1, 100); 
  }
}

void AddationArray(int arr1[100], int arr2[100], int arrAddation[100], int arrLength)
{
  for(int i = 0; i < arrLength; i++)
  {
    arrAddation[i] = arr1[i] + arr2[i];
  }
  cout << "\n";
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

  int arr1[100], arr2[100], Addationarray[100];

  int arrLength = ReadPositivenumber("How Many Elements");

  fillArrayWithRandomNumber(arr1, arrLength);
  fillArrayWithRandomNumber(arr2, arrLength);

  AddationArray(arr1, arr2, Addationarray, arrLength);

  cout << "\nArray 1 Elements: \n";
  PrintArray(arr1, arrLength);

  cout << "\nArray 2 Elemenets: \n"; 
  PrintArray(arr2, arrLength);

  cout << "\nSum Of array 1 and array 2 elements: \n";
  PrintArray(Addationarray, arrLength);

 return 0;
}
