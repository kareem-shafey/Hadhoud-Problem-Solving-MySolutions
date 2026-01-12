#include <iostream>
#include <array>
#include <limits.h> 
#include <cmath>
using namespace std;

enum enPrimeOrNotPrime {Prime = 1, NotPrime = 2};

enPrimeOrNotPrime checkNumber(int Number)
{
  int M = round(Number / 2);
  for(int i = 2; i <= M; i++)
  {
    if(Number % i == 0)
      return enPrimeOrNotPrime::NotPrime;
  }
      return enPrimeOrNotPrime::Prime;  
}

int RandomNumber(int From, int To)
{
  char RandomNum = rand() % (To - From + 1) + From;
  return RandomNum;
}

void fillArrayWithRandomNumber(int arr1[100], int &arr1Length)
{
  cout << "Enter Array Length\n";
  cin >> arr1Length;

  for(int i = 0; i < arr1Length; i++)
  {
    arr1[i] = RandomNumber(1, 100); 
  }
}

void CopyOnlyPrimeNumbers(int arr1[100], int arr2[100], int arr1Length, int &arr2Length)
{
  int Counter = 0;
  for(int i = 0 ; i < arr1Length; i++)
  {
    if(checkNumber(arr1[i]) == enPrimeOrNotPrime::Prime)
    {
      arr2[Counter] = arr1[i];
      Counter++;
    }
  }
  arr2Length = --Counter;
}

void PrintArray(int arr[100], int arrLength)
{
  for(int i = 0 ; i< arrLength; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}


int main()
{
  srand((unsigned)time(NULL));

  int arr1[100], arr1Length = 0;
  fillArrayWithRandomNumber(arr1, arr1Length);

  int arr2[100], arr2Length = 0; 
  CopyOnlyPrimeNumbers(arr1, arr2, arr1Length, arr2Length);

  cout << "\nArray 1 Elements:\n";
  PrintArray(arr1, arr1Length);

  cout << "\nPrime Numbers Of Array 2:\n";
  PrintArray(arr2, arr2Length); 

 return 0;
}

