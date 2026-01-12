#include <iostream>
#include <time.h> 
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialLetter = 3, Digit = 4 };

int ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

int RandomNumber(int From, int To)
{
    char RandomNum = rand() % (To - From + 1) + From;
    return RandomNum;
}

string Sperator(int g)
{
    if (g < 10)
        return " : ";
    else
        return ": ";
}

char GetRandomCharacter(enCharType Type)
{
   switch (Type)
    {
    case enCharType::SmallLetter:
        return RandomNumber(97, 122);
    case enCharType::CapitalLetter:
        return RandomNumber(65, 90);
    case enCharType::SpecialLetter:
        return RandomNumber(33, 47);
    case enCharType::Digit:
        return RandomNumber(48, 57);
    }
    return 0;
}

string GetCharacterLetter(enCharType ChooseCharacter)
{
  string CharacterWord = "";
   for(int i = 1; i <= 4; i++)
   {
     for(int g = 1; g <= 4; g++) 
     {
         CharacterWord += char(GetRandomCharacter(ChooseCharacter));
     }
         if(i < 4)
          CharacterWord += '-';
   }
      return CharacterWord;
}

void FillArrayWithKey(string arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = GetCharacterLetter(enCharType::CapitalLetter);
    }
}

void PrintArray(string arr[100], int arrLength)
{
  for(int i = 0 ; i < arrLength; i++)
  {
    cout << "Array [" << i << "]" << Sperator(i);
    cout << arr[i] << endl;
  }
  cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    string arr[100];
    int arrLength = ReadPositiveNumber("How Many Length");

    FillArrayWithKey(arr, arrLength);

    cout << "\nArray Elements:\n\n";  
    PrintArray(arr, arrLength);
    return 0;
}